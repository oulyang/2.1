#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int* arr[10];//����ָ������
//	int* (*pa)[10] = &arr;//����ָ��
//	int (*padd)(int, int) = &add;//����ָ��
//	int sum = (*padd)(1, 2);
//	int sum1 = padd(1, 2);
//	printf("%d", sum);
//	int (*parr[4])(int, int);//����ָ�������
//	int (*(*pparr)[4])(int, int) = &parr;//ָ����ָ�������ָ��
//	return 0;
//}


//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <sz-1-i ; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//			
//		}
//	}
//}
//
//
//struct stu
//{
//	char name[20];
//	int age;
//};
//
////void qsort(void* base,    �������������Ԫ�ص�ַ 
////           size_t num,    �����������Ԫ�ظ���
////			 size_t width,  ����������ÿ��Ԫ�صĴ�С(�ֽڣ�
////			 int(*compare)(const void*e1,const void*e2) ����ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ���ú����������
////														����ָ������������Ǵ��Ƚϵ�����Ԫ�صĵ�ַ
////            )
////void* ָ����Խ����κ����͵�ָ�룬�����ܽ������ֽ����йصĲ�����
//// ����*p-�����ò���   p++
//
//
// int cmp_int(const void* e1, const void* e2)//e1  e2�����Ƚ�Ԫ�صĵ�ַ
//{
//	//�Ƚ�2������ֵ��С
//	 return  *(int*)e1 - *(int*)e2;
//}
//
//
// void test1()
// {
//	 int arr[] = { 9,8,7,6,5,4,3,2 };
//	 int sz = sizeof(arr) / sizeof(arr[0]);
//	 qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	 int i = 0;
//	 for (i = 0; i < sz; i++)
//	 {
//		 printf("%d ", arr[i]);
//	 }
// }
//
//
// int cmp_float(const void* e1, const void* e2)
// {
//	 //if (*(float*)e1 = *(float*)e2)
//		// return 0;
//	 //else if (*(float*)e1 > *(float*)e2)
//		// return 1;
//	 //else
//		// return -1;
//	 return ((int)(*(float*)e1 = *(float*)e2));
// }
//
//
// void test2()
// {
//	 float f[] = { 9.0,8.0,7.0,6.0 };
//	 int sz = sizeof(f) / sizeof(f[0]);
//	 qsort(f, sz, sizeof(f[0]), cmp_float);
//	 int j = 0;
//	for (j = 0; j < sz; j++)
//	 {
// 		printf("%f ", f[j]);
//	 }
// }
//
//
//int  cmp_stu_by_age(const void* e1, const void* e2)
// {
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
// }
//
//
//int  cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//�Ƚ��ַ��� ��strcmp����
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//
// void test3()
// {
//	 struct stu s[3] = { { 'sana',20 }, { 'bulu',19 }, { 'cuci',21 } };
//	 int sz = sizeof(s) / sizeof(s[0]);
//	 qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
// }
//
//
// void test4()
// {
//	 int arr[10] = { 9,8,7,6,5,4,3,2 };
//	 int sz = sizeof(arr) / sizeof(arr[0]);
//	 bubble_sort1(arr, sz, sizeof(arr[0]), cmp_int);
// }
//
//
// void swap(char* buf1, char* buf2, int width)
// {
//	 int i = 0;
//	 for (i = 0; i < width;i++)
//	 {
//		 char tmp = *buf1;
//		 *buf1 = *buf2;
//		 *buf2 = tmp;
//		 *buf1++;
//		 *buf2++;
//	 }
// }
//
//
// void bubble_sort1(void* base,int sz,int width,int (*cmp)(void* e1,void* e2))
// {
//	 int i = 0;
//	 //����
//	 for (i = 0; i < sz - 1; i++)
//	 {
//		 //ÿһ�˱ȽϵĶ���
//		 int j = 0;
//		 for (j = 0; j < sz - 1 - i; j++)
//		 {
//			 //����Ԫ�رȽ�
//			 if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
//			 {
//				 swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//
//			 }
//
//		 }
//	 }
// }
//
//
// void test5()
// {
//	 struct stu s[3] = { { 'sana',20 }, { 'bulu',19 }, { 'cuci',21 } };
//	 int sz = sizeof(s) / sizeof(s[0]);
////	 bubble_sort1(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	 bubble_sort1(s, sz, sizeof(s[0]), cmp_stu_by_name);
// }
//
//
//int main()
//{
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//bubble_sort(arr, sz);
//	//int i = 0;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	//test5();
//	return 0;
//}
 

 //int main()
 //{
	// int a[] = { 1,2,3,4 };
	// printf("%d\n", sizeof(a));//�����ܴ�С											 4*4=16
	// printf("%d\n", sizeof(a+0));//a��ʾ��Ԫ�صĵ�ַ��a+0Ҳ����Ԫ�ص�ַ��		��СΪ4��8
	// printf("%d\n", sizeof(*a));//a��ʾ��Ԫ�صĵ�ַ��*a��ʾ��Ԫ��1��Ԫ������Ϊint����С��4
	// printf("%d\n", sizeof(a+1));//a��ʾ��Ԫ�صĵ�ַ��a+1�ǵڶ���Ԫ�ص�ַ��			4��8
	// printf("%d\n", sizeof(a[1]));//a[1]��ʾ�ڶ���Ԫ�أ�����Ϊint,					��СΪ4
	// printf("%d\n", sizeof(&a));//&aȡ�����������ַ����ַ��СΪ				   4��8
	// printf("%d\n", sizeof(*&a));//&aȡ�����������ַ��*&a��ʾ���飬				16
	// printf("%d\n", sizeof(&a+1));//&aȡ�����������ַ��&a+1���ǵ�ַ���м����1�����飬4��8
	// printf("%d\n", sizeof(&a[0]));//a[0]��ʾ��Ԫ�أ�&a[0]��ʾ��Ԫ�ص�ַ				4��8
	// printf("%d\n", sizeof(&a[0]+1));//&a[0]��ʾ��Ԫ�ص�ַ��&a[0]+1��ʾ�ڶ���Ԫ�ص�ַ  4��8
	// return 0;
 //}


