#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int my_fun(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//		return n*my_fun(n - 1);
//
//
	/*int	i = 0;
	int results = 1;
	for (i = 1; i <n; i++)
	{
		results *= i;
	}
	return results;*/
//}


//int main()
//{
//	int n = 0;
//	printf("请输入一个数： \n");
//	scanf("%d", &n);
//	int  results = my_fun(n);
//	printf("results=%d\n", results);
//	return 0;
//
//}

//int my_fb(int n)
//{ 
//	if (n <= 2)
//		return 1;
//运算越靠后的斐波那契数速度越慢
//	else
//		return my_fb(n - 1) + my_fb(n - 2);
//描述第n个斐波那契数
//}

int my_fb(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;

}





int main()
{
	int n = 0;
	printf("请输入一个数： \n");
	scanf("%d", &n);
	int  fb = my_fb(n);
	printf("fb=%d\n", fb);
	return 0;

}