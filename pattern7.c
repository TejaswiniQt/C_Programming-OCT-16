/*
n = 5

o/p:
*
* *
* * *
* * * *
* * * * *
*/


#include<stdio.h>


int main()
{
    int rows,i,j,count=1;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