//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//  �����ܴ�С     				6*1=6
//	printf("%d\n", sizeof(arr+0));// arr+0��ʾ��Ԫ�ص�ַ		 4/8
//	printf("%d\n", sizeof(*arr));//*arr��ʾ��Ԫ��				  1
//	printf("%d\n", sizeof(arr[1]));//arr[1]��ʾ�ڶ���Ԫ��		  1
//	printf("%d\n", sizeof(&arr));//�����ַ						 4/8
//	printf("%d\n", sizeof(&arr+1));//��ַ						 4/8
//	printf("%d\n", sizeof(&arr[0]+1));//�ڶ���Ԫ�ص�ַ			 4/8
//	return 0;
//}


int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
		printf("%d\n", strlen(arr));// ��a��ʼ����\0��   {->'a'...   }  ���ֵ     				
		printf("%d\n", strlen(arr+0));//��a��ʼ����\0�� 	���ֵ	 
		//printf("%d\n", strlen(*arr));//�ѡ�a����97������ȥ���������
		//printf("%d\n", strlen(arr[1]));//�ѡ�b����98������ȥ���������
		printf("%d\n", strlen(&arr));//�������׵�ַ��ʼ����\0�� ->{'a'...   }  ���ֵ
		printf("%d\n", strlen(&arr+1));//������β��ʼ����\0��  {'a'...'f'}->   ���ֵ-6
		printf("%d\n", strlen(&arr[0]+1));//�ӵڶ���Ԫ�ؿ�ʼ��\0   {'a',->'b'...}  ���ֵ-1
	return 0;
}