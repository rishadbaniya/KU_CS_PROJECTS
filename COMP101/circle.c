#include <stdio.h>
#include <math.h>

int main(){
    float radius, area, circumference;
    printf("Enter radius of the circle : ");
    scanf("%f", &radius);
    area = M_PI * pow(radius, 2);
    circumference = 2 * M_PI * radius;
    printf("\nArea of the circle :  %0.2f", area);
    printf("\nCircumference of the circle : %0.2f", circumference);
    return 0;
}
