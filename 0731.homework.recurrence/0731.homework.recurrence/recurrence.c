
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int fibonacci(int n)
{
	//递归方法实现函数
	int a, b, c;
	a = 1;
	b = 1;
	c = 1;
	if (n > 2)
	{
		return fibonacci(n-1)+fibonacci(n-2);
	}
	else if (n <= 2)
	{
		return c;
	}
}



int fibonacci2(int n)
{
	//非递归方法实现函数
	int i, j, ret, sum=1;
	int a[100] = { 0,1,1 };
	for (i = 3; i <= n; i++)
	{
		a[i] = a[i-2] + a[i - 1];

	}
	sum = a[i-1];
	return sum;
}

double power(int n,int k)
{
	//求n的k次方
	if(k > 1)
	{
		return n*power(n ,k-1);
	}
	else
	{
		return n*1.0;
	}
}

int DigitSum(int n)
{
	//将每个数字相加之和
	int s = 0;
	if (n > 9)
	{
		return  DigitSum(n%10)+DigitSum(n / 10);
	}
	else
	{
		return n %10;
	}
}



int main()
{
	int x,ret,ret2;
	int n, k;
	double ret3;
	while (1)
	{
		//scanf("%d", &x);
		//ret = fibonacci(x);
		//ret2 = fibonacci2(x);
		//printf("递归方法：%d\n", ret);
		//printf("非递归方法：%d\n", ret2);

		//scanf("%d%d", &n, &k);
		//ret3 = power(n, k);
		//printf("%.2lf\n", ret3);

		//scanf("%d", &x);
		//ret = DigitSum(x);
		//printf("%d\n", ret);
	}
	
	return 0;
}