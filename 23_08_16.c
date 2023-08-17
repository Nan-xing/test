#include "stdio.h"
#include "math.h"

////输入一组数据，输出最大值、最小值和平均值
////判断平均值
//float Ave(float arr[], int n)
//{
//    int i = 0;
//    float sum = 0;
//    for (i = 0; i < n; i++)
//    {
//        sum += arr[i];
//    }
//    return sum / n;
//
//}
////判断最小值
//float MIN(float arr[], int n) {
//    int i = 0;
//    float min = 101.0;
//    for (i = 0; i < n; i++) {
//        if (arr[i] < min)
//            min = arr[i];
//    }
//    return min;
//}
////判断最大值
//float MAX(float arr[], int n) {
//    int i = 0;
//    float max = 0;
//    for (i = 0; i < n; i++) {
//        if (arr[i] > max)
//            max = arr[i];
//    }
//    return max;
//}
//int main() {
//    int n, i;
//    float arr[100] = { 0 };
//    //输入元素个数
//    scanf("%d", &n);
//    //输入数据
//    for (i = 0; i < n; i++) {
//        scanf("%f", &arr[i]);
//    }
//    //计算最大值、最小值、平均值
//    float max = MAX(arr, n);
//    float min = MIN(arr, n);
//    float average = Ave(arr, n);
//    printf("%.2f %.2f %.2f", max, min, average);
//
//    return 0;
//}




////计算三角形的周长和面积
//
////计算周长
//float Cir(float a, float b, float c)
//{
//    return a + b + c;
//}
////计算面积
//float Area(float a, float b, float c)
//{
//    float area, p;
//    p = (a + b + c) / 2;
//    area = sqrtf(p * (p - a) * (p - b) * (p - c));
//    return area;
//}
//int main() {
//    int a, b, c;
//    //输入三角形的边长
//    scanf("%d%d%d", &a, &b, &c);
//    //计算周长
//    float cir = Cir(a, b, c);
//    //计算面积
//    float area = Area(a, b, c);
//    printf("circumference=%.2f area=%.2f", cir, area);
//    return 0;
//}



///*BoBo买了一箱酸奶，里面有n盒未打开的酸奶，
//KiKi喜欢喝酸奶，第一时间发现了酸奶。KiKi每
//h分钟能喝光一盒酸奶，并且KiKi在喝光一盒酸奶
//之前不会喝另一个，那么经过m分钟后还有多少盒
//未打开的酸奶？*/
//int main() {
//    int m, n, h;
//    int box = 0;
//    scanf("%d%d%d", &n, &h, &m);
//    box = n - m / h - (m % h + 2) % (m % h + 1);
//    printf("%d", box);
//    return 0;
//}



///*牛牛口渴了，要喝10升水才能解渴，但现在只有一个深 h 厘米，
//底面半径是 r 厘米的水杯，牛牛最少要喝多少杯水才能解渴。*/
//
//#define pi 3.14
////求体积
//float Vol(int h, int r)
//{
//    return pi * h * r * r;
//}
//int main() {
//    int h, r, c = 10000, cup = 0;
//    //输入杯子的深和半径
//    scanf("%d%d", &h, &r);
//    //接收杯数
//    float a_cup_vol = Vol(h, r);
//    while (c > 0)
//    {
//        c = c - a_cup_vol;
//        cup++;
//    }
//    printf("%d", cup);
//
//    return 0;
//}


////计算球的体积
//#define pi 3.14
//int main() {
//    int r;
//    scanf("%d", &r);
//    printf("%f", (4.0 / 3.0) * pi * r * r * r);
//    return 0;
//}

//
//// 小乐乐定闹钟
//int main() {
//    int h, m, k;
//    scanf("%d:%d%d", &h, &m, &k);
//    printf("%02d:%02d", (h + (k + m) / 60) % 24, (k + m) % 60);
//    return 0;
//}