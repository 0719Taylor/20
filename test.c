#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	//δ��ʼ����ָ�������������
//	int* p;//�ֲ���������ʼ��,���Ĭ�Ϸŵ���һ�����ֵ
//	*p = 20;
//	return 0;
//}


//����Խ���Ұָ������
//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = a;
//	for (i = 0; i <= 12; i++)
//	{
//		*p = i;
//		p++;  //�������൱��*p++ = i;
//	}
//	return 0;
//}





//ָ��ָ��Ŀռ䱻�ͷ�
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





//Ԥ��Ұָ�� -- NULL
//int main()
//{
//	//int a = 10;
//	//int* pa = &a;
//	//int* p = NULL; //��ָ��
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	//ָ��ָ��ռ��ͷ� -- ��NULL
//	pa = NULL;
//	//ָ��ʹ��֮ǰ�����Ч��
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
//		p += 1;  //ָ��Ӽ�����
//	}*/
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p += 2;  //ָ��Ӽ�����
//	}
//	return 0;
//}






//ָ��-ָ��
//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]); //ָ���ȥָ��õ�����ָ���ָ��֮��Ԫ�صĸ�����
//	printf("%d\n", &arr[9] - &ch[0]);  //error  ����ָ��Ҫָ��ͬһ���ռ�
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
//	//strlen - ���ַ�������
//	//�ݹ� - ģ��ʵ����strlen - �������ķ�ʽ1, �ݹ�ķ�ʽ2
//	//
//	char arr[] = "bit";	
//	int len = my_strlen(arr);
//	printf("%d\n",len);







//ָ��Ĺ�ϵ����
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	/*for (vp = &values[N_VALUES]; vp > &values[0];)   //���ָ���
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
//	printf("%p\n",arr);  //��ַ - ��Ԫ�صĵ�ַ
//	printf("%p\n", arr+1);
//
//	printf("%p\n",&arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n",&arr);
//	printf("%p\n", &arr+1);
//	//1,&arr - &������ - ������������Ԫ�صĵ�ַ - ��ʱ��������ʾ�������� - &������ ȡ��������������ĵ�ַ
//	//2.sizeof(arr) - sizeof(������) - ��������ʾ������������ - sizeof(������)���������������Ĵ�С
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








//����ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa���Ƕ���ָ��
//	return 0;
//}




//ָ������
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