#include"function.h"
void Mult_table(int n)
{
	//打印乘法口诀表
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d = %2d ",  j,i, i * j);
		}
		printf("\n");
	}
	return 0;
}
void swap(int* a, int* b)
{
	//交换两个整数内容
	int* t;
	t = *a;
	*a = *b;
	*b = t;
}
int leap_year(int n)
{
	//判断是否是闰年
	if ((n % 4) == 0 && (n % 100 !=  0) || (n % 400) == 0)
		return 1;
	else
		return 0;
}
int prime(int n)
{
	int i, j, m;
	for (i = 3; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int a;
	int a1, b1;
	int y,ret;
	int i, j;
	//while (1)
	//{
	//	
	//	scanf("%d", &a);
	//	Mult_table(a);
	//	 
	//	scanf("%d%d", &a1, &b1);
	//	swap(&a1, &b1);
	//	printf("%d %d\n", a1, b1);
	//	
	//	scanf("%d",&y);
	//	ret = leap_year(y);
	//	if (ret == 1)
	//		printf("%d是闰年\n",y);
	//	else
	//		printf("%d不是是闰年\n", y);
	//}
	for (i = 101; i < 200; i += 2)
	{
		if (prime(i) == 1)
			printf("%d ", i);
	}
	return 0;
}