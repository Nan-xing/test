

#include "stdio.h"


////2的n次方的计算
//    int main()
//    {
//        int n = 0;
//        int ret = 0;
//        scanf("%d", &n);
//        ret = 2 << (n - 1);
//        printf("%d", ret);
//        return 0;
//    }

////你能活多少秒
//int main() {
//    int age = 0;
//    long long  year_s = 3156 * (10 * 10 * 10 * 10);
//    scanf("%d", &age);
//    printf("%lld", age * year_s);
//    return 0;
//}

//计数问题

//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int x = 0;
//    scanf("%d %d", &n, &x);
//
//    int i = 0;
//    int count = 0;
//    for (i = 1; i <= n; i++)
//    {
//        int j = i;
//        while (j)
//        {
//            if (j % 10 == x)
//            {
//                count++;
//            }
//            j = j / 10;
//        }
//    }
//    printf("%d", count);
//
//    return 0;
//}


//逆序输出
//void nz(int arr[])
//{
//    int left = 0, right = 9;
//    int temp = 0;
//    while (left < right)
//    {
//        temp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = temp;
//        left++;
//        right--;
//
//    }
//    int i;
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", arr[i]);
//
//    }
//
//}
//int main() {
//    int arr[10] = { 0 };
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    nz(arr);
//    return 0;
//}


////N个数字之和
//int main() {
//    int n = 0, i = 0, j = 0;
//    int sum = 0;
//    int arr[] = { 0 };
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &j);
//        arr[i] = j;
//        sum = sum + arr[i];
//    }
//
//    printf("%d", sum);
//    return 0;
//}


////计算N个数最大值与最小值的差
//int main() {
//    int arr[20] = { 0 };
//    int n = 0;
//    int max = 0, min = 0, temp = 0;
//    int i = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] >= max)
//        {
//            max = arr[i];
//        }
//    }
//    min = max;
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] <= min)
//        {
//            min = arr[i];
//        }
//    }
//    printf("%d", max - min);
//    return 0;
//}



//冒泡排序
int main()
{
	int arr[10] = { 1,2,3,4,5,9,7,8,9,10 };
	int i = 0, j = 0;
	for (i = 0; i < 9; i++)
	{
		int temp = 0;
		for (j = 0; j < 9-i; j++)
		{
			if (arr[j] <arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j+ 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}