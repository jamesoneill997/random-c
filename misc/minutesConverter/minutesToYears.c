#include <stdio.h>

int main()
{
    //variables
    double minsInYear = 525600;
    int minutes;
    int years;
    double result;
    double days;
    
    //accept input from user
    printf("Please enter the number of minutes: ");
    scanf("%i", &minutes);
    result = minutes/minsInYear;
    days = (result-(int)result)*365;

    printf("%i minutes is the equivalent of %.0f years and %.0f day(s)\n", minutes, result, days);

    return 0;
}
