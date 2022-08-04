#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void print(int* a,int sz)
{
    int i;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", *(a + i));
    }
}

void change(char* a, int sz)
{
    int i;
    for (i = sz; i >= 0; i--)
        putchar(*(a + i));
}

void print2(int n)
{
    int i, j, k;
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < n-i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = n - 1; i > 0; i--)
    {
        for (j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}


int main()
{
    //int arr[] = { 1,2,3,4,5 };
    //short* p = (short*)arr;
    //int i = 0;
    //for (i = 0; i < 4; i++)
   // {
    //    *(p + i) = 0;
   // }

   // for (i = 0; i < 5; i++)
    //{
     //   printf("%d ", arr[i]);
   // }

    //int a = 0x11223344;
   // char* pc = (char*)&a;
   /// *pc = 0;
   // printf("%x\n", a);

    //int arr[] = { 1,3,5,6,7,89,9 };
    //int sz = sizeof(arr) / sizeof(arr[0]);
   // print(arr, sz);


   // char c[100];
   // int i=0,h;
   // while ((c[i] = getchar()) != '\n')
   //     i++;
   // c[i] = '\0';
   // change(c, i - 1);
    //for (h = i - 1; h >= 0; h--)
      //  putchar(c[h]);

    //int x=7;
    //scanf("%d", &x);
    //print2(x);



    return 0;
}