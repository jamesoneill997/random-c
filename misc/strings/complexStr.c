#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void revString(char letters[]);
void bubbleSort(char str[][20], int size);

int main(){
    int len=0;
    printf("How many words are you going to sort?\n");
    scanf("%d", &len);
    char list[len][20];

    for (int i = 0;i<len;i++){
        scanf("%19s", list[i]);
    }
    printf("\n\n\n\n\n\n");

    bubbleSort(list, len);

    return 0;
}

void revString(char letters[]){
    int len = strlen(letters);
    char reversed[]= {""};
    for(int i = len-1, j=0; i>=0; i--,j++){
        reversed[j]=letters[i];
    }
    printf("%s\n", reversed);
}

void bubbleSort(char str[][20], int size){
    char tmp[20];
    int swaps = 0;

    for (int i = 0; i<size-1;i++){
        if (i == 0){
            swaps = 0;
        }

        else if(i == size-1 && swaps==0){
            break;
        }

        if(strcmp(str[i], str[i+1]) <= -1){
            continue;
        }

        else{
            swaps+=1;
            strcpy(tmp, str[i+1]);
            strcpy(str[i+1], str[i]);
            strcpy(str[i], tmp);
            
        }
    }

    for (int i = 0;i<size;i++){
        printf("%s\n",str[i]);
    }

}
