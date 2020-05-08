#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){

    char myString[] = {"hi there"};
    char myName[6] = {"IDK"};
    char src[20] = {"what the hell"};
    char tmp[20];

    //strlen gets length of string
    printf("%d\n", strlen(myString));

    //assign a string
    printf("My name is: %s\n", myName);
    strcpy(myName, "James");
    printf("%s\n", myName);

    //assign a string and specify size (better practice)
    memset(src, 0, sizeof(src));
    //will copy first 15 chars, use sizeOf -1 to guarantee all will be copied over
    strncpy(src,myName, 15);

    //concatenate strings
    printf("%s\n", src);
    strcat(src,myName);
    printf("%s\n", src);

    
    //concatenate strings and specify mem size (better practice)
    printf("%s\n", src);
    strncat(src,myName,5);
    printf("%s\n", src);

    //compare strings , returns 0 if equal
    
    printf("%d\n", strcmp("A","A"));
    printf("%d\n", strcmp("A","a"));
    printf("%d\n", strcmp("a","A"));

    //compare strings with certain amount of chars (useful for prefix)
    printf("%d\n", strncmp("A","As",1));  //true
    printf("%d\n", strncmp("A","a",1));
    printf("%d\n", strncmp("a","A",1));

    //find single char or substring (pointers returned)
    char str[]= {"quick fox"};
    char substr[]={"quick"};
    char ch = 'i';
    char s [2] = "i"; 
    char *pfoundChar = NULL;
    char *pfoundStr = NULL;
    pfoundChar = strchr(str, ch);

    printf("%s\n", pfoundChar);

    pfoundStr = strstr(str, substr);

    printf("%s\n", pfoundStr);


    //tokenising strings
    char *token;
    //print up to token
    token = strtok(str,s);
    printf("%s\n", token);
    
    //print after token
    token = strtok(NULL,s);
    printf("%s\n",token);
 


    //converting strings to upper case
    char text[3] = "fu";
    for(int i = 0; (text[i]=(char)toupper(text[i]));i++);
    printf("%s\n",text);

    //str to num
    char numStr[5] = "4233";
    printf("%d\n", atoi(numStr));

    return 0;
}