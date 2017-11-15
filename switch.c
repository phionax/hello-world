#include <stdio.h>

int main()
{
	int type;
	printf("please enter type:");
	scanf("%d",&type);
	
	switch(type)
	{
	case 1:
	case 2:
		printf("Hello\n");
		break;
	case 3:
		printf("Good Morning\n");
	case 4:
		printf("Good Bye\n");
		break;
	default:
		printf("What?\n");
		break;
	}
	return 0;
}
