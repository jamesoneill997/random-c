#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main(){
    FILE *pFile = NULL;
    int lineCount = 0;
    char *filename = "test.txt";
    int c;

    pFile = fopen(filename, "r");



    while((c=fgetc(pFile)) != EOF){
        if(c == '\n'){
            lineCount++;
        }
    }
    fclose(pFile);
    pFile = NULL;

    printf("%d\n", lineCount+1);

    return 0;
}