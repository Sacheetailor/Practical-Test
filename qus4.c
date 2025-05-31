#include<stdio.h>
int main()
{
    int num;

    printf("\n enter a number: ");
    scanf("%d",&num);

    if(num!=0)
    {
        printf("num is even:");
    }
    else
    {
        printf("num is odd:");
    }
    
    return 0;
}