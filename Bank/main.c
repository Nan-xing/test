#include <stdio.h>
#include <math.h>

//templete one
void templete_one()
{
	double r, p;
	int n;
	r = 0.07f;
	p = 0.0f;
	n = 10;
	p = pow(1 + r, n);
	printf("Ten years later:%.2lftimes\n", p - 1);
}

//tempelete two
void menu()
{
	printf("****************1.һ�δ�5����****************\n");
	printf("****************2.�ȴ�2�꣬�ٴ�3��*************\n");
	printf("****************3.�ȴ�3�꣬�ٴ�2��*************\n");
	printf("****************4.��1�꣬ȡ����1�꣬����5��****\n");
	printf("****************5.�����***********************\n");
}
void templete_two()
{
	double money = 1000.00;
	int input;
	double p;

	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("%.2lf\n", p = 1000 * (1 + 5 * 0.03));
			break;
		case 2:
			printf("%.2lf\n", p = 1000 * (1 + 2 * 0.021) * (1 + 3 * 0.0275));
			break;
		case 3:
			printf("%.2lf\n", p = 1000 * (1 + 3 * 0.0275) * (1 + 2 * 0.021));
			break;
		case 4:
			printf("%.2lf\n", p = 1000 * pow(1 + 0.015, 5));
			break;
		case 5:
			printf("%.2lf\n", p = 1000 * pow(1 + 0.0035, 20));
			break;
		case 0:
			break;
		default:
			break;
		}
	} while (input);
	
}

//templete_three
void templete_three()
{
	double d,p,r;
	printf("�����������:>");
	scanf("%lf", &d);
	printf("�����뻹����:>");
	scanf("%lf", &p);
	printf("������������:>");
	scanf("%lf", &r);
	double m = (log(p / (p - d * r * 0.01)) / log(1 + r * 0.01));
	printf("��Ҫ%.1lf�¿��Ի���\n", m);
}

int main()
{
	//templete_one();
	//templete_two();
	//templete_three();
	char c1;
	c1 = 197;
	printf("%c", c1);
	return 0;
}