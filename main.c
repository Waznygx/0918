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

//�������룺����һ�����֣������X����ͼ��������ͼ�������Խ��ߵ��κ�һ����*�ĸ������������������
//int main()
//{
//	int input = 0;
//	printf("input:");
//	while (scanf("%d", &input) != EOF)
//		//���Ӽ��̶�ȡһ������������洢�ڱ��� input �гɹ�ʱ����ִ��ѭ�����еĴ��롣
//		//scanf �����᷵�سɹ���ȡ�����������������ȡʧ�ܻ������ļ���������EOF�����򷵻� EOF
//	{
//		int i = 0;//��
//		int j = 0;//��
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
//					printf("��");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//����Ա���ԣ���������������ɼ���ÿ��7���������ٷ��ƣ���ȥ��һ����߷ֺ���ͷ֣����ÿ���ƽ���ɼ�
//���룺7������(0-100)����7���ɼ����ÿո����
//�����ȥ����߷ֺ���ͷֵ�ƽ���ɼ���С���㱣������λ��ÿ���������
//99 45 78 67 72 88 60
//73.00
//// ������
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
//// ����һ
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

//������ݺ��·ݣ����������ж�����
//���룺2008 2
//�����29
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int arr1[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };//Ϊ��ʹ���±���·ݶ���
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

////��һ�������������У���С�������򣬽�һ��������������뵽�����У���֤����������������Ȼ������
////��������:��һ������һ������(0<=N<=50)���ڶ�������N���������е������������ÿո�ָ���N��������������������Ҫ���в����һ������
////�������:���Ϊһ�У�N + 1���������е�����
////����:5
////     1 6 9 22 30
////     8 
////���:1 6 8 9 22 30
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
//    //������
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
//    //�����������С����������ʱ
//    input[i+1] = insert;
//    /////����һ
//    //// �����µ����ֲ�������������
//    //for (i = 0; i < num; i++)
//    //{
//    //    if (insert < input[i])
//    //    {
//    //        for (j = num; j > i; j--)//�������е�Ԫ�������ƶ�һλ��Ϊ�²����Ԫ���ڳ��ռ䡣
//    //        {
//    //            input[j] = input[j - 1];
//    //        }
//    //        input[i] = insert;
//    //        break;
//    //    }
//    //}
//    //// ����µ����������ģ���ô��Ӧ�ñ���ӵ������ĩβ
//    //if (i == num)
//    //{
//    //    input[num] = insert;
//    //}
//    // ��ӡ���
//    for (i = 0; i <= num; i++)
//    {
//        printf("%d ", input[i]);
//    }
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("C:\\Users\\�����˵�Ȧ��Ů��\\source\\repos\\Project5\\test.txt", "r");
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
//	FILE* pf = fopen("C:\\Users\\�����˵�Ȧ��Ů��\\source\\repos\\Project5\\test.txt", "r");
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
