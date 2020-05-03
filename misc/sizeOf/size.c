#include <stdio.h>

int main()
{
    int number = 4;
    char letter = 'a';
    long int bigNumber = 21000000000;
    long int biggerNumber = 200000000000000000l;
    double bigDec = 1000.55511;
    long double biggerDec = 1002132100.5555;

    printf("%u, %u, %u, %u, %u, %u\n", sizeof(number), sizeof(letter), sizeof(bigNumber), sizeof(biggerNumber), sizeof(bigDec), sizeof(biggerDec));


    return 0;
}
