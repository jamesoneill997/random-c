#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
    FILE *pFile;
    char *filename = "test.txt";
    int c;
    int size = 0;
    int start = 0;
    

    pFile = fopen(filename, "r");

    fseek(pFile, 0, SEEK_END);
    size = ftell(pFile);

    while(size>0){
        fseek(pFile, size-1, SEEK_SET);
        printf("%c", fgetc(pFile));
       
        size--;
    }
     printf("\n");

    fclose(pFile);
    return 0;
}