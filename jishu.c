
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>




//void menu()
//{
//	printf("******************************************************\n");
//	printf("***********	欢迎来到猜数字游戏！	**************\n");
//	printf("******************************************************\n");
//	printf("**********   1.开始游戏        0.退出游戏   **********\n");
//	printf("******************************************************\n");
//}
//void game()
//{
//	int ret = 0;
//	int num = 0;
//	int left = 100,right = 0;
//	ret = rand()%100+1;
//	printf("猜一个0~100之间的数字吧！");
//	while (1)
//	{
//		printf("请输入你猜的数字:>");
//		scanf("%d",&num);
//		if (num > ret)
//		{
//			printf("哈哈，你猜的数字大了哦！\n");
//			left = num;
//			printf("请在%d~%d之间猜一个数字！",right,left);
//		}
//		else if (num < ret)
//		{
//			printf("哈哈，你猜的数字小了哦!\n");
//			right = num;
//			printf("请在%d~%d之间猜一个数字！", right, left);
//		}
//		else
//		{
//			printf("恭喜你猜对了哦!\n这个数字就是%d\n",ret);
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
//		printf("请输入你的选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("退出游戏成功！\n");
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
//	printf("请输入三个数字:");
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
//依次输入一个学生的学号，以及3科（C语言，数学，英语）成绩，
//在屏幕上输出该学生的学号，3科成绩（注：输出成绩时需进行四舍五入且保留2位小数）。

//int main()
//{
//	int num;
//	float c = 0, math = 0, English = 0;
//	printf("请依次输入一个学生的学号，以及3科（C语言，数学，英语）成绩\n");
//	scanf("%d",&num);
//	printf("请输入三科成绩\n");
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
//	计算1！+2！+3！+...+10！
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
//	printf("1！+2！+3！+...+10！=%d",sum);*/
//	/*
// 求n!的值
// */
//	/*int n = 0,i=0;
//	int sum = 1;
//	printf("请输入一个数字:>");
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//		
//	}
//	printf("n!=%d",sum);*/
///*
//判断奇偶数
//*/
//
//	/*int num = 0;
//	printf("请输入一个数字：");
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("这是一个奇数！\n");
//	else
//		printf("这是一个偶数！\n");
//	int nums = 0;
//	printf("0~100以内的奇数为：\n");
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
//		  printf("这个数不是素数！");
//		break;
//	}
//
//}
//int main()
//{
//	int num = 0;
//	printf("请输入一个数字:>");
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

////求第n个斐波那契数
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