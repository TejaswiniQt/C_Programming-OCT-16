/*
n = 5

o/p:
        5 
      4 4 4 
    3 3 3 3 3 
  2 2 2 2 2 2 2 
1 1 1 1 1 1 1 1 1 
*/


#include<stdio.h>


int main()
{
    int rows,i,j,k;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=(rows-i); j++)
        {
            printf("  ");
        }
        for(k=1; k<=(rows+i-j); k++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}