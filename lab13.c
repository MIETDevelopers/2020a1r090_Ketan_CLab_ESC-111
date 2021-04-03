#include <stdio.h>//header file
int main()//main function
{
   int n, i, count = 0;

    printf("Enter the Number.\n");
    scanf("%d",&n);//scanning input

    for(i=2; i<=n/2; ++i)//for loop
    {
        //Check for non prime number
        if(n%i==0)
        {
            count=1;
            break;
        }
    }
    //output.
    if (count==0)
        printf("%d is a Prime number.",n);
    else
        printf("%d is not a Prime number.",n);

    return 0;    
}