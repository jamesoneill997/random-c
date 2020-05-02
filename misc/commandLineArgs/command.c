#include <stdio.h>

int main(int argc, char *argv[]){

    //first arg is a.out
    int numberOfArgs = argc - 1;
    char *argumentOne = argv[1];
    char *argumentTwo = argv[2];

    printf("Number of Arguments: %d \n", numberOfArgs);
    printf("Argument 1 is: %s \n", argumentOne);
    printf("Argument 2 is: %s \n", argumentTwo);

    return 0;
}