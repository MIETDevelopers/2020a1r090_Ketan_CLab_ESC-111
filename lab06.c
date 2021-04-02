#include<stdio.h>
#include<math.h>
int main()
{
   float x1, y1, x2, y2, x, y, eucl_distance;
   printf("Enter x-coordinate of first point:\n");
   scanf("%f", &x1);
   printf("Enter y-coordinate of first point:\n");
   scanf("%f", &y1);
   printf("Enter x-coordinate of second point:\n");
   scanf("%f", &x2);
   printf("Enter y-coordinate of second point:\n");
   scanf("%f", &y2);
   eucl_distance = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
   printf("Euclidean distance between two points = %f", eucl_distance);
   return 0;
}