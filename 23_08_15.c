#include <stdio.h>
#include <stdlib.h>

////判断二维数组中的最大值
//void Hightest(int arr[10][10], int x, int y)
//{
//    int i, j;
//    int n = 0, m = 0;
//    int tmp = 0;
//    for (i = 0; i < x; i++)
//    {
//        for (j = 0; j < y; j++)
//        {
//            if (arr[i][j] > tmp)
//            {
//                tmp = arr[i][j];
//                n = i+1;
//                m = j+1;
//            }
//        }
//    }
//    printf("%d %d", n, m);
//}
//int main() {
//    int n = 0, m = 0;
//    int arr[10][10] = { 0 };
//    int i = 0, j = 0;
//    //输入行与列
//    scanf("%d%d", &n, &m);
//    //输入数据
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    //判断最高的身高
//    Hightest(arr, n, m);
//    return 0;
//}


////判断两个矩阵是否相等
//int equal(int arr1[10][10], int arr2[10][10], int n, int m)
//{
//    int i, j, ret = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            if (arr1[i][j] == arr2[i][j])
//            {
//                ret++;
//            }
//        }
//    }
//    if (ret == n * m)
//        return 1;
//    else
//        return 0;
//}
//int main() {
//    int arr1[10][10] = { 0 };
//    int arr2[10][10] = { 0 };
//    int i, j, n, m;
//    //输入矩阵的行与列
//    scanf("%d%d", &n, &m);
//    //输入第一个矩阵的数据
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    //输入第二个矩阵的数据
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//    //判断两个矩阵是否相等，是返回1，不是返回0
//    int ret = equal(arr1, arr2, n, m);
//    if (ret)
//        printf("Yes");
//    else
//        printf("No");
//
//    return 0;
//}

////计算其中大于零的元素之和
//int sum(int arr[10][10], int n, int m)
//{
//    int ret = 0;
//    int i, j;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            if (arr[i][j] > 0)
//            {
//                ret += arr[i][j];
//            }
//        }
//    }
//    return ret;
//}
//int main() {
//
//    int arr[10][10] = { 0 };
//    int i, j, n, m;
//    //输入矩阵的行与列
//    scanf("%d%d", &n, &m);
//    //输入矩阵的数据
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    //返回大于零的元素之和
//    int ret = sum(arr, n, m);
//    printf("%d", ret);
//    return 0;
//}



//
//
////输入一个整数n，输出一个n*n的矩阵
//void output(int n) {
//    int up = 0, left = 0, right = n - 1, down = n - 1;
//    int x = 1, arr[20][20] = { 0 };
//    while (x <= n * n) {
//        for (int i = left; i <= right; i++) {
//            arr[up][i] = x++;
//        }
//        up++;
//        for (int i = up; i <= down; i++) {
//            arr[i][right] = x++;
//        }
//        right--;
//        for (int i = right; i >= left; i--) {
//            arr[down][i] = x++;
//        }
//        down--;
//        for (int i = down; i >= up; i--) {
//            arr[i][left] = x++;
//        }
//        left++;
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//}
//int main() {
//    int n;
//    //输入矩阵的大小
//    scanf("%d", &n);
//    //打印矩阵
//    output(n);
//
//    return 0;
//}

