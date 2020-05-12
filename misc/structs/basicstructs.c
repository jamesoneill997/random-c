#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    //define
    struct date{
        int month, day, year;
    };

    //instance
    struct date today;


    //alternate creation
    struct time{
        int hour, min, sec;
    } now;

    //initialisation
    struct time later ={1,2,55};

    //set members
    today.day = 25;
    today.month = 1;
    today.year = 2009;

    //reference members of an instance
    printf("Day: %d, Month: %d, Year: %d\n", today.day,today.month,today.year);


    //array of structs
    struct date dates[10] = {[0]=today, {1,2,1999}};

    //alternate declaration
    dates[1].day = 1;
    dates[1].month = 12;
    dates[1].year = 2009;

    //struct containing array
    struct mon{
        char abbr[4];
        int index;
    };

    //strings
    char jan[] = {"jan"}; 
    struct mon january;

    strcpy(january.abbr, jan);
    january.index =1;

    printf("\n%s\n", january.abbr);


    //nested structs
    struct dateTime{ 
        struct date sdate;
        struct time stime;
    } dT;
    //accessing nested members
    dT.sdate.month = 12;

    //there struct is only accessible through hello due to scoping
    struct hello{
        struct there{
            int time;
        }this;
    };

    //pointers and struct
    struct date *datePtr=0;

    datePtr = &today;

    //accessing members
    (*datePtr).month = 12;
    
    //alternate syntax
    datePtr->month = 12;

    //struct containing pointers
    struct intPointers{
        int *p1;
        int *p2;
    }pointers;

    int i,j = 10;


    pointers.p1 = &i;
    pointers.p2 = &j;


    //always use pointers to structs when passing to functions
    int getDates(struct date *myd);




    return 0;
}