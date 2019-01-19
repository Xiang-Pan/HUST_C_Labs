/************************************************************************************
简要描述：分列整齐地显示整数1到10的2至5次幂。
          通过改写ex5_3.c 来说明函数参数的值传递
*************************************************************************************/
#include<stdio.h>
double  power(int,int);  /*  函数原型 */

int main(void)
{
	    int  x, n;
        /* 分列整齐地显示整数1到10的2至5次幂 */
        for(x=1;x<=10;x++)
        {
		   for(n=2;n<=5;n++)
			     printf("%10.0f", power(x,n));
		   printf("\n");
        }
		return 0；
}

/****************************************************************
函数名称：power
函数功能：计算x的n次方
函数参数：第1个参数x为int，第2个参数n也为int
函数返回值：返回x的n次方，为避免溢出，将函数值的类型说明为double。
****************************************************************/
double  power(int x, int n)
{
	    double  p;
	    for (p=1;n>0;n--)
	        p*=x;
	    return  p;
}
