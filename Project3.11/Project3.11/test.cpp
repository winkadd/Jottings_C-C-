#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	//����һ������-�������-10��
	//int arr[10] = {1,2,3,4};//����ȫ��ʼ����ʣ���Ԫ��Ĭ�ϳ�ʼ��Ϊ0
	//char arr2[5] = {'a','b'};
	char arr4[] = "abcdef";
	printf("%d\n", sizeof(arr4));//sizeof  ����arr4��ռ�ռ�Ĵ�С
	printf("%d\n", strlen(arr4));//strlen  ���ַ����ĳ��� /0֮ǰ���ַ�����
	return 0;
}