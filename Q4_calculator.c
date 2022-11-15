#include<stdio.h>
int main()
{
    int a, b, add, diff, prod, ratio;
    printf("Enter two digits: ");
    scanf("%d %d", &a, &b);

    /*Addition*/
    add = (a + b);
    printf("\n Addition = %d", add);

    /*Difference*/
    diff = (a - b);
    printf("\n Substraction = %d", diff);

    /*Product*/
    prod = (a * b);
    printf("\n Multiplication = %d", prod);

    /*Ratio*/
    ratio = (float)a/b;
    printf("\n The ratio is = %d", ratio);

    return 0;


}