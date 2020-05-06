#include <stdio.h>


int main()
{
    int numbers[5];
    //put element into array
    numbers[0] = 5;
    //put many elements into array
    for(int i=1;i<5;i++){
        numbers[i] = i;
        printf("%d\n", numbers[i]);
    }
    //initialising array elements 
    int counters[5] = {0,1,2,3,4};
    //select certain values to set to certain values (non defined set as 0) (here, [3] would be set to 102)
    int sample[10] = {[2]=100,102, [5]= 80};
    
    //multi dimensional array (row and column access, matrix concept)
    int matrix[3][4] = {{10,20,30,40},{11,12,13,14},{21,22,23,24}};
    
    //variable length array
    int a = 5;
    int nums[a];

    return 0;
}
