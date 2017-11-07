#include <stdio.h>

int main()
{
	int hour1,minute1,hour2,minute2;
	printf("Please input the 1st time:\n");
	scanf("%d %d",&hour1,&minute1);
	printf("Please input the 2rd time:\n");
	scanf("%d %d",&hour2,&minute2);
	int t1=hour1*60+minute1;
	int t2=hour2*60+minute2;
	int t=t2-t1;
	printf("Time diff is %d h %d m", t/60,t%60);
	return 0;
}
