#include <stdio.h>

int main ()
{
	const double rate = 8.25;
	const int standard = 40;
	int hours;
	double pay;
	
	printf("How many hours have you worked: ");
	scanf("%d",&hours);
	printf("\n");
	
	if ( hours > standard)
		pay = standard * rate + (hours - standard)*1.5*rate;
	else
		pay = hours * rate;
	
	printf("The salary is %f\n",pay);
	return 0;
}
