#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

char* my_strcat(char* dest, char* source)
{
	char* ret = dest;
	while (*dest)
	{
		*dest++ ;
	}
	*dest = *source;
	while( *dest++  =  *source++ )
	{
		;	
	}

	return ret;
}


int main()
{
	char s[100]="welcome to my channal and ";
	char s2[30] = "my life";
	char s3[200];
	puts(my_strcat(s, s2));
	
	return 0;
}