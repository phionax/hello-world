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
		// �˴�֮ǰֱ���� j < i, �����������϶��ʱ�򣬻���ʱ������������ �����Լ�����i/2�����ٲ��٣������ֿ�����i�Ŀ�������Ϊ�ж��ٽ�ֵ����ͨ�����������ʵ����������������Ϊ��������ѡǰ50000����������35�����̵�5�롣
		//�������ݽ����������i/2����sqrt(i)����Ӧ�ټ�1����Ȼ�����4��9��������������������֡� 
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
