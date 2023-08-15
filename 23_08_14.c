#include "stdio.h"

////删除数组中的指定元素
////用于删除序列中的指定数据
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
//    //输出删除后的数据
//    for (i = 0; i < sz ; i++)
//    {
//        printf("%d ", arr1[i]);
//    }
//}
//int main() {
//    int arr[50] = { 0 };
//    int n = 0, i = 0, j = 0;
//    //输入序列长度
//    scanf("%d", &n);
//    //输入数据
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &j);
//    //传入序列、序列长度与所需要删除的数据
//    Del(arr, n,j);
//    return 0;
//}


////删除序列中重复的数据
//void DelRepeat(int arr[], int sz)
//{
//    int i = 0, j = 0;
//    for (i = 0; i < sz; i++)
//    {
//        //下标相同的元素不需要比较
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
//    //输入序列数据个数
//    scanf("%d", &n);
//    //输入序列
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //判断是否有重复数据并删除
//    DelRepeat(arr, n);
//    return 0;
//}

////判断序列中指定元素出现次数
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
//    //输入数组元素个数
//    scanf("%d", &n);
//    //输入每一个元素
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &x);
//    //结束重复元素个数
//    ret = Ret(arr, n, x);
//    printf("%d", ret);
//    return 0;
//}

////求2~n中可以被2和3整除的数的个数
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
//    //输入数组的范围
//    scanf("%d", &n);
//    //将2~n的数据存入数组中
//    for (i = 0; i < n,j<=n; i++, j++)
//    {
//        arr[i] = j;
//    }
//    //传入数据进行判断
//    int ret = cle(arr, n);
//    printf("%d", ret);
//    return 0;
//}