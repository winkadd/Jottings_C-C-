#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	//创建一个数组-存放整形-10个
	//int arr[10] = {1,2,3,4};//不完全初始化，剩余的元素默认初始化为0
	//char arr2[5] = {'a','b'};
	char arr4[] = "abcdef";
	printf("%d\n", sizeof(arr4));//sizeof  计算arr4所占空间的大小
	printf("%d\n", strlen(arr4));//strlen  求字符串的长度 /0之前的字符个数
	return 0;
}