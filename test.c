#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>

////strtok
//int main()
//{
//	char arr[] = "zxc@afhnkj.urao";
//	char* p = "@.";
//	char buf[30] = { 0 };
//	//����һ�ݣ����ı�ԭ����
//	strcpy(buf, arr);
//	char* ret = NULL;
//	for (ret=strtok(buf, p); ret != NULL; ret=strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	//char* ret = strtok(buf, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	////%s,����ַ�����ret��ʾ�ַ�����Ԫ�ص�ַ��*ret��ʾ��Ԫ��
//	//printf("%s\n", ret);
//	return 0;
//}

////strerror
//int main()
//{
//	//char* str = strerror(1);
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		//errno ������
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open success\n");
//	}
//	//printf("%s\n", str);
//	return 0;
//}

////�ַ����� & �ַ�ת��
//int main()
//{
//	/*char ch = '1';
//	int ret = islower(ch);
//	printf("%d\n", ret);*/
//
//	//char ch = tolower('D');
//	//putchar(ch);
//
//	char arr[] = "I Am A BOY";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

#include <assert.h>

//struct S
//{
//	char name[20];
//	int age;
//
//};
//
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
	//assert(dest && src);
	//void* ret =dest;
	//while (num--)
	//{
	//	*(char*)dest = *(char*)src;
	//	++(char*)dest;
	//	++(char*)src;


	//}
	//return ret;
//}
//
//int main()
//{
//	//int arr1[] = { 1,2,3,4,5 };
//	//int arr2[5] = { 0 };
//	//memcpy(arr2, arr1, sizeof(arr1));
//	//printf("%d\n", arr2[4]);
//	struct S arr3[] = { {"zs", 20} ,{"ls",18} };
//	struct S arr4[3] = { 0 };
//	//memcpy(arr4, arr3, sizeof(arr3));
//	my_memcpy(arr4, arr3, sizeof(arr3));
//
//	printf("%d\n", arr4[1].age);
//	return 0;
//}

//memmove
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//
//	if (dest < src)//�Ƚϴ�С�������޹�
//	{
//		//ǰ->��
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//
//
//		}
//	}
//	//��dest>srcȫ����Ϊ ��->ǰ ����
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//		
//	}
//	return ret;
//
//
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	my_memmove(arr, arr + 3, 20);
//
//	//memmove(arr + 2, arr, 20);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//
//	}
//	return 0;
//}

//int main()
//{
//	//int arr1[] = { 1,2,3,5,6 };
//	//int arr2[] = { 1,2,4,5,7 };
//	//int ret = memcmp(arr1, arr2, 8);//8:�ֽ���
//	char arr[11] = { 0 };
//	char*  ret = memset(arr, '!', 10);
//	arr[10] = '\0';
//	printf("%s\n", ret);
//	return 0;
//}
//struct T
//{
//	double weight;
//	char hobby[10];
//};
//
//struct stu
//{
//	char name[20];
//	char sex[10];
//	int age;
//	struct T st;
//};
//
//int main()
//{
//	struct stu s1 = { "li","��",20,{67.8,"football"}};
//	printf("%s %s %d %lf %s\n", s1.name, s1.sex, s1.age,s1.st.weight,s1.st.hobby);
//	return 0;
//}
//�����ṹ������
//struct s1
//{
//	char n1;
//	int a;
//	char n2;
//
//};
//
//struct s2
//{
//	char n1;
//	
//	char n2;
//	int a;
//};
//
//int main()
//
//{
//	//�ṹ�������ʼ��
//	struct s1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	struct s2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	return 0;
//}


//�޸�Ĭ�϶�����
//#pragma pack(4)
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()
//
//int main()
//{
//	struct S s1;
//	printf("%d\n", sizeof(s1));
//	return 0;
//}


//offsetof �ṹ�����������׵�ַ��ƫ����   ��
//#include <stddef.h>
//struct S
//{
//	char c1;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}


//#include <stdio.h>
//#include <stddef.h>  // ��׼���ж���� offsetof ��
//
//// �Զ���� offsetof ��ʵ��
//#define MY_OFFSETOF(type, member) ((size_t) &(((type *)0)->member))
//
//// ����һ���ṹ��
//struct MyStruct {
//    int a;       // 4�ֽ�
//    double b;    // 8�ֽ�
//    char c;      // 1�ֽ�
//};
//
//int main() {
//    // ʹ���Զ���� MY_OFFSETOF ��
//    printf("Offset of 'a': %zu\n", MY_OFFSETOF(struct MyStruct, a));
//    printf("Offset of 'b': %zu\n", MY_OFFSETOF(struct MyStruct, b));
//    printf("Offset of 'c': %zu\n", MY_OFFSETOF(struct MyStruct, c));
//
//    // ʹ�ñ�׼���е� offsetof ����жԱ�
//    printf("Offset of 'a' (stdlib): %zu\n", offsetof(struct MyStruct, a));
//    printf("Offset of 'b' (stdlib): %zu\n", offsetof(struct MyStruct, b));
//    printf("Offset of 'c' (stdlib): %zu\n", offsetof(struct MyStruct, c));
//
//    return 0;
//}
// 
// 
// �ṹ�崫��
//struct S
//{
//	char name;
//	int age;
//
//};
//
//void Init(struct S* ps)
//{
//	ps->name = 'z';
//	ps->age = 20;
//}
//
//void Print1(struct S tmp)
//{
//	printf("%c %d\n", tmp.name, tmp.age);
//}
//
////��ʡ�ռ䣬�����޸�ָ��ָ������ safe
//void Print2(const struct S *ps)
//{
//	printf("%c %d\n", ps->name, ps->age);
//}
//
//int main()
//{
//	struct S s1 = { 0 };
//	Init(&s1);
//	Print1(s1);
//	Print2(&s1);
//	return 0;
//}


//λ�Σ���ʡ�ռ䣩

//struct S
//{
//	int a : 2;//ռ��������λ
//	int b : 3;
//	int c : 5;
//
//
//};
//int main()
//{
//	struct S s1;
//	printf("%d\n", sizeof(s1));
//	return 0;
//}


//λ���ڴ�����δ洢
//���ձ���λ���洢
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//
//
//};
//
//int main()
//{
//	struct S s1 = { 0 };
//	s1.a = 10;
//	s1.b = 12;
//	s1.c = 3;
//	s1.d = 4;
//	return 0;
//}


//ö�٣���ֵֻ��������ѡ
//enum S
//{
//	//����
//	male,
//	female=0,
//	secret
//
//
//};
//int main()
//{
//	enum S s1;
//	s1 = male;//��ö�ٳ�����������ö�ٱ�����ֵ
//	printf("%d %d %d", male, female, secret);
//	return 0;
//}

//����-������-������
//����һ���ڴ�ռ䣬����ͬʱʹ��
//union un
//{
//	char c;
//	int i;
//
//};
//int main()
//{
//	union un u1;
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}

int check_sys()
{
	union U
	{
		char c;
		int i;

	}u1;
	u1.i = 1;
	return u1.c;
}

int main()
{
	int ret = check_sys();
	if (1 == ret)
		printf("С�˴洢");
	else
		printf("��˴洢");

	return 0;
}