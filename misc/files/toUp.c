#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(){
    //vars
    int c;

    //files, cycle through to read and write
    char *filename = "test.txt";
    char *tmpFilename = "tmp.txt";

    //file objects
    FILE *pFile = NULL;
    FILE *pDest = NULL;

    //open input file with read access
    pFile = fopen(filename, "r");

    //open output file, create if non-existent and truncate 0
    pDest = fopen(tmpFilename, "w+");

    rewind(pFile);

    while((c= fgetc(pFile)) != EOF){    
        if(islower(c)){
            fputc(c-32,pDest);
        }

        else{
            fputc(c,pDest);
        }

    }

    rename(tmpFilename, filename);

    fclose(pDest);
    fclose(pFile);

    return 0;
}