#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<string.h>
char* my_strcpy(char* dest, char* source)
{
	while (*dest++ = *source++)
	{
		;
	}
}
int my_strlen(char* dest) 
{
	int s = 0;
	while (*dest++)
	{
		s++;
	}
	return s;
}
int main()
{
	char s[30] = "hello,i want to see you";
	char s1[20] = "you are my baby";
	//my_strcpy(s, s1);
	//int ret = strlen(s1);
	int s2 = my_strlen(s1);
	printf("%d",s2);
	return 0;
}