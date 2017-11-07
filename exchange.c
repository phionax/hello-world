#include <stdio.h>

int main()
{
	int a=5, b=6, t;
	t=a;
	a=b;
	b=t;
	printf("a=%d, b=%d\n",a,b);
	return 0;
}
