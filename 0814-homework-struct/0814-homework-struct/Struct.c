#include"Struct.h"

struct stu
{
    int num;
    char name[10];
    int age;
};

void fun(struct stu* p)
{
    printf(" % s\n", (*p).name);
    return;
}

void inverse(int* a,int sz)
{
	int* t;
	int right = sz - 1;
	int left = 0;
	while (left <= right)
	{
		if (*(a+left) % 2 != 0) 
		{
			left++;
		}
		if (*(a + right) % 2 == 0)
		{
			right--;
		}
		t = a[left];
		a [ left] = a [ right];
		a [ right] = t;

	}
}

int main()
{
    //struct stu students[3] = { {9801,"zhang",20},
     //                         {9802,"wang",19},
    //                          {9803,"zhao",18}
   // };
   // fun(students + 1);

	//int money = 0;
	//int total = 0;
	//int empty = 0;
	//scanf("%d", &money);
	////方法2
	//if (money <= 0)
	//{
	//	total = 0;
	//}
	//else
	//{
	//	total = money * 2 - 1;
	//}
	//printf("total = %d\n", total);//喝汽水数量

	int i;
	int arr[20] = { 2,1,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,-1,-3,-9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	inverse(arr, sz);
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}

    return 0;
}