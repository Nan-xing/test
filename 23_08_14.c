#include "stdio.h"

////ɾ�������е�ָ��Ԫ��
////����ɾ�������е�ָ������
//void Del(int arr[], int sz, int j)
//{
//    int i = 0; 
//    int c = 0,d=0;
//    int arr1[50] = { 0 };
//    for (i = 0; i < sz; i++)
//    {
//
//        if (arr[i] != j)
//        {
//            arr1[c] = arr[i];
//            c++;
//        }
//        else
//        {
//            d++;
//        }
//    }
//    //���ɾ���������
//    for (i = 0; i < sz ; i++)
//    {
//        printf("%d ", arr1[i]);
//    }
//}
//int main() {
//    int arr[50] = { 0 };
//    int n = 0, i = 0, j = 0;
//    //�������г���
//    scanf("%d", &n);
//    //��������
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &j);
//    //�������С����г���������Ҫɾ��������
//    Del(arr, n,j);
//    return 0;
//}


////ɾ���������ظ�������
//void DelRepeat(int arr[], int sz)
//{
//    int i = 0, j = 0;
//    for (i = 0; i < sz; i++)
//    {
//        //�±���ͬ��Ԫ�ز���Ҫ�Ƚ�
//        for (j = i + 1; j < sz; j++)
//        {
//            if (arr[i] == arr[j])
//            {
//                arr[j] = 0;
//            }
//        }
//    }
//    for (i = 0; i < sz; i++)
//    {
//        if (arr[i] != 0)
//        {
//            printf("%d ", arr[i]);
//        }
//    }
//}
//int main() {
//    int n = 0, m = 0, i;
//    int arr[5000] = { 0 };
//    //�����������ݸ���
//    scanf("%d", &n);
//    //��������
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //�ж��Ƿ����ظ����ݲ�ɾ��
//    DelRepeat(arr, n);
//    return 0;
//}

////�ж�������ָ��Ԫ�س��ִ���
//int Ret(int arr[], int sz, int x)
//{
//    int i = 0, y = 0;
//    for (i = 0; i < sz; i++)
//    {
//        if (arr[i] == x)
//            y++;
//    }
//    return y;
//}
//int main() {
//    int i = 0, n = 0, ret = 0, x = 0;
//    int arr[100] = { 0 };
//    //��������Ԫ�ظ���
//    scanf("%d", &n);
//    //����ÿһ��Ԫ��
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &x);
//    //�����ظ�Ԫ�ظ���
//    ret = Ret(arr, n, x);
//    printf("%d", ret);
//    return 0;
//}

////��2~n�п��Ա�2��3���������ĸ���
//int cle(int arr[], int sz)
//{
//    int i = 0, j = 0, count = 1;
//    int pri[100] = { 0 };
//    for (i =0; i < sz; i++)
//    {
//        for (j = 0; j < i; j++)
//        {
//            if (arr[i] % arr[j] == 0)
//            {
//                break;
//            }
//        }
//        if (arr[i] == arr[j])
//        {
//            printf("%d ", arr[i]);
//            count++;
//        }
//    }
//    printf("\n");
//    return sz-count;
//}
//int main() {
//    int i = 0, n = 0, j = 2;
//    int arr[100] = { 0 };
//    //��������ķ�Χ
//    scanf("%d", &n);
//    //��2~n�����ݴ���������
//    for (i = 0; i < n,j<=n; i++, j++)
//    {
//        arr[i] = j;
//    }
//    //�������ݽ����ж�
//    int ret = cle(arr, n);
//    printf("%d", ret);
//    return 0;
//}