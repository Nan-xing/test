#include "contact.h"

//�˵�
void menu()
{
	printf("*************************************************\n");
	printf("********   1.Add(����)     2.Del(ɾ��)   ********\n");
	printf("********   3.Search(��ѯ)  4.Revise(�޸�)********\n");
	printf("********   5.Show(��ʾ)    6.Save(����)  ********\n");
	printf("********   7.Sort(����)    0.Exit(�˳�)  ********\n");
	printf("*************************************************\n");
}
int main()
{
	int input;
	struct contact con;
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d",&input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SerContact(&con);
			break;
		case REVISE:
			ReviseContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SAVE:
			SaveContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case 0:
			SaveContact(&con);
			DestroyedContact(&con);
			printf("�˳��ɹ���\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}

