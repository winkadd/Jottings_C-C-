#define _CRT_SECURE_NO_WARNINGS

#include"game.h"
//void bubble_sort(int arr[],int sz)
//{
//	//ȷ��ð�����������
//	int i = 0;
//	for ( i = 0; i < sz-1; i++)
//	{
//		//ÿһ��ð������
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
//	bubble_sort(arr,sz);//ð��������
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
	//���顪����߳���������Ϣ
	char board[ROW][COL] = { 0 };//ȫ���ո�
	InitBoard(board, ROW, COL);//��ʼ������
	DisplayBoart(board, ROW, COL);
	while (1)
	{
		//�������
		playerMove(board, ROW, COL);
		DisplayBoart(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret=IsWin(board,ROW,COL);
		if (ret!='C')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoart(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret =='#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	

	
}	




void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,������!\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}