#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//int* Test()
//{
//	int a = 10;
//	return a;
//}
//int main()
//{
//	int* p = Test();
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for ( i = 1; i <= n ;i++)
//	{		
//		ret = 1;
//		for ( j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	printf("%p\n", arr);
//	printf("%p\n", &i);
//	
//	for ( i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//
//	return 0;
//}

//#include<assert.h>
//void my_strcpy(char* dst, char* src)
//{
//	assert(*dst != NULL);
//	assert(*src != NULL);
//	while (*dst++ = *src++)
//	{
//		;
//	}
//	//while (*src != '\0')
//	//{
//	//	*dst = *src;//ָ����ָ��ĵ�ַ��Ӧ��ֵ
//	//	dst++;//ָ����ָ���λ��
//	//	src++;
//	//}
//	//*dst = *src;
//}
//int main()
//{
//	char arr1[] = "*******";
//	char arr2[] = "hello";
//	//strcpy(arr1, arr2);
//	my_strcpy(arr1, arr2);
//	printf("arr1=%s\n", arr1);
//	//printf("arr2=%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	const int n = 20;
//	 int* const p = &n;
//	*p = &n;
//	 p = &n;
//	*p = 79;
//	printf("%d\n", n);
//	printf("%p\n", &n);
//	printf("%p\n", p);
//	
//	
//	return 0;
//}

////�����
//char* My_strcpy(char* dst, const char* src)
//{
//	char* ret = dst;
//	assert(*dst != NULL);
//	assert(*src != NULL);
//	while (*dst++ = *src++)
//	{
//		;
//	}
//	return ret;
//	//return dst;//��ֱ�ӷŻ�dst�����޷����arr1��ֵ
//}
//////���İ�
////void My_strcpy(char* dst, const char* src)
////{
////	assert(*dst != NULL);
////	assert(*src != NULL);
////	while (*dst++ = *src++)
////	{
////		;
////	}
////}
//////������
////void My_strcpy(char* dst, char* src)
////{
////	assert(*dst != NULL);
////	assert(*src != NULL);
////	while (*dst++ = *src++)
////	{
////		;
////	}
////}
//////�ڶ���
////void My_strcpy(char* dst, char* src)
////{
////	while (*dst++ = *src++)
////	{
////		;
////	}
////}
//////��һ��
////void My_strcpy(char* dst, char* src)
////{
////	while (*src != '\0')
////	{
////		*dst = *src;//��ָ��ĵ�ַ��ֵ����Ԫ�أ�
////		dst++;//��ָ��ĵ�ַ��λ�ã�
////		src++;
////	}
////	*dst = *src;
////}
//int main()
//{
//	char arr1[] = "####################";
//	char arr2[] = "hello!";
//	//�����
//	printf("arr1=%s\n", My_strcpy(arr1, arr2));
//	//My_strcpy(arr1, arr2);
//	//printf("arr1 = %s\n", arr1);
//	return 0;
//}

int My_strlen(const char* str)
{
	int count = 0;
	assert(*str != NULL);
	while (*str++)
	{
		count++;
	}
	return count;
}
int main()
{
	const char* p = "shuzuchangdu";
	printf("%d\n", My_strlen(p));
}