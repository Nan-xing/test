#define _CRT_SECURE_NO_WARNINGS 1

#include "stdio.h"

////合并两个升序序列
//int main()
//{
//    int arr[40] = { 0 };
//    int n1 = 0, n2 = 0;
//    int i = 0, j = 0;
//    scanf("%d%d", &n1, &n2);
//    for (i = 0; i < n1 + n2; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n1 + n2 - 1; i++)
//    {
//        int temp = 0;
//        for (j = 0; j < n1 + n2 - 1 - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//    for (i = 0; i < n1 + n2; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//	return 0;
//}



//////判断序列是否有序
//int main()
//{
//    int n , i, x=1 , j ;
//    int arr[50] = { 0 };
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = n - 1, j = 0; i > 0; i--, j++)
//    {
//        if (arr[i] >= arr[i - 1] || arr[j] >= arr[j + 1])
//        {  //判断升序降序是否满足条件
//            x = 1;
//        }
//        else
//        {
//            x = 0;          //如果有一项不符合就直接跳出
//            break;
//        }
//    }
//        if (x)
//        {
//            printf("sorted");
//        }
//        else
//        {
//            printf("unsorted");
//        }
//        return 0; 
//}

////有序数列插入一个数字并排列
//int main()
//{
//    int arr[51] = { 0 };
//    int i = 0, j = 0;
//    int n = 0,x=0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &x);
//    arr[n + 1] = x;
//    for (i = 0; i < n; i++)
//    {
//        int temp = 0;
//        for (j = 0; j < n - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//    for (i = 0; i <= n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}