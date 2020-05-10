#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char *p = (char *) calloc(1, sizeof(char));

    printf("Please enter a string: ");
    scanf("%s", p);

    if(!*p){
        printf("String is too large");

        return 1;
    }

    printf("%s\n",p);

    free(p);
    return 0;
}