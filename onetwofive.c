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
					printf("%d��1ë��%d��2ë��%d��5ë����%dԪ\n", one, two, five, x);
					count++;
				}
			}
		}
	}
	printf("һ����%d�ַ���\n",count);
	
	return 0;
}
