#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int dif(int m, int n)
{
	int i, count = 0,j,k,l;
	for (i = 0; i < 32; i++)
	{
		j = (n >> i)&1;
		k = (m >> i)&1;
		l = j ^ k;
		if (l )
			count++;
	}
	return count;
}

int main()
{
	//int a = 9;
	//int b = 5;
	//a = a ^ b;
	//b = a ^ b;
	//a = a ^ b;
	//printf("%d %d",a,b);

	//int x;
	//int i, j,s=0;
	//scanf("%d", &x);
	//for (i = 0; i < 32; i++)
	//{
	//	if (x & (1<<i))
	//	{
	//		s++;
	//	}	
	//}
	//printf("��������1�ĸ�����%d\n", s);

	//int x,j,i;
	//int a[34];
	//scanf("%d", &x);
	//printf("ż��λ��");
	//for (i = 0; i < 32; i+=2)
	//{
	//	printf("%d ", 1 & (x >> i));
		
	//}
	//printf("\n����λ��");
	//for (i = 1; i < 32; i += 2)
	//{
	//	printf("%d ", 1 & (x>>i));
	//}

	int ret = 0;
	int n = 2299, m = 1999;
	ret =dif( m,  n);
	printf("%d", ret);//��ͬ��������

	return 0;
}