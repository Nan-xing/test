#include <stdio.h>
//ʵ��һ�����׼�����

//�˵�
void menu()
{
	printf("******************************************\n");
	printf("**********  1.Add       2.Sub   **********\n");
	printf("**********  3.Mul       4.Div   **********\n");
	printf("**********  5.nth_Power 6.Rem   **********\n");
	printf("**********        0.Exit        **********\n");
	printf("******************************************\n");
}
//�ӷ�����
void Add()
{
	int x, y;
	printf("������������:>");
	scanf("%d%d", &x, &y);
	printf("%d+%d=%d\n",x,y, x + y);
}
//��������
void Sub()
{
	int x, y;
	printf("������������:>");
	scanf("%d%d", &x, &y);
	printf("%d-%d=%d\n",x,y, x - y);
}
//�˷�����
void Mul()
{
	int x, y;
	printf("������������:>");
	scanf("%d%d", &x, &y);
	printf("%d*%d=%d\n",x,y, x * y);
}
//��������
void Div()
{
	int x, y;
	printf("������������:>");
	scanf("%d%d", &x, &y);
	printf("%d/%d=%d\n",x,y, x / y);
}
//�ݺ���
void nth_Power()
{
	int a, n;
	int i,power=1;
	printf("������������:>");
	scanf("%d%d", &a, &n);
	for (i = 1; i <= n; i++)
	{
		power *= a;
	}
	printf("%d��%d�η�=%d\n", a, n, power);
}
//ȡ�ຯ��
void Rem()
{
	int x, y;
	printf("������������:>");
	scanf("%d%d", &x, &y);
	printf("%d", x % y);
}
int main()
{
	int input;
	do
	{
		menu();
		printf("��ѡ������:>");
		scanf("%d", &input);		
		void (*pfun[7])() = { 0,Add,Sub,Mul,Div,nth_Power,Rem };
		if (input >= 1 && input <= 6)
		{
			pfun[input]();
		}
		else if (input == 0)
		{
			printf("�˳�\n");
		}
		else
		{
			printf("ѡ�����\n");
		}
	} while (input);
	return 0;
}