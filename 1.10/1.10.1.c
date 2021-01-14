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
//	int* arr[10];//整型指针数组
//	int* (*pa)[10] = &arr;//数组指针
//	int (*padd)(int, int) = &add;//函数指针
//	int sum = (*padd)(1, 2);
//	int sum1 = padd(1, 2);
//	printf("%d", sum);
//	int (*parr[4])(int, int);//函数指针的数组
//	int (*(*pparr)[4])(int, int) = &parr;//指向函数指针数组的指针
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
////void qsort(void* base,    待排序数组的首元素地址 
////           size_t num,    待排序数组的元素个数
////			 size_t width,  待排序数组每个元素的大小(字节）
////			 int(*compare)(const void*e1,const void*e2) 函数指针，比较两个元素的所用函数的地址，该函数自行设计
////														函数指针的两个参数是待比较的两个元素的地址
////            )
////void* 指针可以接受任何类型的指针，但不能进行与字节数有关的操作，
//// 例：*p-解引用操作   p++
//
//
// int cmp_int(const void* e1, const void* e2)//e1  e2两个比较元素的地址
//{
//	//比较2个整型值大小
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
//	//比较字符串 用strcmp函数
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
//	 //趟数
//	 for (i = 0; i < sz - 1; i++)
//	 {
//		 //每一趟比较的对数
//		 int j = 0;
//		 for (j = 0; j < sz - 1 - i; j++)
//		 {
//			 //两个元素比较
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
	// printf("%d\n", sizeof(a));//数组总大小											 4*4=16
	// printf("%d\n", sizeof(a+0));//a表示首元素的地址，a+0也是首元素地址，		大小为4或8
	// printf("%d\n", sizeof(*a));//a表示首元素的地址，*a表示首元素1，元素类型为int，大小是4
	// printf("%d\n", sizeof(a+1));//a表示首元素的地址，a+1是第二个元素地址，			4或8
	// printf("%d\n", sizeof(a[1]));//a[1]表示第二个元素，类型为int,					大小为4
	// printf("%d\n", sizeof(&a));//&a取出的是数组地址，地址大小为				   4或8
	// printf("%d\n", sizeof(*&a));//&a取出的是数组地址，*&a表示数组，				16
	// printf("%d\n", sizeof(&a+1));//&a取出的是数组地址，&a+1仍是地址，中间跨了1个数组，4或8
	// printf("%d\n", sizeof(&a[0]));//a[0]表示首元素，&a[0]表示首元素地址				4或8
	// printf("%d\n", sizeof(&a[0]+1));//&a[0]表示首元素地址，&a[0]+1表示第二个元素地址  4或8
	// return 0;
 //}


//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//  数组总大小     				6*1=6
//	printf("%d\n", sizeof(arr+0));// arr+0表示首元素地址		 4/8
//	printf("%d\n", sizeof(*arr));//*arr表示首元素				  1
//	printf("%d\n", sizeof(arr[1]));//arr[1]表示第二个元素		  1
//	printf("%d\n", sizeof(&arr));//数组地址						 4/8
//	printf("%d\n", sizeof(&arr+1));//地址						 4/8
//	printf("%d\n", sizeof(&arr[0]+1));//第二个元素地址			 4/8
//	return 0;
//}


int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
		printf("%d\n", strlen(arr));// 从a开始至‘\0’   {->'a'...   }  随机值     				
		printf("%d\n", strlen(arr+0));//从a开始至‘\0’ 	随机值	 
		//printf("%d\n", strlen(*arr));//把‘a’（97）传过去，程序崩溃
		//printf("%d\n", strlen(arr[1]));//把‘b’（98）传过去，程序崩溃
		printf("%d\n", strlen(&arr));//从数组首地址开始至‘\0’ ->{'a'...   }  随机值
		printf("%d\n", strlen(&arr+1));//从数组尾开始至‘\0’  {'a'...'f'}->   随机值-6
		printf("%d\n", strlen(&arr[0]+1));//从第二个元素开始至\0   {'a',->'b'...}  随机值-1
	return 0;
}