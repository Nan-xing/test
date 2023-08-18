#include "stdio.h"


///*小乐乐学校教学楼的电梯前排了很多人，他的前面有n个人在等电梯。
//电梯每次可以乘坐12人，每次上下需要的时间为4分钟（上需要2分钟，下需要2分钟）。
//请帮助小乐乐计算还需要多少分钟才能乘电梯到达楼上。（假设最初电梯在1层）*/
//
//
//int main() {
//    int n = 0;
//    int m = 0;
//    scanf("%d", &n);
//    //小于12时，都可以上电梯，只要上楼的时间
//    if (n < 12)
//        m = 2;
//    //当大于12时，上下需要的趟数加上上楼的时间即可
//    else
//        m = 4 * (n / 12) + 2;
//    printf("%d ", m);
//    return 0;
//}




///*KiKi这学期努力学习程序设计基础，要期末考试了，BoBo老师告诉他，总成绩包括四个部分，如下：
//总成绩 = 实验成绩 * 20% + 课堂表现成绩 * 10% + 过程考核成绩 * 20% + 期末上机考试成绩 * 50%，
//现在输入KiKi的各项成绩，请计算KiKi的总成绩。*/
//int main() {
//    int a, b, c, d;
//    scanf("%d%d%d%d", &a, &b, &c, &d);
//    printf("%.1f", (float)a * 0.2 + b * 0.1 + c * 0.2 + d * 0.5);
//    return 0;
//}


////线段画图
//void print(int a)
//{
//    int i = 0;
//    for (i = 0; i < a; i++)
//    {
//        printf("*");
//    }
//    printf("\n");
//}
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF) {
//        print(a);
//    }
//    return 0;
//}



////正方形图案
//void print(int a)
//{
//    int i, j;
//    for (i = 0; i < a; i++)
//    {
//        for (j = 0; j < a; j++)
//        {
//            printf("* ");
//        }
//        printf("\n");
//    }
//
//}
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF)
//    {
//        print(a);
//    }
//    return 0;
//}


////直角三角形图案
//void print(int a)
//{
//    for (int i = 0; i < a; i++)
//    {
//        for (int j = 0; j <= i; j++)
//            printf("* ");
//        printf("\n");
//    }
//}
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF)
//    {
//        print(a);
//    }
//    return 0;
//}