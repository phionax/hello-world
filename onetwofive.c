#include <stdio.h>

int main()
{
	int one=0, two=0, five=0, count=0;
	int x;
	printf("How many yuan do you need: ");
	scanf("%d", &x);
	for(one=1; one<x*10; one++)
	{
		for(two=1; two<(x*10/2);two++)
		{
			for(five=1; five<(x*10/5);five++)
			{
				if(one+two*2+five*5==x*10)
				{
					printf("%d个1毛加%d个2毛加%d个5毛等于%d元\n", one, two, five, x);
					count++;
				}
			}
		}
	}
	printf("一共有%d种方案\n",count);
	
	return 0;
}
