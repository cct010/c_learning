#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void arr1(int* a,int n)
{
	//ц╟ещеепР
	int i,j,t;
	for (i = 0; i < n; i++)
	{
		for (j = 1+i; j < n ; j++)
		{
			if (a[i] > a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
}

int print(int* a,int sz)
{

	int i;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
}

void init(int* a,int sz)
{
	int i;
	for (i = 0; i < sz; i++)
	{
		a[i] = 0;
	}
}

void reverse(int* a, int sz)
{
	int i,t;
	for (i = 0; i < (sz / 2)-1; i++)
	{
		int t1 = sz - 1 - i;
		t = a[i];
		a[i] = a[t1];
		a[t1] = t;
	}
	
}

int main()
{
	int a;
	int i, j;
	int arr[10] = {99,3,47,17,9,0,13,18,45,89 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	arr1(arr, sz);
	//for (i = 0; i < sz; i++)
	//	printf("%d ", arr[i]);
	
	print(arr,sz);
	printf("\n");
	reverse(arr, sz);
	print(arr, sz);
	printf("\n");
	init(arr, sz);
	print(arr, sz);
	printf("\n");
	return 0;
}