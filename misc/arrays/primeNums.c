#include <stdio.h>

int main()
{
    int range = 99;
    int primes[55] = {2,3, [54]=0};
    //first undefined value in the array
    int currTop = 2;

    for(int i=4;i<range;i++){
        //remove even and divisible by 3 (current primes)
        if(i%2==0||i%3 ==0){
            continue;
        }
        //for odd numbers
        else{
            //for all defined values in the array
            for (int j = 0; j<currTop;j++){
                //early exit if it's divisible
                if (i%primes[j]==0){
                    break;
                }
                //if divisible by another prime AND j is the last defined element
                if ((i%primes[j] != 0)&&(j==currTop-1)){
                    primes[currTop] = i;
                    currTop++;
                    break;
                }
                               
            }
        }
    }
    
    for(int i=0;i<55;i++){
        printf("%d\n", primes[i]);
    }

    return 0;
}
