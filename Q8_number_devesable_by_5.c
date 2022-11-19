#include<stdio.h>
int main(void)
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num%5==0)
        printf("\n The number %d is divisible by 5", num);
    else
        printf("\n The number %d is not divisible by 5", num);

    if (num%11==0)
        printf("\n The number %d is divisible by 5", num);
    else
        printf("\n The number %d is not divisible by 5", num);

    return 0;

}