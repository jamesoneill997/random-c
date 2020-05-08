#include <stdio.h>
#include <stdlib.h>

int len(const char str[]);
void concat(char result[], const char str1[], const char str2[]);
_Bool equal(const char str1[], const char str2[]);

int main(){
    char result[20];
    char test[5] = {"test"};
    char test2[5] = {"wows"};
    printf("%d\n", len(test));
    concat(result, test, "test");
    printf("%d\n",equal(test, "test"));
    return 0;
}

int len(const char str[]){

    for(int i= 0; str[i] != '\0'; i++){
        if(str[i+1] == '\0'){
            return i+1;
        }
    }
}
void concat(char result[], const char str1[], const char str2[]){
    for (int i = 0; i<len(str1); i++){
        result[i] = str1[i];
    }

    for (int i = 0;i<len(str2);i++){
        printf("%d\n",i);
        result[len(str1)-1 + i] = str2[i];
    }

    printf("%s\n", result);
}

    _Bool equal(const char str1[], const char str2[]){
    if(len(str1) != len(str2)){
        return 0;
    }
    
    for (int i = 0;i<len(str1);i++){
        if(str1[i] != str2[i]){
            return 0;
        }
        else if( (str1[i] == str2[i]) && (i = len(str1)-1) ){
            return 1;
        }
    }
}