#include<stdio.h>
int main(void)
{
    float a, b, c, avg;
    printf("\n Enter three numbers:- ");
    scanf("%f %f %f", &a, &b, &c);
    avg = (a+b+c)/3;
    printf("The average of three numbers is:- %f", avg);
    return 0;
}