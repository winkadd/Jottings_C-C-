#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr1[] =  "abc" ;
//	char arr2[] = { 'a', 'b', 'c' };
//	
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";
//	//printf("%c\n", arr[5]);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < strlen(arr); i++)
//	{
//		printf("%c\n", arr[i]);
//	}
//	return 0; 
//}



//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//	/*	printf("%d\n", arr[i]);*/
//		printf("&arr[%d]=%p\n",i, &arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
//	//char ch[3][5] = {};
//	//int arr[][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 } };
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	
//
//	return 0;
//
//}

void bubble_sort(int arr[],int sz)
{
	//确定冒泡排序的趟数
	int i = 0; 
	for ( i = 0; i < sz-1; i++)
	{
		int j = 0;
		for (j = 0; j <sz - 1 - i; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
		
}


int main()
{
	int arr[] = { 1, 2, 5, 6, 8, 7, 4, 9, 11, 18, 14, 16, 21, 58, 96, 41, 32 };
	
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//对arr进行排序，排成升序
	//arr是数组，我们对数组arr进行传参，实际上传递过去的是数组arr首元素的地址
	bubble_sort(arr,sz);//冒泡排序函数
	for ( i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}

