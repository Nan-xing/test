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
