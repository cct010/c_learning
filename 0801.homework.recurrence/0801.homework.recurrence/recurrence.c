#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

int print(int n)
{
	//打印一个整型的每个数字
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

double power1(int n)
{
	//递归求n的阶乘
	if (n > 1)
	{
		return n*power1(n - 1);
	}
	else
	{
		return n*1.0;
	}
}

double power2(int n)
{
	//非递归求n的阶乘
	int i;
	double s=1.0;
	for (i = 1; i <= n; i++)
	{
		s = s*i ;
	}
	return s;
}

int strlen1(char* a)
{
	//递归方式实现strlen
	//assert(a != NULL);
	if (*a != '\0')
	{
		return 1+strlen1(a +1);
	}
	else
	{
		return 0;
	}
	//printf("%s", a);
	return 1;
}

int strlen2(char* a)
{
	//非递归方式实现strlen
	int count = 0;
	while (*a)
	{
		count++;
		a++;
	}
	return count;
}

void reverse_string(char* arr)
{
	char* left = arr;
	char* right = arr + strlen(arr) - 1;
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}


/*

递归方式：

对于字符串“abcdefg”，递归实现的大概原理：

  1. 交换a和g，

  2. 以递归的方式逆置源字符串的剩余部分，剩余部分可以看成一个有效的字符串，再以类似的方式逆置

*/

void reverse_string(char* arr)
{
	int len = strlen(arr);
	char tmp = *arr;
	*arr = *(arr + len - 1);
	*(arr + len - 1) = '\0';
	if (strlen(arr + 1) >= 2)
		reverse_string(arr + 1);
	*(arr + len - 1) = tmp;
}

int main()
{
	int x, i;
	double s,s2;
	char arr[] = "qwertyuio";
	int sz = sizeof(arr) / sizeof(arr[0]);
	change(arr, sz);

	//while (1)
	//{
		//scanf("%d", &x);
		// 
		//print(x);
		//printf("\n");

		//scanf("%d", &x);
		//s =power1(x);
		//printf("递归方式：%.2lf\n", s);
		//s2 = power2(x);
		//printf("非递归方式：%.2lf\n", s2);

		
	//}
	//printf("递归实现：%d\n", strlen1(arr));
	//printf("非递归实现：%d\n", strlen1(arr));
	return 0;
}