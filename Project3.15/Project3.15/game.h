#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//����
void InitBoard(char board[ROW][COL],int row ,int col);
void DisplayBoart(char board[ROW][COL], int row, int col);
void playerMove(char board[ROW][COL],int row,int col);
void ComputerMove(char board[ROW][COL],int row, int col);


//��������������Ϸ��״̬
//���Ӯ-��*��or����Ӯ-��#��orƽ��-��Q��or����-��C��
char IsWin(char board[ROW][COL], int row, int col);