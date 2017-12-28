#include <stdio.h>

int main()
{
	int a, b, c, d, e, f, g, h, i, j;
	int count=0;
	for(a=1; a<10; a++)
	{
		for(b=1; b<9; b++)
		{
			for(c=1; c<8;c++)
			{
				for(d=1; d<7;d++)
				{
					for(e=1;e<6;e++)
					{
						for(f=1;f<5;f++)
						{
							for(g=1;g<4;g++)
							{
								for(h=1;h<3;h++)
								{
									for(i=1;i<2;i++)
									{
										for(j=1;j<1;j++)
										{
											if(a+b+c+d+e+f+g+h+i+j==10)
											{
												printf("第一天%d个/第二天%d个/第三天%d个/第四天%d个/第五天%d个/第六天%d个/第七天%d个/第八天%d个/第九天%d个/第十天%d个\n",a,b,c,d,e,f,g,h,i,j);
												count++;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	printf("一共有%d种方案\n",count);
	
	return 0;
}
