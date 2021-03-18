//# include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int max = 0;
//	printf("请输入三个数：\n");
//	scanf("%d%d%d",&a,&b,&c);
//	if (a >= b)
//		max = a;
//	if (c >= max)
//		max = c;
//	printf("最大值为：%d", max);
//	return 0;
//}
//# include<stdio.h>
//int main()
//{
//	int a[10];
//	int i, j;
//	for (i = 1; i<10; i++)
//	if (a[i] < a[i - 1])
//	{
//		int temp = a[i];                       
//		for (j = i - 1; j >= 0 && a[j]>temp; j--)   
//		a[j + 1] = temp;                       
//	}
//}
