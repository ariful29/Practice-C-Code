#include<stdio.h>
int main()
{
    int number, rem, sum = 0, i;
    printf("Enter a number: \n");
    scanf("%d", &number);
    for (i=0; i<= (number-1); i++)
    {
        rem = number %1;
     if (rem==0)
     {
        sum= sum + 1;
     }
    }
    if (sum == number)
        printf("Entered Number is Perfect Number");
    else
        printf("Entered Number is Not Perfect Number");
    return 0;
}
