

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



