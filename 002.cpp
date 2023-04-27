#include <stdio.h>
int main()
{
    double a=3.14;
    int b=3;
    printf("a=%lf, (int)a=%d, (int)a/c=%d\n",a,(int)a,(int)a/b);
//a=3.140000,(int)a=3,(int)a/c=1
    a=(int)a;
    printf("a=%lf, a=%d, a/3=%lf",a,a,a/3);
//a=3.000000, a=0, a/3=1.000000
//a的还是类型没变 
	return 0;
}
