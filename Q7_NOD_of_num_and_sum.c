#include<stdio.h>
int main(void)
{
    int num,rem,sum=0,count=0;
    printf("Enter the three digit: ");
    scanf("%d", &num);

    while(num>0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
        count++;
    }

    printf("\n The sum is: %d", sum);
    printf("\n Number of count is: %d", count);

    return 0;

}