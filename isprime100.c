#include <stdio.h>
#include <windows.h>

int main(int argc, char const *argv[])
{
	int k=0, isprime = 1, count=10000;
/*	printf("��������Ҫͳ�Ƶ�������֣�");
	scanf("%d", &count);*/
	for (int i = 2; i < count; i++)
	{
		isprime = 1;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				isprime = 0;
			}
		}
			if (isprime == 1)
			{
				printf("%d\t", i);
				k ++;
				if (k % 5 ==0)
				{
					printf("\n");
				}
			}
	}
	printf("\n");
	printf("С��%d��������һ����%d��������������������\n", count, k);
	system("pause");
	return 0;
}