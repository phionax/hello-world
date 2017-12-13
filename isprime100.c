#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int k=0, isprime = 1, count=100000;
/*	printf("请输入想要统计的最大数字：");
	scanf("%d", &count);*/
	for (int i = 2; i < count; i++)
	{
		isprime = 1;
		for (int j = 2; j < (sqrt(i)+1); j++)
		{
			if (i % j == 0)
			{
				isprime = 0;
				break;
			}
		}
			if (isprime == 1)
			{
				printf("%d\t", i);
				k ++;
				if (k % 10 ==0)
				{
					printf("\n");
				}
			}
	}
	printf("\n");
	printf("小于%d的数字中一共有%d个质数，具体如上所列\n", count, k);
	system("pause");
	return 0;
}
