#include "stdio.h"


///*С����ѧУ��ѧ¥�ĵ���ǰ���˺ܶ��ˣ�����ǰ����n�����ڵȵ��ݡ�
//����ÿ�ο��Գ���12�ˣ�ÿ��������Ҫ��ʱ��Ϊ4���ӣ�����Ҫ2���ӣ�����Ҫ2���ӣ���
//�����С���ּ��㻹��Ҫ���ٷ��Ӳ��ܳ˵��ݵ���¥�ϡ����������������1�㣩*/
//
//
//int main() {
//    int n = 0;
//    int m = 0;
//    scanf("%d", &n);
//    //С��12ʱ���������ϵ��ݣ�ֻҪ��¥��ʱ��
//    if (n < 12)
//        m = 2;
//    //������12ʱ��������Ҫ������������¥��ʱ�伴��
//    else
//        m = 4 * (n / 12) + 2;
//    printf("%d ", m);
//    return 0;
//}




///*KiKi��ѧ��Ŭ��ѧϰ������ƻ�����Ҫ��ĩ�����ˣ�BoBo��ʦ���������ܳɼ������ĸ����֣����£�
//�ܳɼ� = ʵ��ɼ� * 20% + ���ñ��ֳɼ� * 10% + ���̿��˳ɼ� * 20% + ��ĩ�ϻ����Գɼ� * 50%��
//��������KiKi�ĸ���ɼ��������KiKi���ܳɼ���*/
//int main() {
//    int a, b, c, d;
//    scanf("%d%d%d%d", &a, &b, &c, &d);
//    printf("%.1f", (float)a * 0.2 + b * 0.1 + c * 0.2 + d * 0.5);
//    return 0;
//}


////�߶λ�ͼ
//void print(int a)
//{
//    int i = 0;
//    for (i = 0; i < a; i++)
//    {
//        printf("*");
//    }
//    printf("\n");
//}
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF) {
//        print(a);
//    }
//    return 0;
//}



////������ͼ��
//void print(int a)
//{
//    int i, j;
//    for (i = 0; i < a; i++)
//    {
//        for (j = 0; j < a; j++)
//        {
//            printf("* ");
//        }
//        printf("\n");
//    }
//
//}
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF)
//    {
//        print(a);
//    }
//    return 0;
//}


////ֱ��������ͼ��
//void print(int a)
//{
//    for (int i = 0; i < a; i++)
//    {
//        for (int j = 0; j <= i; j++)
//            printf("* ");
//        printf("\n");
//    }
//}
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF)
//    {
//        print(a);
//    }
//    return 0;
//}