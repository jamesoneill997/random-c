#include <stdio.h>
//global constant
#define TAXRATE = 0.015
#define BIGSTRING = "Yo"

int main(){
    // /0 will terminate string 
    printf("Hello \0 there!");

    //must be at least 1 greater than actual length 
    char myString[6] = {"Hello"};

    //const string
    const char bigString = {"hey"};

    //format specifier
    printf("%s\n", myString);

    
}