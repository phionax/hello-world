#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int k=0, count=0, isprime=1;
	printf("Tell me how many prime numbers you want to see: ");
	scanf("%d", &count);
	for (int i = 2; k < count; i++)
	{
		isprime = 1;
		for (int j = 2; j < (sqrt(i)+1); j++)
		// 此处之前直接用 j < i, 当运行数量较多的时候，花费时间有明显区别。 后来自己想用i/2，提速不少；后来又看到用i的开方来作为判断临界值，想通后再跑又有质的提升，以这个程序为例，运行选前50000个质数，从35秒缩短到5秒。
		//后来根据结果，不管是i/2还是sqrt(i)，都应再加1，不然会出现4和9都被算作质数的情况出现。 
		{
			if ( i % j == 0)
			{
				isprime=0;
				break;
				// 此处之前忘了这个break，再看课程后想起来，加入后大量运行时提升很明显；其实可以想象，多跑了很多次冗余的检验。 
			}
		}
			if (isprime == 1)
			{
				printf("%d\t", i);
				k++;
				if ( k % 10 == 0)
				{
					printf("\n");
				}
			}
	}
	printf("\n");
	return 0;
}
