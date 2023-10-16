/*
n = 5

o/p:
* * * * *   
*       *   
*       *   
*       *   
* * * * *
*/


#include<stdio.h>


int main()
{
    int rows,i,j,k;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(i=1; i<=rows; i++)
    {
        if(i==1 || i==rows)
        {
            for(j=1; j<=rows; j++)
            printf("* ");
        }
        else
        {
            for(k=1; k<=rows; k++)
            {
                if(k==1 || k==rows)
                printf("* ");
                else
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
