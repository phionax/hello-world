#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	int isprime=1;
	printf("Please enter the number:\n");
	scanf("%d",&n);
	for (int i = 2; i < n; ++i)
	{
		if ( n%i == 0 )
		{
			isprime=0;
		}
	}
	if (isprime==1)
	{
		printf("The number %d is prime number!\n", n);
	}
	else	printf("The number %d isn't prime number!\n", n);
	return 0;
}