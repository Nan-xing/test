#include <stdio.h>


//// K形图案
//void print(int n)
//{
//    int i, j;
//    //打印上半部分
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n + 1 - i; j++)
//        {
//            printf("* ");
//        }
//        printf("\n");
//    }
//    //打印中间部分
//    printf("* \n");
//    //打印下半部分
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < i + 2; j++)
//        {
//            printf("* ");
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


////箭形图案
//void print(int n)
//{
//    int i, j;
//    //打印上半部分
//    for (i = 0; i < n; i++)
//    {
//        //空格
//        for (j = 0; j < n - i; j++)
//        {
//            printf("  ");
//        }
//        //*
//        for (j = 0; j < i + 1; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    //打印中间部分
//    for (i = 0; i < n + 1; i++)
//    {
//        printf("*");
//    }
//    printf("\n");
//    //打印下半部分
//    for (i = 0; i < n; i++)
//    {
//        //空格
//        for (j = 0; j < i + 1; j++)
//        {
//            printf("  ");
//        }
//        //*
//        for (j = 0; j < n - i; j++)
//        {
//            printf("*");
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


////反斜线形图案
//void print(int n)
//{
//    int i, j;
//    for (i = 0; i < n; i++)
//    {
//        //空格
//        for (j = 0; j < i; j++)
//        {
//            printf(" ");
//        }
//        //*
//        printf("*\n");
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


////正斜线形图案
//void print(int n)
//{
//    int i, j;
//    for (i = 0; i < n; i++)
//    {
//        //空格
//        for (j = 0; j < n - i - 1; j++)
//        {
//            printf(" ");
//        }
//        //*
//        printf("*\n");
//    }
//}
//int main() {
//    int n;
//    while (scanf("%d", &n) != EOF)
//    {
//        print(n);
//    }
//    return 0;
//}


////X形图案
//void print(int n)
//{
//    int i, j;
//    char arr[20][20];
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (i == j || (i + j) == (n - 1))
//            {
//                arr[i][j] = '*';
//            }
//            else
//            {
//                arr[i][j] = ' ';
//            }
//            printf("%c", arr[i][j]);
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

////空心正方形图案
//void print(int n)
//{
//    char arr[20][20];
//    int i, j;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (i == 0 || j == 0 || i == (n - 1) || j == (n - 1))
//            {
//                arr[i][j] = '*';
//            }
//            else
//            {
//                arr[i][j] = ' ';
//            }
//            printf("%c ", arr[i][j]);
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

////空心三角形图案
//void print(int n)
//{
//    int i, j;
//    char arr[20][20];
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (i == j || j == 0 || i == (n - 1))
//            {
//                arr[i][j] = '*';
//            }
//            else
//            {
//                arr[i][j] = ' ';
//            }
//            printf("%c ", arr[i][j]);
//        }
//        printf("\n");
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