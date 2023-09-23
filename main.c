#define _CRT_SECURE_NO_WARNINGS

////输入任意两个数，在一个子函数中求两个数的最大公约数和最小公倍数，并将结果返回
////另外一个子函数判断其最大公约数的奇偶性，在主函数输出结果
////把主函数和两个子函数放在不同的目录下，编译时用-I选项包含子函数的路径
//#include <stdio.h>
//#include <math.h>
//#include <assert.h>
//int max_jiou(int gys)
//{
//	if (gys / 2 == 0)
//	{
//		return 0;
//	}
//	return 1;
//}
//void max_min(int a, int b, int* gys, int* gbs)
//{
//	int pa = a;
//	int pb = b;
//	int max = 0;
//	assert(pa && pb);
//	if (pa < pb)
//	{
//		int temp = pa;
//		pa = pb;
//		pb = temp;
//	}
//	while (max = pa % pb)
//	{
//		pa = pb;
//		pb = max;
//	}
//	*gys = pb;
//	*gbs = a * b / (*gys);//两个整数的乘积=它们的最大公约数和最小公倍数的乘积
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("please input two numbers:");
//	scanf("%d%d", &a, &b);
//
//	//调用最大公约数/最小公倍数函数
//	int gys = 0;
//	int gbs = 0;
//	max_min(a, b, &gys, &gbs);
//	printf("max_gys: %d\n",gys);
//	printf("min_gbs: %d\n",gbs);
//
//	//调用奇偶性函数
//	int ret = max_jiou(gys);
//	if (ret == 0)
//	{
//		printf("%d is a oushu\n",gys);
//	}
//	else
//	{
//		printf("%d is a jishu\n",gys);
//	}
//	return 0;
//}

////从键盘输入一个数，判断该数是否为素数，要求判断过程用子函数完成，在主函数中调用该函数并显示输出
////在运行中添加-E,-C,-S,-c,-o等选项，生成i，s，o等文件，掌握及其用法
//#include<stdio.h>
//#include<math.h>
//int is_prime(int input)
//{
//	int i = 0;
//	for ( i = 2; i <= sqrt(input); i++)
//	{
//		if (input % i == 0)
//		{
//			return 0;
//			break;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int input = 0;
//	printf("please input a num:");
//	scanf("%d", &input);
//	int ret = is_prime(input);
//	if (ret == 0)
//	{
//		printf("%d is not a prime\n",input);
//	}
//	else
//	{
//		printf("%d is a prime\n",input);
//	}
//	return 0;
//}