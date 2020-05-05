/*
Problem definition:
    user enters amount of hours
    pay rate is 12/hr
    overtime is anything above 40 hours
    overtime is time and a half (18)
    tax rate is:
        15% for first 300
        20% for next 150
        25% for the remainder
*/

#include <stdio.h>

int main(){
    //variables (totalHours should be unsigned to prevent negative input)
    unsigned int totalHours = 0;
    int cutOff = 40;
    double standardRate = 12.0;
    double overtimeRate = 1.5 * standardRate;
    double grossPay = 0;
    double netPay = 0;

    //user input
    printf("Please enter the total number of hours worked (nearest whole number): ");
    scanf("%i", &totalHours);

    //calculate gross pay
    grossPay = (totalHours<=cutOff) ? totalHours*standardRate : ((cutOff*standardRate) +  ((totalHours - cutOff) * overtimeRate));

    //calculate net pay
    if(grossPay<=300){
        netPay = grossPay*0.85;
    }
    else if(grossPay<=450 && grossPay > 300){
        netPay = (300*.85) + ((grossPay-300)*0.8);
    }
    else{
        netPay = (300*.85) + ((150)*0.8) + ((grossPay-450)*0.75);
    }

    printf("%.2f\n", netPay);

    return 0;


}