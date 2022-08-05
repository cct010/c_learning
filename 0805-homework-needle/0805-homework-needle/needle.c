#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>


int print(int n,int i)
{
	if (n > 9)
	{
		return print(n / 10,i) +pow(n%10,i);
	}
	else
		return pow(n % 10, i);
	
}

int number(int n)
{
	int i=0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return i;
}

int number2(int n, int i)
{
	int j;
	int s = n;
	for (j = 0; j < i; j++)
	{
		s = 2+s*10;
	}
	return s;
}

int main()
{
	int i;
	//for (i = 0; i <= 100000; i++)
	//{
	//	//求水仙花数
	//	if (i == print(i,number(i)))
	//		printf("%d ", i);
	//}

	int s = 2;
	for (i = 1; i < 6; i++)
	{
		s = s + number2(2, i);
	}
	printf("%d", s);

	return 0;
}