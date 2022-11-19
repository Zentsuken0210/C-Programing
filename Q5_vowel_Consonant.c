#include<stdio.h>
int main(void)
{
    char ch;
    printf("Enter the alphabet: ");
    scanf("%c", &ch);

    if (ch =="u"||ch =="e"||ch =="i"||ch =="o"||ch =="u" || ch =="A"||ch =="E"||ch =="I"||ch =="O"||ch =="U")
    printf("The letter '%c' is vowel", ch);

    else
    printf("The letter '%c' is consonant", ch);
    
    return 0;
}
