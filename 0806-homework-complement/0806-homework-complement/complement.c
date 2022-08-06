#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i, j, t, k, n, m, s;
	s = 1;
	while ((scanf("%d", &n)) != EOF && n != 0)
	{
		printf("1\n");
		for (i = 2; i <= n; i++)
		{
			s = 1;
			printf("1 ");
			for (j = 1; j <= i - 2; j++)
			{
				s = (i - j) * s / j;
				printf("%d ", s);
			}
			printf("1\n");
		}
		//printf("\n");
	}
	return 0;
}