// 4. Write a program that reads the marks in each subject and calculates the percentage.
// Assume 3 subjects have to be read from user


// I'll assume full marks for each subject as 100

#include <stdio.h>

int main(){
    float phy, chem, math, total_obtained, perc;

    printf("Enter marks for PHYSICS - ");
    scanf("%f", &phy);

    printf("\nEnter marks for CHEMISTRY - ");
    scanf("%f", &chem);

    printf("\nEnter marks for MATH - ");
    scanf("%f", &math);

    total_obtained = phy + chem + math;
    perc = (total_obtained / 300) * 100;

    printf("\nPercentage Obtained - %0.2f %%", perc);

    return 0;
}




