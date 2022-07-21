#include"game.h"

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择->");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			game();
			//printf("扫雷\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
}

void menu()
{
	printf("\n*******************************\n");
	printf("***** 1. play   0. exit *******\n");
	printf("*******************************\n");
}

void game()
{
	//雷的信息存储
	//布置好的雷的信息
	//排查出的雷的信息
	char mine[ROWS][COLS] = { 0 };
	//排查出的雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘
	//DisplayBoard(mine,ROW,COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//扫雷
	FindMine(mine,show,ROW,COL);//查找雷


}

int main()
{
	test();//扫雷游戏
	return 0;
}