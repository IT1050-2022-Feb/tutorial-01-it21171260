/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int mark1,mark2;

   printf("input mark 1 : ");
   scanf("%d",&mark1);
   printf("input mark 2 : ");
   scanf("%d",&mark2);

   printf("your mark avarage is : %.2f",(float)(mark1+mark2)/2);

  return 0;
}

