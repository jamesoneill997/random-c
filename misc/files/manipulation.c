#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
    //open a file, plus sign means create if not already existing and truncates to 0
    FILE *pFile = NULL;
    char *filename = "test.txt";
    pFile = fopen(filename, "w"); //open file to write
    if (!pfile)
    {
        printf("Failed to open file %s\n", filename);   
    }
    //rename, returns int with status code (must be closed before rename)
    //rename(filename,"tests.txt")

    pFile = NULL;
    
    //delete
    //remove("test.txt");

    //get characters from file
    int mChar =  fgetc(pFile);

    //get string from file
    //fgets(str, int limit, fp)

    //formatted input, returns number of matches for parameters
    //scanf(fp, format())

    //go back to beginning of file
    //rewind(pFile)

    //puts to write to file (make sure to add in \0 manually)
    //print format
    //fprintf(pFile)
    
    ///EOF == end of file

    //get current pos
    ftell(pFile);

    //seek end finds end
    fseek(pFile, 0, SEEK_END);

    //setting position
    fseek(pFile, 4 , SEEK_SET);

    
    
    fclose(pFile);

    return 0;
}