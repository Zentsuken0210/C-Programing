#include<stdio.h>
int main(void)
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if(num%2==0)
        printf("\n The number %d id even", num);
    else
        printf("\n The number %d is odd", num);
    
    return 0;
}