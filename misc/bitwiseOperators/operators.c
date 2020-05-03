#include <stdio.h>

int main()
{
    //& binary and
    //| binary or
    //^ binary xor
    //~ binary ones compliment
    //<< binary left shift
    //>> binary right shift

    unsigned int a = 60; //0011 1100
    unsigned int b = 13; //0000 1101

    int result = 0;

    result = a|b;

    printf("The result is %d \n", result);

    return 0;
}
