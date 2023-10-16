/* passing the name of the function as an argument t the function */

#include<stdio.h>

int add(int a,int b)
{
    return a+b;
}

void fun(int (*ptr)(int,int))
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    int result = ptr(a,b);
    printf("Result = %d\n",result);
}

int main()
{
    fun(add);
    return 0;
}