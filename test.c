#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int k=0, count=5, j=0;
	/*printf("Tell me how many prime numbers you want to see: ");
	scanf("%d", &count);*/
	for (int i = 2; k < count; i++)
	{
		for (int j = 2; j < (sqrt(i)+1); j++)

		{
			if ( i % j == 0)
			{
				break;
			}
			
			if (j >= i)
			{
				printf("%d\t", i);
				k++;
				if ( k % 10 == 0)
				{
					printf("\n");
				}
			}
			}
	}
	printf("\n");
	return 0;
}
