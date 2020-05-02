#include <stdio.h>

float width;
float height;

int main()
{
    printf("Please enter the width and height of the rectangle (floating point): ");
    scanf("%f %f", &width, &height);


    float perimeter = (width + height) * 2;
    float area = width * height;

    printf("\nThe perimeter of the rectangle is %.2f units\n", perimeter);
    printf("The area of the rectangle is %.2f units^^2 \n", area);

    return 0;
}
