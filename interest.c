#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	double y=x*(1+0.033)*(1+0.033)*(1+0.033);
	printf ("%f",y);
	return 0;
}
