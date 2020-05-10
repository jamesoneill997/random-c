#include <stdio.h>


double square(double *ptr);

int main(){
    double x = 12.0;
    double *pX = &x;
    //before
    printf("%.2f\n", x);
    printf("%.2f\n", square(pX));
    //after - variable outside function changed
    printf("%.2f\n", x);

    return 0;
}

double square(double *ptr){
    *ptr*=*ptr;

    return *ptr;
}