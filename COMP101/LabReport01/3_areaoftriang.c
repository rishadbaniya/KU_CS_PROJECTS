// 3. Write a program that calculates the area of a triangle. Area =√s(s-a)(s-b)(s-c) and s=(a+ b + c) / 2
//
// NOTE : There is no proper errro handling for values like negatives, its broken but works enough for the assignment

#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, s, area;
    printf("Enter first side of the triangle - ");
    scanf("%f", &a);

    printf("\nEnter second side of the triangle - ");
    scanf("%f", &b);

    printf("\nEnter third side of the triangle - ");
    scanf("%f", &c);

    s = (a + b + c) / 2;

    float __area = s * (s - a) * (s - b) * (s - c);
    area = sqrt(__area);

    printf("\n Therefore, the area of the triangle is %0.2f ", area);

    return 0;
}


