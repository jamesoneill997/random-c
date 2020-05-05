#include <stdio.h>


int main(){
    enum weekend {Friday, Saturday, Sunday};
    enum weekend today = Saturday;

        //goto statement (not recommended unless jumping out of many loops)
        if (today==Saturday)
        {
            goto REPRINT;
        }
    
    //switch statement
    switch(today){
        case Friday:
            printf("Today is Friday\n");
            break;

        case Saturday:
            REPRINT:
            printf("Today is Saturday\n");
            today = Sunday;
            break;
        
        case Sunday:
            printf("Today is Sunday\n");
            break;

        default:
            printf("It is not the weekend\n");
            break;

    }



    
    return 0;

}