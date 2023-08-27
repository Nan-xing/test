#include <stdio.h>
#include <math.h>

////三角形判断
//int jude(int a, int b, int c)
//{
//    if (a + b > c && a + c > b && b + c > a)
//    {
//        if (a == b && b == c)
//            return 1;
//        else if (a == b || b == c || c == a)
//            return 2;
//        else
//            return 3;
//    }
//    return 0;
//}
//
//int main() {
//    int a, b, c;
//    while (scanf("%d%d%d", &a, &b, &c) != EOF)
//    {
//        int ret = jude(a, b, c);
//        if (ret == 1)
//            printf("Equilateral triangle!\n");
//        else if (ret == 2)
//            printf("Isosceles triangle!\n");
//        else if (ret == 3)
//            printf("Ordinary triangle!\n");
//        else
//            printf("Not a triangle!\n");
//    }
//    return 0;
//}
//
////牛牛的计划
//int jude(int y, int m, int d, int y1, int m1, int d1)
//{
//    int plan = y * 10000 + m * 100 + d;
//    int plan1 = y1 * 10000 + m1 * 100 + d1;
//    if (plan1 >= plan)
//        return 1;
//    else
//        return 0;
//}
//
//int main() {
//    int year, mouth, day, year1, mouth1, day1;
//    scanf("%d%d%d\n%d%d%d", &year, &mouth, &day, &year1, &mouth1, &day1);
//    int ret = jude(year, mouth, day, year1, mouth1, day1);
//    if (ret)
//        printf("yes\n");
//    else
//        printf("no\n");
//    return 0;
//}
//
//
////计算一元二次方程
//void compute(float a, float b, float c)
//{
//    if (a == 0) {
//        printf("Not quadratic equation\n");
//    }
//    else {
//        float t = b * b - 4 * a * c;
//        if (t == 0) {
//            float x1 = (-b + sqrt(t)) / 2.0 / a;
//            if (x1 == 0.00)
//                printf("x1=x2=%.2f\n", 0.00);
//            else
//                printf("x1=x2=%.2f\n", (-b + sqrt(t)) / 2.0 / a);
//        }
//        else if (t > 0) {
//            printf("x1=%.2f;x2=%.2f\n", (-b - sqrt(t)) / 2.0 / a, (-b + sqrt(t)) / 2.0 / a);
//        }
//        else {
//            printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", -b / 2 / a, sqrt(-t) / 2 / a, -b / 2 / a, sqrt(-t) / 2 / a);
//        }
//    }
//}
//
//int main() {
//    float a, b, c;
//    while (scanf("%f%f%f", &a, &b, &c) != EOF)
//    {
//        compute(a, b, c);
//    }
//
//    return 0;
//}


////获得月份天数
//void day(int y, int m)
//{
//    if (((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) && m == 2)
//        printf("29\n");
//    else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
//        printf("31\n");
//    else if (m == 2)
//        printf("28\n");
//    else
//        printf("30\n");
//
//}
//int main() {
//    int year, mouth;
//    while (scanf("%d%d", &year, &mouth) != EOF)
//    {
//        day(year, mouth);
//    }
//    return 0;
//}
//
//
////[NOIP2008]ISBN号码
////           数据
//int renum(int number) { //反转数字
//    int result = 0, num = number;
//    while (num) {
//        result = result * 10 + num % 10;
//        num /= 10;
//    }
//    return result;
//}
////          数据      权重
//int fin(int number, int dis) { //每位乘
//    if (number != 0)
//        return fin(number / 10, dis + 1) + number % 10 * dis;
//    else
//        return 0;
//}
//int main() {
//    int a, b, c;
//    char x, x1;
//    scanf("%d-%d-%d-%c", &a, &b, &c, &x);
//    x1 = (a * 1 + fin(renum(b), 2) + fin(renum(c), 5)) % 11;
//    x1 = x1 == 10 ? 'X' : x1 + '0';
//    if (x == x1)
//        printf("Right");
//    else
//        printf("%d-%d-%d-%c", a, b, c, x1);
//
//    return 0;
//}

//
////简单计算器
//int main() {
//    double a, b;
//    char ch;
//    scanf("%lf%c%lf", &a, &ch, &b);
//    if (b == 0.0)
//        printf("Wrong!Division by zero!\n");
//    else if (ch == '+')
//        printf("%.4f+%.4f=%.4f", a, b, a + b);
//    else if (ch == '-')
//        printf("%.4f-%.4f=%.4f", a, b, a - b);
//    else if (ch == '*')
//        printf("%.4f*%.4f=%.4f", a, b, a * b);
//    else if (ch == '/')
//        printf("%.4f/%.4f=%.4f", a, b, a / b);
//    else if (ch != '+' || ch != '-' || ch != '*' || ch != '/')
//        printf("Invalid operation!\n");
//    return 0;
//}



//小乐乐求和
//int main() {
//    long long ret = 0, i = 0, n = 0;
//    scanf("%lld", &n);
//    for (i = 1; i <= n; i++)
//    {
//        ret = ret + i;
//    }
//    printf("%lld\n", ret);
//    return 0;
//}


