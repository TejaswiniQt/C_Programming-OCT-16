/*
n = 5

o/p:
* * * * *
 * * * *
  * * *
   * *
    *
*/


#include<stdio.h>


int main()
{
    int rows,i,j,k;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(i=rows; i>=1; i--)
    {
        for(j=1; j<=(rows-i); j++)
        {
            printf(" ");
        }
        for(k=1; k<=i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
