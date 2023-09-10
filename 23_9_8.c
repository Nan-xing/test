#include <stdio.h>

//数数55 牛客：https://www.nowcoder.com/practice/4306996b0a534178b90b3514a8b30028
//int num55(int a, int b)
//{
//    int i, j;
//    int m = 0, count = 0, sum = 0;
//    for (i = a; i <= b; i++)
//    {
//        m = i;
//        sum = m % 10;
//        for (j = 0; m > 0; j++)
//        {
//            m /= 10;
//            sum += m % 10;
//        }
//        if (sum % 5 == 0)
//        {
//            count++;
//        }
//    }
//    return count;
//}
//
//int main() {
//    int a, b;
//    scanf("%d%d", &a, &b);
//    int m = num55(a, b);
//    printf("%d", m);
//    return 0;
//}


//The Biggest Water Problem  牛客：https://www.nowcoder.com/practice/435aa556e093463891f6da7d322140a4
//int JudeNum(long long n)
//{
//    int sum = 0;
//    do
//    {
//        sum = 0;
//        while (n)
//        {
//            sum += n % 10;
//            n /= 10;
//        }
//        n = sum;
//    } while (sum > 9);
//    return sum;
//}
//int main() {
//    long long n;
//    scanf("%lld", &n);
//    int m = JudeNum(n);
//    printf("%d", m);
//    return 0;
//}

