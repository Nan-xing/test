#include  <stdio.h>


////ʵ���ַ�������
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
//	//����
//	revers(arr,sz);
//	//��ӡ����
//	for (i = 0; i <= sz; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}


////��תֱ��������ͼ��
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
//    //����
//    while (scanf("%d", &n) != EOF)
//    {   //��ӡ
//        print(n);
//    }
//    return 0;
//}

////���ո�ֱ��������ͼ��
//void print(int n)
//{
//    int i, j;
//    for (i = 0; i < n; i++)
//    {//�ո�
//        for (j = 0; j < n - i - 1; j++)
//        {
//            printf("  ");
//        }
//        //��ӡ*
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
//        //��ӡ
//        print(n);
//    }
//    return 0;
//}


////������ͼ��
//void print(int n)
//{
//    int i, j;
//    for (i = 0; i < n; i++)
//    {
//        //�ո�
//        for (j = 0; j < n - i - 1; j++)
//        {
//            printf(" ");
//        }
//        //��ӡ*
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
//    {//��ӡ
//        print(n);
//    }
//    return 0;
//}


////��ת������ͼ��
//void print(int n)
//{
//    int i, j;
//    for (i = 0; i < n; i++)
//    {
//        //�ո�
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
//        //��ӡ
//        print(n);
//    }
//    return 0;
//}


////����ͼ��
//void print(int n)
//{
//    int i, j;
//    //�ϰ벿��
//    for (i = 0; i < n; i++)
//    {
//        //�ո�
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
//    //�м�
//    for (i = 0; i < n + 1; i++)
//    {
//        printf("* ");
//    }
//    printf("\n");
//    //�°벿��
//    for (i = 0; i < n; i++)
//    {
//        //�ո�
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