#include<stdio.h>
int main()
{
    int num;
    printf("\n enter a number: ");
    scanf("%d",&num);
    
    if(num%2==0)
    {
        printf("\n number is odd: ");
    }
    else
    {
        printf("\n number is even: ");
    }
    return 0;
}