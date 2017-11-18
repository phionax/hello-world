#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	srand(time(0));
	int x=rand()%100+1;
	int y;
	int t=0;
	
	do
	{
		printf("Please enter your guess:\n");
		scanf("%d",&y);
		t++;
		if(y > x)
		printf("Too large!\n");
		else if (y < x)
		printf("Too small!\n");
	}
	while(y != x);
	
	printf("Congratulations! You are right, the number is %d! You guessed %d time(s) to succeed!\n",x,t);
	
	return 0;
}
