#include <stdio.h>
#include <windows.h>
// 百科质数词条中的c语言求10000以内质数范例，其实可读性差而且跑下来以后没有isprime快。 很慢。而且2都不算质数，错了。 
int main()
{
    double x,y,i;
    int a,b;
    x = 3.0;
    do{
        i = 2.0;
        do{
            y = x / i;
            a = (int)y;
            if(y != a)//用于判断是否为整数
            {
                if(i == x - 1)
                {
                    b = (int)x;
                    printf("%d\n",b);
                }
            }
            i++;
        }while(y != a);
        x++;
    }while(x <= 10000.0);//3到10000的素数
    system("pause");//防止闪退
    return 0;
}
