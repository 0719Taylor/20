#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	//未初始化的指针变量存在问题
//	int* p;//局部变量不初始化,里边默认放的是一个随机值
//	*p = 20;
//	return 0;
//}


//数组越界的野指针问题
//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = a;
//	for (i = 0; i <= 12; i++)
//	{
//		*p = i;
//		p++;  //这两句相当于*p++ = i;
//	}
//	return 0;
//}





//指针指向的空间被释放
//test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p=test();
//	printf("%d\n",*p);
//	return 0;
//}





//预防野指针 -- NULL
//int main()
//{
//	//int a = 10;
//	//int* pa = &a;
//	//int* p = NULL; //空指针
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	//指针指向空间释放 -- 置NULL
//	pa = NULL;
//	//指针使用之前检查有效性
//	if (pa != NULL)
//	{
//
//	}
//	return 0;
//}






//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ",*p);
//		p += 1;  //指针加减整数
//	}*/
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p += 2;  //指针加减整数
//	}
//	return 0;
//}






//指针-指针
//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]); //指针减去指针得到的是指针和指针之间元素的个数、
//	printf("%d\n", &arr[9] - &ch[0]);  //error  两个指针要指向同一个空间
//	return 0;
//}






//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//
//	//strlen - 求字符串长度
//	//递归 - 模拟实现了strlen - 计数器的方式1, 递归的方式2
//	//
//	char arr[] = "bit";	
//	int len = my_strlen(arr);
//	printf("%d\n",len);







//指针的关系运算
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	/*for (vp = &values[N_VALUES]; vp > &values[0];)   //这种更好
//	{
//		*--vp = 0;
//	}*/
//	for (vp = &values[N_VALUES-1]; vp >=&values[0];vp--)
//	{
//		*vp = 0;
//	}
//
//}




//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n",arr);  //地址 - 首元素的地址
//	printf("%p\n", arr+1);
//
//	printf("%p\n",&arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n",&arr);
//	printf("%p\n", &arr+1);
//	//1,&arr - &数组名 - 数组名不是首元素的地址 - 此时数组名表示整个数组 - &数组名 取出的是整个数组的地址
//	//2.sizeof(arr) - sizeof(数组名) - 数组名表示的是整个数组 - sizeof(数组名)计算的是整个数组的大小
//	return 0;
//}






//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n",arr[i]);
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p ========  %p\n",p+i,&arr[i]);
//	}*/
//}








//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa就是二级指针
//	return 0;
//}




//指针数组
int main()
{
	int a = 10, b = 20, c = 30;
	int* arr[3] = { &a,&b,&c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", * (arr[i]));
	}
	return 0;
}