#include <stdio.h>

//#include<headerfile> to import function
int a = 3;
int b = 5;

//after including, you must declare them, good practice to declare at the top
void printMessage(void);


int add(int a,int b){
    return a+b;
}


//when passing an array, you must pass the size of the array also
double sum(int a[], int size){
    double tot = 0;

    for(int i = 0; i < size; i++){
        tot+=a[i];
    }

    return tot;
}



int main() {
    printf("%d\n", add(a,b));

    return 0;
}