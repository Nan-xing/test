#include "stdio.h"
#include "math.h"

////����һ�����ݣ�������ֵ����Сֵ��ƽ��ֵ
////�ж�ƽ��ֵ
//float Ave(float arr[], int n)
//{
//    int i = 0;
//    float sum = 0;
//    for (i = 0; i < n; i++)
//    {
//        sum += arr[i];
//    }
//    return sum / n;
//
//}
////�ж���Сֵ
//float MIN(float arr[], int n) {
//    int i = 0;
//    float min = 101.0;
//    for (i = 0; i < n; i++) {
//        if (arr[i] < min)
//            min = arr[i];
//    }
//    return min;
//}
////�ж����ֵ
//float MAX(float arr[], int n) {
//    int i = 0;
//    float max = 0;
//    for (i = 0; i < n; i++) {
//        if (arr[i] > max)
//            max = arr[i];
//    }
//    return max;
//}
//int main() {
//    int n, i;
//    float arr[100] = { 0 };
//    //����Ԫ�ظ���
//    scanf("%d", &n);
//    //��������
//    for (i = 0; i < n; i++) {
//        scanf("%f", &arr[i]);
//    }
//    //�������ֵ����Сֵ��ƽ��ֵ
//    float max = MAX(arr, n);
//    float min = MIN(arr, n);
//    float average = Ave(arr, n);
//    printf("%.2f %.2f %.2f", max, min, average);
//
//    return 0;
//}




////���������ε��ܳ������
//
////�����ܳ�
//float Cir(float a, float b, float c)
//{
//    return a + b + c;
//}
////�������
//float Area(float a, float b, float c)
//{
//    float area, p;
//    p = (a + b + c) / 2;
//    area = sqrtf(p * (p - a) * (p - b) * (p - c));
//    return area;
//}
//int main() {
//    int a, b, c;
//    //���������εı߳�
//    scanf("%d%d%d", &a, &b, &c);
//    //�����ܳ�
//    float cir = Cir(a, b, c);
//    //�������
//    float area = Area(a, b, c);
//    printf("circumference=%.2f area=%.2f", cir, area);
//    return 0;
//}



///*BoBo����һ�����̣�������n��δ�򿪵����̣�
//KiKiϲ�������̣���һʱ�䷢�������̡�KiKiÿ
//h�����ܺȹ�һ�����̣�����KiKi�ںȹ�һ������
//֮ǰ�������һ������ô����m���Ӻ��ж��ٺ�
//δ�򿪵����̣�*/
//int main() {
//    int m, n, h;
//    int box = 0;
//    scanf("%d%d%d", &n, &h, &m);
//    box = n - m / h - (m % h + 2) % (m % h + 1);
//    printf("%d", box);
//    return 0;
//}



///*ţţ�ڿ��ˣ�Ҫ��10��ˮ���ܽ�ʣ�������ֻ��һ���� h ���ף�
//����뾶�� r ���׵�ˮ����ţţ����Ҫ�ȶ��ٱ�ˮ���ܽ�ʡ�*/
//
//#define pi 3.14
////�����
//float Vol(int h, int r)
//{
//    return pi * h * r * r;
//}
//int main() {
//    int h, r, c = 10000, cup = 0;
//    //���뱭�ӵ���Ͱ뾶
//    scanf("%d%d", &h, &r);
//    //���ձ���
//    float a_cup_vol = Vol(h, r);
//    while (c > 0)
//    {
//        c = c - a_cup_vol;
//        cup++;
//    }
//    printf("%d", cup);
//
//    return 0;
//}


////����������
//#define pi 3.14
//int main() {
//    int r;
//    scanf("%d", &r);
//    printf("%f", (4.0 / 3.0) * pi * r * r * r);
//    return 0;
//}

//
//// С���ֶ�����
//int main() {
//    int h, m, k;
//    scanf("%d:%d%d", &h, &m, &k);
//    printf("%02d:%02d", (h + (k + m) / 60) % 24, (k + m) % 60);
//    return 0;
//}