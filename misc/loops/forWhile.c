#include <stdio.h>

int main(){
    int whileVar = 1;

    //single variable for loop
    for(int i=1; i<10; i++){
        printf("%d\n", i);
    }

    //multiple variable for loop

    for(int i=1, j=2; i<10; i++, j++){
        printf("%d\n", i+j);
    }


    //summing in for loops
    for(int i=0,sum=0; i<=10; sum+=i++){
        if (i==9)
        {
            printf("%d\n", sum);
        }
        
    }

    //infinite loop (awaiting connection), avoid where possible
    //for(;;)

    while(whileVar <= 10){
        printf("%d\n", whileVar);
        whileVar++;
    }

    whileVar = 0;

    while(whileVar <= 10){
        if (whileVar == 4)
        {
            break;
        }
        printf("%d\n", whileVar);
        whileVar++;
    }


    return 0;
}