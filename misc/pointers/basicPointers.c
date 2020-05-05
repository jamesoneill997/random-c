#include <stdio.h>
#include <stddef.h>


int main(){
    //initialise pointer to number
    int *pnumber;
    //initialise pointer to char
    char *pc;
    //initialise pointer to float
    float *pf;
    //null pointer
    int *pnull = NULL;
    //assign address of num
    int num = 99;
    int *pnumPoint = &num;

    //dereferencing pointers (*pname)

    int result = *pnumPoint +=5;

    printf("%d\n", result);
    //address of pointer
    printf("%p\n", pnumPoint);
    //address of val
    printf("%p\n", (void*)&pnumPoint);

    //constant pointer, address cannot be changed, value can
    int const *pnum = 0;
    //pointer to a constant, value cannot change, address can
    const int *a = &result;

    //void allows return of any type but must be cast when dereferencing
    void *vptr;
    vptr = &result;

    
    //array containing 199 ints
    int values[199];

    int *pVals = NULL;

    //set pointer to beginning of the array
    pVals = values;
    //this does the same thing
    pVals = &values[0]

   //integer val printed    
    
    
    
    printf("%d\n", (int *) vptr);



    return 0;
}
