#include"game.h"

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��->");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			game();
			//printf("ɨ��\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
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
	//�׵���Ϣ�洢
	//���úõ��׵���Ϣ
	//�Ų�����׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//�Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(mine,ROW,COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//ɨ��
	FindMine(mine,show,ROW,COL);//������


}

int main()
{
	test();//ɨ����Ϸ
	return 0;
}