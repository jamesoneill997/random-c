#include <stdio.h>

int getLen(const char *string);

int main(){
    const char input[] = {"Hello"};
    const char *pInput = &input[0];

    printf("%d\n", getLen(pInput));

    return 0;
}

int getLen(const char *string){
    const char *pS = string;
   
    while(*string){
        *string++;
    }

    return string - pS;
}