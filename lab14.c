#include<stdio.h>//header file
int main()//main function
{
    int a, s;
    printf("Enter value of a: ");
    scanf("%d",&a);//scanning input
    s = 0;
    while(a > 0)//while loop
    {
        s = s + (a%10);
        a = a / 10;//formula to calculate sum of digit
    }
    printf("Sum of digits: %d",s);//output
    return 0;
}