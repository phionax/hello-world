#include <stdio.h>

int main(int argc, char const *argv[])
{
	int k=0, count=0, isprime=1;
	printf("Tell me how many prime numbers you want to see: ");
	scanf("%d", &count);
	for (int i = 2; k < count; i++)
	{
		isprime = 1;
		for (int j = 2; j < (i/2); j++)
		// �˴�֮ǰֱ���� j < i, �����������϶��ʱ�򣬻���ʱ������������ 
		{
			if ( i % j == 0)
			{
				isprime=0;
				break;
				// �˴�֮ǰ�������break���ٿ��γ̺���������������������ʱ���������ԣ���ʵ�������󣬶����˺ܶ������ļ��顣 
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
