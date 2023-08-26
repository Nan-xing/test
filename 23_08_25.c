#include <stdio.h>
#include <math.h>
#include <stdlib.h>
////统计数据正负个数
//int main() {
//    int arr[10] = { 0 };
//    int i = 0, m = 0, n = 0;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (arr[i] > 0)
//            m++;
//        else
//            n++;
//    }
//    printf("positive:%d\nnegative:%d\n", m, n);
//    return 0;
//}


////网购
//typedef struct shop {
//    float spacce;
//    int mouth;
//    int day;
//    int i;
//}shop;
//int main() {
//    shop netshop = { 0 };
//    scanf("%f%d%d%d", &netshop.spacce, &netshop.mouth, &netshop.day, &netshop.i);
//    float monney = 0;
//    if (netshop.mouth == netshop.day)
//    {
//        if (netshop.day == 11)
//        {
//            monney = netshop.spacce * 0.7;
//        }
//        else {
//            monney = netshop.spacce * 0.8;
//        }
//    }
//    if (netshop.i == 1)
//    {
//        monney -= 50.0;
//    }
//    if (monney < 0)
//        monney = 0.0;
//    printf("%.2f", monney);
//    return 0;
//}


////牛牛的快递
//int main() {
//    float a;
//    char b;
//    int money = 20;
//    scanf("%f %c", &a, &b);
//    if (a > 0 && a <= 1) {
//        if (b == 'y')
//            printf("25");
//        else
//            printf("20");
//    }
//    if (a > 1) {
//        money = money + ceil(a - 1); //向上取整函数
//        if (b == 'y')
//            printf("%d", money + 5);
//        else
//            printf("%d", money);
//    }
//
//
//}


//牛牛的金币

//int main() {
//    int x, y, x1, y1;
//    scanf("%d%d\n%d%d", &x, &y, &x1, &y1);
//    if (1 == abs(x1 - x) + abs(y1 - y))
//    {
//        if (x1 - x == 0 && y1 - y > 0)
//            printf("u");
//        else if (x1 - x == 0 && y1 - y < 0)
//            printf("d");
//        else if (y1 - y == 0 && x1 - x > 0)
//            printf("r");
//        else
//            printf("l");
//    }
//    return 0;
//}


////HTTP状态码
//int main() {
//    int n;
//    while (scanf("%d", &n) != EOF) {
//        switch (n)
//        {
//        case 200:printf("OK\n"); break;
//        case 202:printf("Accepted\n"); break;
//        case 400:printf("Bad Request\n"); break;
//        case 403:printf("Forbidden\n"); break;
//        case 404:printf("Not Found\n"); break;
//        case 500:printf("Internal Server Error\n"); break;
//        case 502:printf("Bad Gateway\n"); break;
//        }
//    }
//    return 0;
//}