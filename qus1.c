#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,avg,grd;

    printf("\n enter marks of gujrati: ",s1);
    scanf("%d",&s1);

    printf("\n enter marks of english: ",s2);
    scanf("%d",&s2);

    printf("\n enter marks of maths: ",s3);
    scanf("%d",&s2);
    
    printf("\n enter marks of science: ",s4);
    scanf("%d",&s4);

    printf("\n enter marks of SS: ",s5);
    scanf("%d",&s5);

    switch(grd)
    case A:
        printf("90 to 100 'A+' garde: ");
    break;

    case 2:
        printf("80 to 89 'A' garde: ");
    break;

    case 3:
        printf("70 to 79 'B+' grade: ");
    break;

    case 4:
        printf("60 to 69 'B' grade: ");
    break;

    case 5:
        printf("50 to 59 'c' grade: ");
    break;

    default:
        printf("below 50 you are promotted: ");

    return 0;
}