#include  <stdio.h>


////实现字符串逆序
//void revers(char arr[], int sz)
//{
//	int left = 0, right = sz;
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//
//	}
//}
//int main()
//{
//	char arr[256] = "";
//	int i = 0;
//	scanf("%s",arr);
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	//逆序
//	revers(arr,sz);
//	//打印数组
//	for (i = 0; i <= sz; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}


////翻转直角三角形图案
//void print(int n)
//{
//    int i, j;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n - i; j++)
//        {
//            printf("* ");
//        }
//        printf("\n");
//    }
//
//}
//int main() {
//    int n;
//    //输入
//    while (scanf("%d", &n) != EOF)
//    {   //打印
//        print(n);
//    }
//    return 0;
//}

////带空格直角三角形图案
//void print(int n)
//{
//    int i, j;
//    for (i = 0; i < n; i++)
//    {//空格
//        for (j = 0; j < n - i - 1; j++)
//        {
//            printf("  ");
//        }
//        //打印*
//        for (j = 0; j < i + 1; j++)
//        {
//            printf("* ");
//        }
//        printf("\n");
//    }
//}
//int main() {
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        //打印
//        print(n);
//    }
//    return 0;
//}


////金字塔图案
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
//        //打印*
//        for (j = 0; j < i + 1; j++)
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
//    {//打印
//        print(n);
//    }
//    return 0;
//}


////翻转金字塔图案
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
//        for (j = 0; j < n - i; j++)
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
//        //打印
//        print(n);
//    }
//    return 0;
//}


////菱形图案
//void print(int n)
//{
//    int i, j;
//    //上半部分
//    for (i = 0; i < n; i++)
//    {
//        //空格
//        for (j = 0; j < n - i; j++)
//        {
//            printf(" ");
//        }
//        for (j = 0; j < i + 1; j++)
//        {
//            printf("* ");
//        }
//        printf("\n");
//    }
//    //中间
//    for (i = 0; i < n + 1; i++)
//    {
//        printf("* ");
//    }
//    printf("\n");
//    //下半部分
//    for (i = 0; i < n; i++)
//    {
//        //空格
//        for (j = 0; j < i + 1; j++)
//        {
//            printf(" ");
//        }
//        for (j = 0; j < n - i; j++)
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