int main()//main function
{
   int n, first = 0, second = 1, next, c; 
 
   printf("Enter the number of terms\n");
   scanf("%d",&n); // scanning input
 
   printf("First %d terms of Fibonacci series are :-\n",n);
 
   for ( c = 0 ; c < n ; c++ ) //For Loop 
   {
      //checking condition
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      printf("%d\n",next); //output.
   }
   return 0;
}