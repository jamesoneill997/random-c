#include <stdio.h>

int main(void){ 
    int sum = 89;
    char letter = 'a';
    float percent = 80.4433f;
    double temperature = 100.55;
    _Bool hot = 1;


    printf("Integer = %i\n", sum);
    printf("Float = %f\n", percent);
    printf("Char = %c\n", letter);
    printf("Double = %e\n", temperature);
    printf("Boolean = %i\n", hot);
    printf("Rounded Float = %.2f \n", percent);

    return 0;
}