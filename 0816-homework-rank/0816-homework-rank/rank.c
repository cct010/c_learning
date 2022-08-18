#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//²ÂÃû´ÎA£¬B£¬C£¬D£¬E
void rank(void)
{
	int A, B, C, D, E;
	for (A = 1; A <= 5; A++)
	{
		for (B = 1; B <= 5; B++)
		{
			for (C = 1; C <= 5; C++)
			{
				for (D = 1; D <= 5; D++)
				{
					for (E = 1; E <= 5; E++)
					{
						if ((B == 2) + (A == 3) == 1 &&
							(B == 2) + (E == 4) == 1 &&
							(C == 1) + (D == 2) == 1 &&
							(C == 5) + (D == 3) == 1 &&
							(E == 4) + (A == 1) == 1 &&
							A * B * C * D * E == 120)
						{
							printf("A=%d B=%d C=%d D=%d E=%d\n", A, B, C, D, E);
						}
					}
				}
			}
		}

	}
}
int main()
{
	int killer = 0;
	for (killer = 'A'; killer <= 'D'; killer++)
	{
		if (3 == (killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D'))
		{
			printf("killer = %c", killer);
		}
	}
	return 0;
}