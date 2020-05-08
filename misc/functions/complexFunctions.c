#include <stdio.h>
#include <math.h>

//double sqrt(double arg)
int min(int a, int b);
int greatesCommonDivisor(int a, int b);
double absValue(double a);
double squareRoot(double a);

int min(int a, int b){
    int smallest;
    smallest = a<=b ? a : b;
    return smallest;
}
//Greates common divisor code
int greatesCommonDivisor(int a, int b){
    int minimum = min(a,b);
    int gcd = 1;

    for(int i=minimum; i>1; i--){
        if (a%i == 0 && b%i== 0)
        {
            gcd = i;
            break;
        }
    }

    return gcd;    
}

double absValue(double a){
    a = a<0?a*-1:a;
    return a;
}

double squareRoot(double a){
    double sqt = a<0?printf("Negative number input %.1f\n",-1.0):sqrt(a);
    sqt = absValue(sqt);
    return printf("%.2f\n", sqt);

}

int main(){
    int gcdTest = greatesCommonDivisor(16,8);
    int absTest = absValue(-1.2);
    int sqrTest = squareRoot(36);

    return 0;
}