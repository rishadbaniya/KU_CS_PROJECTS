// 1. Write a program to convert centigrade to Fahrenheit. [F = 9/5 * C + 32]

#include <stdio.h>

int main(){
    float cen, far;
    printf("Enter temperature in Centigrade Scale : ");
    scanf("%f", &cen);
    far = (9/5) * cen+ 32;
    printf("\n %0.2f Centigrade is equivalent to %0.2f Fahrenheit", cen , far);
    return 0;
}
