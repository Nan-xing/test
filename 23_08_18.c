#include <stdio.h>
//实现一个简易计算器

//菜单
void menu()
{
	printf("******************************************\n");
	printf("**********  1.Add       2.Sub   **********\n");
	printf("**********  3.Mul       4.Div   **********\n");
	printf("**********  5.nth_Power 6.Rem   **********\n");
	printf("**********        0.Exit        **********\n");
	printf("******************************************\n");
}
//加法函数
void Add()
{
	int x, y;
	printf("请输入两个数:>");
	scanf("%d%d", &x, &y);
	printf("%d+%d=%d\n",x,y, x + y);
}
//减法函数
void Sub()
{
	int x, y;
	printf("请输入两个数:>");
	scanf("%d%d", &x, &y);
	printf("%d-%d=%d\n",x,y, x - y);
}
//乘法函数
void Mul()
{
	int x, y;
	printf("请输入两个数:>");
	scanf("%d%d", &x, &y);
	printf("%d*%d=%d\n",x,y, x * y);
}
//除法函数
void Div()
{
	int x, y;
	printf("请输入两个数:>");
	scanf("%d%d", &x, &y);
	printf("%d/%d=%d\n",x,y, x / y);
}
//幂函数
void nth_Power()
{
	int a, n;
	int i,power=1;
	printf("请输入两个数:>");
	scanf("%d%d", &a, &n);
	for (i = 1; i <= n; i++)
	{
		power *= a;
	}
	printf("%d的%d次方=%d\n", a, n, power);
}
//取余函数
void Rem()
{
	int x, y;
	printf("请输入两个数:>");
	scanf("%d%d", &x, &y);
	printf("%d", x % y);
}
int main()
{
	int input;
	do
	{
		menu();
		printf("请选择输入:>");
		scanf("%d", &input);		
		void (*pfun[7])() = { 0,Add,Sub,Mul,Div,nth_Power,Rem };
		if (input >= 1 && input <= 6)
		{
			pfun[input]();
		}
		else if (input == 0)
		{
			printf("退出\n");
		}
		else
		{
			printf("选择错误！\n");
		}
	} while (input);
	return 0;
}