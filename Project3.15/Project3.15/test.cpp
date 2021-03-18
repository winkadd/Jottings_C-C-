#define _CRT_SECURE_NO_WARNINGS

#include"game.h"
//void bubble_sort(int arr[],int sz)
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	for ( i = 0; i < sz-1; i++)
//	{
//		//每一趟冒泡排序
//		int j = 0;
//		for ( j = 0; j <sz-1-i ; j++)
//		{
//			if (arr[j]>arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("%d ", arr[sz - 1]);
//}

 

 

//
//int main()
//{
//	int arr[] = {1,2,4,7,56,74,96,14,25};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);//冒泡排序函数
//
//	return 0;
//
//}

void menu()
{
	printf("**************************\n");
	printf("****  1.play  0.exit  ****\n");
	printf("**************************\n");
}
void game()
{
	char  ret = 0;
	//数组—存放走出的棋盘信息
	char board[ROW][COL] = { 0 };//全部空格
	InitBoard(board, ROW, COL);//初始化棋盘
	DisplayBoart(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		playerMove(board, ROW, COL);
		DisplayBoart(board, ROW, COL);
		//判断玩家是否赢
		ret=IsWin(board,ROW,COL);
		if (ret!='C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoart(board, ROW, COL);
		//判断电脑是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret =='#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
	

	
}	




void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,请重试!\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}