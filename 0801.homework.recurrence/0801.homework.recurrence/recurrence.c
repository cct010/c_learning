#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

int print(int n)
{
	//��ӡһ�����͵�ÿ������
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

double power1(int n)
{
	//�ݹ���n�Ľ׳�
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
	//�ǵݹ���n�Ľ׳�
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
	//�ݹ鷽ʽʵ��strlen
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
	//�ǵݹ鷽ʽʵ��strlen
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

�ݹ鷽ʽ��

�����ַ�����abcdefg�����ݹ�ʵ�ֵĴ��ԭ��

  1. ����a��g��

  2. �Եݹ�ķ�ʽ����Դ�ַ�����ʣ�ಿ�֣�ʣ�ಿ�ֿ��Կ���һ����Ч���ַ������������Ƶķ�ʽ����

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
		//printf("�ݹ鷽ʽ��%.2lf\n", s);
		//s2 = power2(x);
		//printf("�ǵݹ鷽ʽ��%.2lf\n", s2);

		
	//}
	//printf("�ݹ�ʵ�֣�%d\n", strlen1(arr));
	//printf("�ǵݹ�ʵ�֣�%d\n", strlen1(arr));
	return 0;
}