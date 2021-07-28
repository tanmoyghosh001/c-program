#include<stdio.h>
int main()
{
   int n, sum=0;

   printf("Enter n value: ");
   scanf("%d",&n);

   for(int i=1; i<=n; i++)
   {
     sum += i*i*i; //sum = sum + (i*i*i);
   }
   printf ("sum=%d",sum);
    return 0;
    }
