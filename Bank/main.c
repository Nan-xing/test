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
	printf("****************1.一次存5年期****************\n");
	printf("****************2.先存2年，再存3年*************\n");
	printf("****************3.先存3年，再存2年*************\n");
	printf("****************4.存1年，取出存1年，连续5次****\n");
	printf("****************5.存活期***********************\n");
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
	printf("请输入贷款金额:>");
	scanf("%lf", &d);
	printf("请输入还款金额:>");
	scanf("%lf", &p);
	printf("请输入月利率:>");
	scanf("%lf", &r);
	double m = (log(p / (p - d * r * 0.01)) / log(1 + r * 0.01));
	printf("需要%.1lf月可以还清\n", m);
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