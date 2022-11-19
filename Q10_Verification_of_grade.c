#include<stdio.h>
int main(void)
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if(marks>90)
        printf("\n Your got:- grade O ");
    else
        if(marks>80)
            printf("\n You got:- grade E");
    else
        if(marks>70)
            printf("\n You got:- grade A");
    else
        if(marks>60)
            printf("\n You got:- grade B");
    else
        if(marks>50)
            printf("\n You got:- grade C");
    else
        if(marks>40)
            printf("\n You got:- grade F");
    
    return 0;
}