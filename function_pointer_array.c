/* Array of function pointers */

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

int div(int a,int b)
{
    return a/b;
}

int main()
{
    int a,b,result,choice;
    printf("Enter the choice:\n0.Addtion\n1.Subtraction\n2.Multiplication\n3.Division\n");
    scanf("%d",&choice);
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    int (*ptr_arr[])(int,int) = {add,sub,mul,div};
    //result = (*ptr_arr[choice])(a,b);
    //result = (ptr_arr[choice])(a,b);
    // result = ptr_arr[](a,b); // it will not work
    result = ptr_arr[choice](a,b);
    printf("Result = %d\n",result);
    return 0;
}