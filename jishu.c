
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>




//void menu()
//{
//	printf("******************************************************\n");
//	printf("***********	��ӭ������������Ϸ��	**************\n");
//	printf("******************************************************\n");
//	printf("**********   1.��ʼ��Ϸ        0.�˳���Ϸ   **********\n");
//	printf("******************************************************\n");
//}
//void game()
//{
//	int ret = 0;
//	int num = 0;
//	int left = 100,right = 0;
//	ret = rand()%100+1;
//	printf("��һ��0~100֮������ְɣ�");
//	while (1)
//	{
//		printf("��������µ�����:>");
//		scanf("%d",&num);
//		if (num > ret)
//		{
//			printf("��������µ����ִ���Ŷ��\n");
//			left = num;
//			printf("����%d~%d֮���һ�����֣�",right,left);
//		}
//		else if (num < ret)
//		{
//			printf("��������µ�����С��Ŷ!\n");
//			right = num;
//			printf("����%d~%d֮���һ�����֣�", right, left);
//		}
//		else
//		{
//			printf("��ϲ��¶���Ŷ!\n������־���%d\n",ret);
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("���������ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("�˳���Ϸ�ɹ���\n");
//			break;
//		case 1:
//			game();
//			break;
//		default:
//			break;
//		}
//	}
//	while (input);
//	
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ",i);
//	}
//	return 0;
//}
//int main()
//{
//	int a=0, b=0, c=0;
//	printf("��������������:");
//	scanf("%d %d %d",&a,&b,&c);
//	if (a > b && a > c)
//	{
//		printf("%d ",a);
//		if (b > c)
//		{
//			printf("%d %d ", b,c);	
//		}
//		else
//		{
//			printf("%d %d", c,b);
//		}
//	}
//	else if (b > a && b > c)
//	{
//		printf("%d ",b);
//		if (a > c)
//		{
//			printf("%d  %d ",a,c);
//		}
//		else
//		{
//			printf("%d %d ",c,a);
//		}
//	}
//	else
//	{
//		printf("%d ",c);
//		if (a > b)
//		{
//			printf("%d %d ", a, b);
//		}
//		else
//		{
//			printf("%d %d ", b, a);
//		}
//	}
//	return 0;

//}
//��������һ��ѧ����ѧ�ţ��Լ�3�ƣ�C���ԣ���ѧ��Ӣ��ɼ���
//����Ļ�������ѧ����ѧ�ţ�3�Ƴɼ���ע������ɼ�ʱ��������������ұ���2λС������

//int main()
//{
//	int num;
//	float c = 0, math = 0, English = 0;
//	printf("����������һ��ѧ����ѧ�ţ��Լ�3�ƣ�C���ԣ���ѧ��Ӣ��ɼ�\n");
//	scanf("%d",&num);
//	printf("���������Ƴɼ�\n");
//	scanf("%f,%f,%f", &c, &math, &English);
//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.",num,c,math,English);
//	return 0;
//
//}
//int main()
//{
//
//
//	/*
//	����1��+2��+3��+...+10��
//	*/
//	/*int num = 1,i=1,j=1,sum=0;
//	for (i = 1; i <= 10; i++)
//	{
//		for (j = 1,num=1; j <= i; j++)
//		{
//
//			num *= j;
//			printf("%d ",num);
//		}
//		sum += num;
//	}
//	printf("1��+2��+3��+...+10��=%d",sum);*/
//	/*
// ��n!��ֵ
// */
//	/*int n = 0,i=0;
//	int sum = 1;
//	printf("������һ������:>");
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//		
//	}
//	printf("n!=%d",sum);*/
///*
//�ж���ż��
//*/
//
//	/*int num = 0;
//	printf("������һ�����֣�");
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("����һ��������\n");
//	else
//		printf("����һ��ż����\n");
//	int nums = 0;
//	printf("0~100���ڵ�����Ϊ��\n");
//	
//	for (nums = 0; nums <= 100; nums++)
//	{
//		if (nums % 2 == 1)
//			printf("%d  ", nums);
//	}*/
//
//
//	return 0;
//}

//void sushu(int i)
//{
//	int x;
//	for (x = 1; x < i; x+=2)
//	{
//		if (i % x == 0)
//		  printf("���������������");
//		break;
//	}
//
//}
//int main()
//{
//	int num = 0;
//	printf("������һ������:>");
//	scanf("%d",&num);
//	sushu(num);
//	printf("%d ",num);
//
//}

//int main()
//{
//	int birthday;
//	scanf("%d",&birthday);//20020217
//	printf("year=%d\n",birthday/10000);
//	printf("month=%02d\n",(birthday%10000)/100);
//	printf("day=%02d\n",birthday%100);
//}


//int main()
//{
//	char ch = 0;
//	int  num = 0;
//	float i = 0.0;
//	scanf("%c\n%d\n%f", &ch, &num, &i);
//	printf("%c %d %.6f", ch, num, i);
//	return 0;
//}

////���n��쳲�������
//int fib(int i)
//{
//	int a = 1, b = 1, c = 0;
//	int j = 0;
//	for (j = 0; j < i-2; j++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d",&n);
//	ret=fib(n);
//	printf("%d",ret);
//	return 0;
//}

int main()
{
	
	
	/*char arr[3] = { 'a',98,'c' };
	printf("%d ",sizeof(arr));
	printf("%zd ",strlen(arr));*/
	return 0;
}