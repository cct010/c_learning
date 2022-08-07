#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

size_t my_strlen(char* s)
{
	int count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return count;
}

size_t strlen1(char* a)
{
	//递归方式实现strlen
	//assert(a != NULL);
	if (*a != '\0')
	{
		return 1 + strlen1(a + 1);
	}
	else
	{
		return 0;
	}
	//printf("%s", a);
	return 1;
}

char* my_strcpy(char* dest, char* source)
{
	while (*dest++ = *source++)
	{
		;
	}
}

int my_strcmp(const char* s1, const char* s2)
{
	//> 1
	//< -1
	//== 0
	while (*s1)
	{
		if (*s1 > *s2)
		{
			return 1;
		}
		else if(*s1<*s2)
		{
			return -1;
		}
		s1++;
		s2++;
	}
	if (*s2 == 0)
		return 0;
	else
		return -1;
}

int main()
{
	/*
	int ret;
	char c[] = "asdfgghgh";
	ret = my_strlen(c);
	printf("%d\n", ret);
	*/

	/*
	char c[] = "asdfgghgh";
	char str2[40];
	my_strcpy(str2, c);
	printf("str2:%s\nc:%s", str2,c);
	*/

	/*
	int ret,ret1;
	char c[] = "abcaw";
	char c1[] = "abce";
	ret = my_strcmp(c, c1);
	printf("%d\n", ret);
	*/
	return 0;
}