/*
n = 5

o/p:
A 
A B 
A B C 
A B C D 
A B C D E 
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
            printf("%c ",64+j);
        }
        printf("\n");
    }
}
