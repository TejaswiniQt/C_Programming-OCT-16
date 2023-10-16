/* passing Array of function pointers as an argument */

#include<stdio.h>

int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

int mul(int a,int b)
{
    return a*b;
}

int divi(int a,int b)
{
    return a/b;
}

int fun(int (*ptr[])(int,int))
{
    int a,b,result,choice;
    printf("Enter the choice:\n0.Addtion\n1.Subtraction\n2.Multiplication\n3.Division\n");
    scanf("%d",&choice);
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    result = (*ptr[choice])(a,b);
    return result;
    
}
int main()
{
    int result;
    int (*ptr_arr[])(int,int) = {add,sub,mul,divi};
    result = fun(ptr_arr);
    printf("Result = %d\n",result);
    return 0;
}