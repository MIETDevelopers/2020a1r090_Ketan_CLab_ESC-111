#include<stdio.h> //Header File Input Output
#include<math.h>//header file mathematical functions
int main()//main function
{
	int num, count, fact = 1;

	printf("Enter a number to find its Factorial\n");
	scanf("%d", &num);//reading input

	for(count = 1; count <= num; count++)//for loop
	{
	   fact = fact * count;
	}//num=5, factorial=120
	printf("Factorial of %d is %d\n", num, fact);//output

	return 0;
}