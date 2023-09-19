#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<stdlib.h>
//typedef struct MyStruct
//{
//	int i;
//	int arr[];
//}MyStruct;
//int main()
//{
//	MyStruct* p=(MyStruct*)malloc(sizeof(MyStruct) + 10 * sizeof(int));
//	p->i = 10;
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		p->arr[i] = i;
//	}
//	MyStruct* ptr=(MyStruct*) realloc(p, sizeof(MyStruct) * 10);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//多组输入：输入一个数字，输出“X”形图案，其中图案两条对角线的任何一条的*的个数等于所输入的数字
//int main()
//{
//	int input = 0;
//	printf("input:");
//	while (scanf("%d", &input) != EOF)
//		//当从键盘读取一个整数并将其存储在变量 input 中成功时，就执行循环体中的代码。
//		//scanf 函数会返回成功读取的数据项数，如果读取失败或遇到文件结束符（EOF），则返回 EOF
//	{
//		int i = 0;//行
//		int j = 0;//列
//		for ( i = 0; i < input; i++)
//		{
//			for (j = 0; j < input; j++)
//			{
//				if (i == j || (i+j == input - 1))
//				{
//					printf("*");
//				}
//				else
//				{
//					printf("·");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//公务员考试：键盘输入若干组成绩，每组7个分数（百分制），去掉一个最高分和最低分，输出每组的平均成绩
//输入：7个整数(0-100)代表7个成绩，用空格隔开
//输出：去掉最高分和最低分的平均成绩，小数点保留后两位，每行输出后换行
//99 45 78 67 72 88 60
//73.00
//// 方法二
//int main()
//{
//	int input = 0;
//	int i = 0;
//	int sum = 0;
//	int min = 100;
//	int max = 0;
//	for ( i = 0; i < 7; i++)
//	{
//		scanf("%d", &input);
//		sum += input;
//		if (max < input)
//		{
//			max = input;
//		}
//		if (min > input)
//		{
//			min = input;
//		}
//	}
//	sum -= (min + max);
//	printf("%.2f ", sum/5.0);
//	
//	return 0;
//}
//// 方法一
//int main() {
//    int scores[7];
//    while (scanf("%d %d %d %d %d %d %d", &scores[0], &scores[1], &scores[2], &scores[3], &scores[4], &scores[5], &scores[6]) == 7) {
//        int max = scores[0];
//        int min = scores[0];
//        double sum = 0;
//        for (int i = 0; i < 7; i++) 
//        {
//            if (scores[i] > max) 
//            {
//                max = scores[i];
//            }
//            if (scores[i] < min) 
//            {
//                min = scores[i];
//            }
//            sum += scores[i];
//        }
//        sum -= max + min;
//        printf("%.2f\n", sum / 5.0);
//    }
//    return 0;
//}

//输入年份和月份，输出这个月有多少天
//输入：2008 2
//输出：29
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int arr1[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };//为了使得下标和月份对齐
//	printf("input:");
//	while (scanf("%d %d", &year, &month) != EOF)
//	{
//		int day = arr1[month];
//		if (month = 2)
//		{
//			if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//			{
//				day = arr1[month] + 1;
//			}
//		}
//		printf("%d", day);
//	}
//	return 0;
//}

////有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序
////输入描述:第一行输入一个整数(0<=N<=50)。第二行输入N个升序排列的整数，输入用空格分隔的N个整数。第三行输入想要进行插入的一个整数
////输出描述:输出为一行，N + 1个有序排列的整数
////输入:5
////     1 6 9 22 30
////     8 
////输出:1 6 8 9 22 30
//int main()
//{
//	int num = 0;
//    int input[51] = { 0 };
//	int insert = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d", &num);
//	for ( i = 0; i < num; i++)
//	{
//		scanf("%d ", &input[i]);
//	}
//	scanf("%d", &insert);
//    //方法二
//    for (i = num - 1; i >= 0; i--)
//    {
//        if (input[i] > insert)
//        {
//            input[i + 1] = input[i];
//        }
//        else
//        {
//            input[i + 1] = insert;
//            break;
//        }
//    }
//    //当插入的数据小于所有数据时
//    input[i+1] = insert;
//    /////方法一
//    //// 插入新的数字并保持数组有序
//    //for (i = 0; i < num; i++)
//    //{
//    //    if (insert < input[i])
//    //    {
//    //        for (j = num; j > i; j--)//将数组中的元素向右移动一位，为新插入的元素腾出空间。
//    //        {
//    //            input[j] = input[j - 1];
//    //        }
//    //        input[i] = insert;
//    //        break;
//    //    }
//    //}
//    //// 如果新的数字是最大的，那么它应该被添加到数组的末尾
//    //if (i == num)
//    //{
//    //    input[num] = insert;
//    //}
//    // 打印结果
//    for (i = 0; i <= num; i++)
//    {
//        printf("%d ", input[i]);
//    }
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("C:\\Users\\张艺兴的圈外女友\\source\\repos\\Project5\\test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fputs("hello world", pf);
//	int ret = fgetc(pf);
//	printf("%c\n", ret);
//	 ret = fgetc(pf);
//	printf("%c\n", ret);
//	 ret = fgetc(pf);
//	printf("%c\n", ret);
//	 ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	int ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//	return 0;
//}

//int main()
//{
//	char arr[40] = {0};
//	FILE* pf = fopen("C:\\Users\\张艺兴的圈外女友\\source\\repos\\Project5\\test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//fputs("hello world", pf); 
//	fgets(arr, 5, pf);
//	printf("%s", arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

#include<string.h>
//void add()
//{
//	int a = 0;
//	int b = 0;
//	printf("input:");
//	scanf("%d%d", &a, &b);
//	printf("%d", a + b);
//}
////void fact(int a, int b)
////{
////	printf("%d", a * b);
////}
//int main()
//{
//	char input[50] = {0};
//	printf("input:");
//	scanf("%s", input);
//	if (strcmp(input,"123")==0)
//	{
//		printf("yes\n");
//	}
//	else if (strcmp(input, "add") == 0)
//	{
//		/*printf("input:");
//		scanf("%d%d", &a, &b);
//		add(a,b);*/
//		add();
//	}
//	/*else if (strcmp(input, "fact") == 0)
//	{
//		printf("input:");
//		scanf("%d%d", &a, &b);
//		fact(a, b);
//	}*/
//	else
//	{
//		printf("error\n");
//	}
//	
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	int i = 0;
//	scanf("%d %d", &a, &b);
//	for ( i = a; i <= b; i++)
//	{
//		sum += i;
//	}
//	printf("%d", sum);
//	return 0;
//}
