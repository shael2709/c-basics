#include<stdio.h>
 
int main() {
   int a1, a2, a3, a4, a5, sum, total = 500;
   float per;
 
   printf("\nEnter marks of 5 subjects : ");
   scanf("%d %d %d %d %d", &a1, &a2, &a3, &a4, &a5);
 
   sum = a1 + a2 + a3 + a4 + a5;
   printf("\nSum : %d", sum);
 
   per = (sum * 100) / total;
   printf("\nPercentage : %f", per);
 
   return (0);
}
