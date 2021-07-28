#include<stdio.h>
int main()
{
	int num;

    while(1==1)
    {

	scanf("%d",&num);
	if(num%2==0)
	{
		printf("%d is divisible by 2\n",num);
	}
	if(num%3==0)
	{
		printf("%d is divisible by 3\n",num);
	}

	if(num%5==0)
	{
		printf("%d is divisible by 5\n",num);
	}

    }
	return 0;
}
