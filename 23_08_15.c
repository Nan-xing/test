#include <stdio.h>
#include <stdlib.h>

////�ж϶�ά�����е����ֵ
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
//    //����������
//    scanf("%d%d", &n, &m);
//    //��������
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    //�ж���ߵ����
//    Hightest(arr, n, m);
//    return 0;
//}


////�ж����������Ƿ����
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
//    //��������������
//    scanf("%d%d", &n, &m);
//    //�����һ�����������
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    //����ڶ������������
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//    //�ж����������Ƿ���ȣ��Ƿ���1�����Ƿ���0
//    int ret = equal(arr1, arr2, n, m);
//    if (ret)
//        printf("Yes");
//    else
//        printf("No");
//
//    return 0;
//}

////�������д������Ԫ��֮��
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
//    //��������������
//    scanf("%d%d", &n, &m);
//    //������������
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    //���ش������Ԫ��֮��
//    int ret = sum(arr, n, m);
//    printf("%d", ret);
//    return 0;
//}



//
//
////����һ������n�����һ��n*n�ľ���
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
//    //�������Ĵ�С
//    scanf("%d", &n);
//    //��ӡ����
//    output(n);
//
//    return 0;
//}

