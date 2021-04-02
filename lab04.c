#include <stdio.h>
int main()
{
    int a,b,sum,diff,mul,rem;
    printf("Enter two numbers \n");
    scanf("%d%d,&a,&b");
    sum=a+b;
    diff=a-b;
    mul=a*b;
    rem=a%b;
    printf("Addition is %d\n",sum);
    printf("Subtraction is %d\n",diff);
    printf("Multiplication is &d\n",mul);
    printf("Remender is &d\n",rem);
    return 0;
}