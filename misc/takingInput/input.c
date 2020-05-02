#include <stdio.h>

int main(){
    //defining the variables
    char str[100];
    int i;

    printf("Please enter a string and a number: \n");
    //scans for input, use '&' prefix for all non-str types when scanning
    scanf("%s %d", str, &i);

    //Don't use '&' prefix when formatting
    printf("You entered '%s' and '%d', congrats!\n", str, i);
    //returning number useful if returning error code
    return 0;
}