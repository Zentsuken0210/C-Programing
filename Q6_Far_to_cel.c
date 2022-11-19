#include<stdio.h>
int main(void)
{
    float cel, fah;
    printf("\n Enter the temparature in Farhenheite: ");
    scanf("%f", &fah);

    cel = ((fah-32)*5)/9;

    printf("\n The temparature in celcious is : %f", cel);

    return 0;

}