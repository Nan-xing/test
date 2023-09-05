#include "contact.h"

//菜单
void menu()
{
	printf("*************************************************\n");
	printf("********   1.Add(增加)     2.Del(删除)   ********\n");
	printf("********   3.Search(查询)  4.Revise(修改)********\n");
	printf("********   5.Show(显示)    6.Save(保存)  ********\n");
	printf("********   7.Sort(排序)    0.Exit(退出)  ********\n");
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
		printf("请选择:>");
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
			printf("退出成功！\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	} while (input);
}

