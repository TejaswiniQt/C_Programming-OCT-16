/*
n = 5

o/p:
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
*/


#include<stdio.h>


int main()
{
    int rows,i,j,k,val,s1;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(i=1; i<=rows; i++)
    {
        
        for(j=1; j<=(rows-i); j++)
        {
            printf("  ");
        }
        for(k=0; k<1; k++)
        {
            val = i-1;
            s1 = i;
            for(int n=0; n<=val; n++)
            {
                printf("%d ",s1++);
            }
            s1--;
            for(int x=val; x>0; x--)
            {
                printf("%d ",--s1);
            }
            
        }
        printf("\n");
    }
}