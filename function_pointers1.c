/* Functoin pointers*/

#include<stdio.h>

int add(int a,int b);

int main()
{
    int a,b,result;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    int (*ptr)(int,int) = add;
    //ptr = &add;
    result = ptr(a,b);
    printf("Addtion of two numbers is: %d\n",result);
    return 0;
}

int add(int a,int b)
{
    return a+b;
}