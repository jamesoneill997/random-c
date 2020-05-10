#include <stdio.h>
#include <stdlib.h>


int main(){
    //at 4 bytes each, can store 25 numbers
    int *pNum = (int *)malloc(100);
    //will work on different operating systems
    int *pNum1 = (int *)malloc(25*sizeof(int));

    //number of elems, size of each elem
    int *cPNum = (int *)calloc(100, sizeof(int));

    //resize previously allocated mem
    realloc(pNum,125);



    //release memory in the same block
    free(pNum);
    free(pNum1);
    free(cPNum);


    return 0;
}