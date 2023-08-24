#include <stdio.h>


////数字三角形
//void print(int n)
//{
//    int i, j;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < i + 1; j++)
//        {
//            printf("%d ", j + 1);
//        }
//        printf("\n");
//    }
//}
//
//int main() {
//    int n;
//    while (scanf("%d", &n) != EOF)
//    {
//        print(n);
//    }
//    return 0;
//}


////圣诞树
//void print(int n)
//{
//    int i, j;
//    int d = 3 * n - 1;
//    for (i = 0; i < 3 * n; i++)
//    {
//        //第一层
//        if (i % 3 == 0)
//        {
//            for (j = i; j < d; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j < i / 3 + 1; j++)
//            {
//                printf("*     ");
//            }
//            printf("\n");
//        }
//        //第二层
//        if (i % 3 == 1)
//        {
//            for (j = i; j < d; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j < i / 3 + 1; j++)
//            {
//                printf("* *   ");
//            }
//            printf("\n");
//        }
//        //第三层
//        if (i % 3 == 2)
//        {
//            for (j = i; j < d; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j < i / 3 + 1; j++)
//            {
//                printf("* * * ");
//            }
//            printf("\n");
//        }
//    }
//    //尾巴
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < d; j++)
//        {
//            printf(" ");
//        }
//        printf("*\n");
//    }
//
//}
//
//int main() {
//    int n;
//    while (scanf("%d", &n) != EOF)
//    {
//        print(n);
//    }
//    return 0;
//}

