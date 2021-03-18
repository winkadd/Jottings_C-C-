#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//声明
void InitBoard(char board[ROW][COL],int row ,int col);
void DisplayBoart(char board[ROW][COL], int row, int col);
void playerMove(char board[ROW][COL],int row,int col);
void ComputerMove(char board[ROW][COL],int row, int col);


//告诉我们四种游戏的状态
//玩家赢-‘*’or电脑赢-‘#’or平局-‘Q’or继续-‘C’
char IsWin(char board[ROW][COL], int row, int col);