#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include <stdio.h>

//BC23 ʱ��ת��

//int main() {
//	int second = 0;
//	int h = 0, m = 0, s = 0;
//	scanf("%d", &second);
//	h = second / 60 / 60;
//	m = second / 60 % 60;
//	s = second % 60;
//	printf("%d %d %d", h, m, s);
//
//	return 0;
//}

//BC24 �ܳɼ���ƽ���ּ���

//int main() {
//	float score[3] = { 0 };
//	float sum = 0.0, ave = 0.0;
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		scanf("%f", &score[i]);
//		sum += score[i];
//	}
//	ave = sum / 3;
//	printf("%.2lf %.2lf", sum, ave);
//
//	return 0;
//}

//BC30 KiKi������

//int main() {
//	int n = 0, h = 0, m = 0;
//	while ((scanf("%d %d %d", &n, &h, &m)) != EOF) {
//		do {
//			n--;
//			m -= h;
//		} while (m > 0);
//		printf("%d\n", n);
//	}
//	return 0;
//}

//BC31 ������Ϣ

//int main() {
//
//	printf("I lost my cellphone!");
//	return 0;
//}

//BC32 ���ѧ����Ϣ

//struct Stu {
//    char name[20];
//    int age;
//    char sex[10];
//};
//
//int main() {
//    struct Stu s1 = { "Jack",18,"man" };
//    printf("%s    %s    %s\n", "Name", "Age", "Gender");
//    int n = 21;
//    while (n--) {
//        printf("-");
//    }
//    printf("\n");
//    printf("%-s    %-d     %-s", s1.name, s1.age, s1.sex);
//
//    return 0;
//}

//BC33 ����ƽ���ɼ�

//int main() {
//	int arr[5] = { 0 };
//	int i = 0;
//	double sum = 0.0;
//	for (i = 0; i < 5; i++) {
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//	}
//	printf("%.1lf", sum / 5);
//
//	return 0;
//}

//BC34 ����A+B

//int main() {
//	int a = 0, b = 0;
//	scanf("%x %o", &a, &b);
//	printf("%d\n", a + b);
//
//	return 0;
//}

//BC37 ����

//int main() {
//	double money = 0.0, cut = 0.0;
//	int month = 0, date = 0;
//	int flag = 0;
//	double ret = 0.0;
//	scanf("%lf %d %d %d", &money, &month, &date, &flag);
//	if (11 == month && 11 == date) {
//		cut = 0.7;
//	}
//	else if(12==month&&12==date) {
//		cut = 0.6;
//	}
//	ret = money * cut - flag * 50;
//	printf("%.2lf\n", ret > 0 ? ret : 0);
//
//	return 0;
//}

// BC39 ����ǰ����

//int main() {
//	int n = 0;
//	int score[5] = { 0 };
//	int i = 0;
//	int ret = 0;
//	scanf("%d\n", &n);
//
//	for (i = 0; i < n; i++) {
//		scanf("%d", &ret);
//		int j = 0;
//		for (j = 0; j < 5; j++) {//���������5��Ԫ�أ����ret��������һ������ret����
//			if (ret > score[j]) {
//				int k = 4;
//				for (k = 4; k > j; k--) {
//					score[k] = score[k-1];
//				}
//				score[j] = ret;
//				break;
//				
//			}
//		}
//	}
//	for (i = 0; i < 5; i++) {
//		printf("%d ", score[i]);//��ӡ������
//	}
//	return 0;
//}

//int main() {//ð������
//	int n = 0;
//	int score[40] = { 0 };
//	int i = 0;
//	scanf("%d\n", &n);
//	for (i = 0; i < n; i++) {
//		scanf("%d", &score[i]);
//	}
//	for (i = 0; i < n - 1; i++) {
//		int j = 0;
//		for (j = 0; j < n - 1-i;j++) {
//			if (score[j] < score[j + 1]) {
//				int tem = score[j];
//				score[j] = score[j + 1];
//				score[j + 1] = tem;
//			}
//		}
//	}
//	for (i = 0; i < 5; i++)
//		printf("%d ", score[i]);
//
//	return 0;
//}

//BC40 ��ѡ�糤

//int main() {
//	char ch = 0;
//	int a = 0, b = 0;
//	while ((ch = getchar()) != '0') {
//		if (ch == 'A')
//			a++;
//		else if (ch == 'B')
//			b++;
//	}
//	if (a > b)
//		printf("A");
//	else if (a < b)
//		printf("B");
//	else
//		printf("E");
//
//	return 0;
//}

//BC41 ���������

//int main() {
//	int n = 0;
//	while ((scanf("%d", &n)) != EOF) {
//		if (n >= 140)
//			printf("Genius");
//	}
//
//	return 0;
//}

//BC42 �����ɼ�

//int main() {
//	int score = 0;
//	while (~(scanf("%d", &score))) {
//		if (score >= 90 && score <= 100)
//			printf("Perfect");
//	}
//	return 0;
//}

//BC43 �������

//int main() {
//	int score = 0;
//	while (~scanf("%d", &score)) {
//		if (score >= 60)
//			puts("Pass");
//		else if (score < 60)
//			puts("Fail");
//	}
//
//	return 0;
//}

//BC44 �ж�������ż��

//int main() {
//	int n = 0;
//	while (~scanf("%d", &n)) {
//		if (n % 2)
//			puts("Odd");
//		else
//			puts("Even");
//	}
//
//	return 0;
//}

//BC45 ��߷���

//int main() {
//	int score[3] = { 0 };
//	int ret = 0;
//	while (~scanf("%d %d %d", &score[0], &score[1], &score[2])) {
//		int Max = 0;
//		int j = 0;
//		for (j = 0; j < 3; j++) {
//			if (score[j] > Max)
//				Max = score[j];
//		}
//		printf("%d\n", Max);
//	}
//
//	return 0;
//}

//BC46 �ж���Ԫ�����Ǹ���

//int main() {
//	int Vowel[] = { 'A','E','I','O','U','a','e','i','o','u' };
//	int sz = sizeof(Vowel) / sizeof(Vowel[0]);
//	char ch = 0;
//	while (~(scanf(" %c",&ch))) {//%c֮ǰ��һ���ո������ǰ�����еĿհ��ַ�
//		int i = 0;
//		int flag = 0;
//		for (i = 0; i < sz; i++) {
//			if (ch == Vowel[i])//��strchr����Ҳ����
//				flag = 1;
//		}
//		if (flag)
//			printf("Vowel\n");
//		else
//			printf("Consonant\n");
//	}
//
//	return 0;
//}

//BC47 �ж��ǲ�����ĸ
//#include <ctype.h>
//
//int main() {
//	char ch = 0;
//	while (~(ch = getchar())) {
//		if (isalpha(ch))
//			printf("%c is an alphabet.\n", ch);
//		else
//			printf("%c is not an alphabet.\n", ch);
//		getchar();
//	}
//
//	return 0;
//}

//BC48 ��ĸ��Сдת��

//int main() {
//	char ch = 0;
//	while (~(scanf(" %c", &ch))) {
//		if (ch >= 'A' && ch <= 'Z')
//			printf("%c\n", ch+32);
//		else
//			printf("%c\n", ch-32);
//
//	}
//	return 0;
//}

//BC50 ���㵥λ��Ծ����

//int main() {
//	int n = 0;
//	while (scanf("%d", &n) != EOF) {
//		if (n > 0)
//			printf("%d\n", 1);
//		else if (n == 0)
//			printf("%.1f\n", 0.5f);
//		else
//			printf("%d", 0);
//	}
//
//	return 0;
//}

//BC51 �������ж�

//int main() {
//	int a = 0, b=0, c = 0;
//	while (~scanf("%d %d %d", &a, &b, &c)) {
//		if ((a + b > c) && (a + c > b) && (b + c > a)) {
//			if (a == b || a == c || b == c) {
//				if (a == b && a == c)
//					puts("Equilateral triangle!\n");
//				else
//					puts("Isosceles triangle!");
//			}
//			else
//				puts("Ordinary triangle!");
//		}else
//			puts("Not a triangle!");
//	}
//	return 0;
//}

//BC52 �����������ݳ̶�

//int main() {
//	int weight = 0;
//	int high = 0;
//	double bmi = 0.0;
//	while (~scanf("%d %d", &weight, &high)) {
//		bmi = weight / (high * high / 10000.0);
//		if (bmi < 18.5)
//			puts("Underweight");
//		else if (bmi <= 23.9)
//			puts("Normal");
//		else if (bmi <= 27.9)
//			puts("Overweight");
//		else
//			puts("Obese");
//	}
//	return 0;
//}

//BC53 ����һԪ���η���

//#include <math.h>
//
//int main() {
//	double a = 0.0, b = 0.0, c = 0.0;
//	while (~scanf("%lf %lf %lf", &a, &b, &c)) {
//
//		if (0 == a)
//			printf("Not quadratic equation");
//		else {
//			double E = b * b - 4 * a * c;
//			if (0.0 == E)
//				printf("x1=x2=%.2lf", ((-b) / 2 / a)+0);
//			else if (E > 0.0) {
//				printf("x1=%.2lf;x2=%.2lf", (-b - sqrt(E)) / 2 / a, (-b + sqrt(E)) / 2 / a);
//			}
//			else {
//				double s = -b / 2 / a;
//				double x = sqrt(-E) / 2 / a;
//				printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi", s, x, s, x);
//			}
//		}
//
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//	double a = 0.0;
//	printf("%.2lf\n", -a);
//	return 0;
//}

//BC54 ����·�����

//int main() {
//	int year = 0;
//	int month = 0;
//	int BigMonth[] = { 1,3,5,7,8,10,12 };
//	while (~scanf("%d %d", &year, &month)) {
//		int date = 0;
//		int i = 0;
//		for (i = 0; i < 7; i++) {
//			if (month == BigMonth[i])
//				break;
//		}
//		if (i != 7)
//			printf("%d\n", 31);
//		else {
//			if (month != 2)
//				printf("%d\n", 30);
//			else {
//				if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)))
//					printf("%d\n", 29);
//				else
//					printf("%d\n", 28);
//			}
//		}
//	}
//	return 0;
//}

//BC55 �򵥼�����

//int main() {
//	double s1 = 0.0, s2 = 0.0;
//	char oper = '0';
//	while (~scanf("%lf%c%lf",&s1,&oper,&s2)) {
//		if (oper == '+') {
//			printf("%.4lf+%.4lf=%.4lf\n", s1, s2, s1 + s2);
//		}
//		else if (oper == '-') {
//			printf("%.4lf-%.4lf=%.4lf\n", s1, s2, s1 - s2);
//		}
//		else if (oper == '*') {
//			printf("%.4lf*%.4lf=%.4lf\n", s1, s2, s1 * s2);
//		}
//		else if (oper == '/') {
//			if (s2 == 0.0)
//				printf("Wrong!Division by zero!\n");
//			else {
//				printf("%.4lf/%.4lf=%.4lf\n", s1, s2, s1 / s2);
//			}
//		}
//		else
//			printf("Invalid operation!\n");
//	}
//
//	return 0;
//}

//BC56 �߶�ͼ��

//int main() {
//	int n = 0;
//	while (~scanf("%d", &n)) {
//		int i = 0;
//		for (i = 0; i < n; i++)
//			printf("*");
//		printf("\n");
//	}
//	
//	return 0;
//}

//BC57 ������ͼ��

//int main() {
//	int n = 0;
//	while (~scanf("%d", &n)) {
//		int i = 0, j = 0;
//		for (i = 0; i < n; i++) {
//			for (j = 0; j < n; j++)
//				printf("* ");
//			printf("\n");
//		}
//	}
//	return 0;
//}

//BC58 ֱ��������ͼ��

//int main() {
//    int n = 0;
//    while (~scanf("%d", &n)) {
//        int i = 0, j = 0;
//        for (i = 0; i < n; i++) {
//            for (j = 0; j <= i; j++)
//                printf("* ");
//            printf("\n");
//        }
//    }
//    return 0;
//}

//BC59 ��תֱ��������ͼ��

//int main() {
//    int n = 0;
//    while (~scanf("%d", &n)) {
//        int i = 0, j = 0;
//        for (i = 0; i < n; i++) {
//            for (j = 0; j < n - i; j++)
//                printf("* ");
//            printf("\n");
//        }
//    }
//    return 0;
//}

//BC60 ���ո�ֱ��������ͼ��

//int main() {
//    int n = 0;
//    while (~scanf("%d", &n)) {
//        int i = 0, j = 0;
//        for (i = 0; i < n; i++) {
//            for (j = 0; j < 2 * n - 2 - 2 * i; j++)
//                printf(" ");
//            for (j = 0; j < i + 1; j++)
//                printf("* ");
//            printf("\n");
//        }
//    }
//    return 0;
//}

//BC61 ������ͼ��

//int main() {
//    int n = 0;
//    while (~scanf("%d", &n)) {
//        int i = 0, j = 0;
//        for (i = 0; i < n; i++) {
//            for (j = 0; j < n - i - 1; j++)
//                printf(" ");
//            for (j = 0; j <= i; j++)
//                printf("* ");
//            printf("\n");
//        }
//    }
//    return 0;
//}

//BC62 ��ת������ͼ��

//int main() {
//    int n = 0;
//    while (~scanf("%d", &n)) {
//        int i = 0, j = 0;
//        for (i = 0; i < n; i++) {
//            for (j = 0; j < i; j++)
//                printf(" ");
//            for (j = 0; j < n - i; j++)
//                printf("* ");
//            printf("\n");
//        }
//
//    }
//    return 0;
//}

//BC63 ����ͼ��

//int main() {
//    int n = 0;
//    while (~scanf("%d", &n)) {
//        int i = 0, j = 0;
//        for (i = 0; i < n + 1; i++) {
//            for (j = 0; j < n - i; j++)
//                printf(" ");
//            for (j = 0; j < i + 1; j++)
//                printf("* ");
//            printf("\n");
//        }
//        for (i = 0; i < n; i++) {
//            for (j = 0; j < i + 1; j++)
//                printf(" ");
//            for (j = 0; j < n - i; j++)
//                printf("* ");
//            printf("\n");
//        }
//    }
//    return 0;
//}

//BC64 K��ͼ��

//int main() {
//    int n = 0;
//    while (~scanf("%d", &n)) {
//        int i = 0, j = 0;
//        for (i = 0; i < n + 1; i++) {
//            for (j = 0; j < n + 1 - i; j++)
//                printf("* ");
//            printf("\n");
//        }
//        for (i = 0; i < n; i++) {
//            for (j = 0; j < 2 + i; j++)
//                printf("* ");
//            printf("\n");
//        }
//    }
//
//    return 0;
//}

//BC65 ����ͼ��

//int main() {
//    int n = 0;
//    while (~scanf("%d", &n)) {
//        int i = 0, j = 0;
//        for (i = 0; i < n + 1; i++) {
//            for (j = 0; j < 2 * n - 2 * i; j++)
//                printf(" ");
//            for (j = 0; j < i + 1; j++)
//                printf("*");
//            printf("\n");
//        }
//        for (i = 0; i < n; i++) {
//            for (j = 0; j < 2 * i + 2; j++)
//                printf(" ");
//            for (j = 0; j < n - i; j++)
//                printf("*");
//            printf("\n");
//        }
//
//    }
//    return 0;
//}

//BC66 ��б����ͼ��

//int main() {
//    int n = 0;
//    while (~scanf("%d", &n)) {
//        int i = 0, j = 0;
//        for (i = 0; i < n; i++) {
//            for (j = 0; j < i; j++)
//                printf(" ");
//            printf("*\n");
//        }
//    }
//    return 0;
//}

//BC67 ��б����ͼ��

//int main() {
//    int n = 0;
//    while (~scanf("%d", &n)) {
//        int i = 0, j = 0;
//        for (i = 0; i < n; i++) {
//            for (j = 0; j < n ; j++) {
//                if (i + j == n-1)
//                    printf("*");
//                else
//                    printf(" ");
//                
//            }
//            printf("\n");
//        }
//
//    }
//    return 0;
//}

//BC68 X��ͼ��

//int main() {
//    int n = 0;
//    while (~scanf("%d", &n)) {
//        int i = 0, j = 0;
//        for (i = 0; i < n; i++) {
//            for (j = 0; j < n; j++) {
//                if (i == j || i + j == n - 1)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//
//        }
//    }
//    return 0;
//}

//BC69 ����������ͼ��

//int main() {
//    int n = 0;
//    while (~scanf("%d", &n)) {
//        int i = 0, j = 0;
//        for (i = 0; i < n; i++) {
//            for (j = 0; j < n; j++) {
//                if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
//                    printf("* ");
//                else
//                    printf("  ");
//            }
//            printf("\n");
//        }
//
//    }
//    return 0;
//}

//BC70 ����������ͼ��

//int main() {
//    int n = 0;
//    while (~scanf("%d", &n)) {
//        int i = 0, j = 0;
//        for (i = 0; i < n; i++) {
//            for (j = 0; j < n; j++) {
//                if (j == 0 || i == n - 1 || i == j)
//                    printf("* ");
//                else
//                    printf("  ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//BC72 ƽ�����

//int main() {
//    double sum = 0.0;
//    double ret = 0.0;
//    int i = 0;
//    for (i = 0; i < 5; i++) {
//        scanf(" %lf", &ret);
//        sum += ret;
//    }
//    printf("%.2lf\n", sum / 5);
//    return 0;
//}

//BC74 HTTP״̬��

//int main() {
//    int HTTP = 0;
//    while (~scanf("%d", &HTTP)) {
//        switch (HTTP) {
//        case 200:
//            puts("OK");
//            break;
//        case 202:
//            puts("Accepted");
//            break;
//        case 400:
//            puts("Bad Request");
//            break;
//        case 403:
//            puts("Forbidden");
//            break;
//        case 404:
//            puts("Not Found");
//            break;
//        case 500:
//            puts("Internal Server Error");
//            break;
//        case 502:
//            puts("Bad Gateway");
//            break;
//        }
//    }
//    return 0;
//}

//BC75 ����������

//int main() {
//    int n = 0;
//    while (~scanf("%d", &n)) {
//        int i = 0, j = 0;
//        for (i = 0; i < n; i++) {
//            for (j = 0; j < n; j++) {
//                if (j <= i)
//                    printf("%d ", j + 1);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//BC76 ����Ա����

//int main() {
//	int score = 0;
//	int ret = 0;
//	while (~scanf("%d", &ret)) {
//		int i = 0;
//		int sum = ret;
//		int max = ret;
//		int min = ret;
//		for (i = 0; i < 6; i++) {
//			scanf("%d", &ret);
//			sum += ret;
//			if (ret > max)
//				max = ret;
//			if (ret < min)
//				min = ret;
//		}
//		printf("%.2lf\n", (double)((sum - max - min) / 5.0));
//	}
//	return 0;
//}

//BC77 �������в���һ����

//int com_int(void* e1, void* e2) {
//    return (*(int*)e1 - *(int*)e2);
//}
//
//int main() {
//    int n = 0;
//    int arr[50] = { 0 };
//    int new = 0;
//    int i = 0, j = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &arr[n]);
//    qsort(arr, n + 1, 4, com_int);
//    for (i = 0; i <= n; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}

//BC78 ɸѡ��������

//int main() {
//    int n = 0;
//    while (~scanf("%d", &n)) {
//        int i = 0;
//        int count = 0;
//        int arr[101] = { 0 };
//        for (i = 2; i <= n; i++)
//            arr[i] = i;
//        for (i = 2; i <= n; i++) {
//            int j = 0;
//            if (arr[i] != 0) {
//                for (j = i + 1; j <= n; j++) {
//                    if (arr[j] % i == 0 && arr[j] != 0) {
//                        arr[j] = 0;
//                        count++;
//                    }
//                }
//            }
//        }
//        for (i = 2; i <= n; i++) {
//            if (arr[i] != 0) {
//                printf("%d ", arr[i]);
//            }
//
//        }
//        printf("\n%d\n", count);
//
//    }
//    return 0;
//}

//BC79 ͼ�����ƶ�

//int main() {
//	int m = 0, n = 0;
//	scanf("%d %d\n", &m, &n);
//	int arr1[100][100] = { 0 };
//	int arr2[100][100] = { 0 };
//	int i = 0, j = 0, count = 0;
//	for (i = 0; i < m; i++) {
//		for (j = 0; j < n; j++) {
//			scanf(" %d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++) {
//		for (j = 0; j < n; j++) {
//			scanf(" %d", &arr2[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++) {
//		for (j = 0; j < n; j++) {
//			if (arr1[i][j] == arr2[i][j]) {
//				count++;
//			}
//		}
//	}
//	printf("%.2lf\n", count * 100.0 / (m * n * 1.0));
//
//	return 0;
//}

//BC80 ��¼��֤

//#include <string.h>
//int main() {
//    char str1[100];
//    char str2[100];
//    while (~scanf("%s %s", &str1, &str2)) {
//        if (strcmp(str1, "admin") == 0 && strcmp(str2, "admin") == 0)
//            puts("Login Success!");
//        else
//            puts("Login Fail!");
//
//    }
//    return 0;
//}

//BC85 ��������9����

//int main() {
//    int year = 1;
//    int count = 0;
//    while (year <= 2019) {
//        int q = year / 1000;
//        int b = year / 100 % 10;
//        int s = year / 10 % 10;
//        int g = year % 10;
//        if (9 == q || 9 == b || 9 == s || 9 == g)
//            count++;
//        year++;
//    }
//    printf("%d", count);
//    return 0;
//}

//BC86 ��żͳ��

//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    if (n % 2)
//        printf("%d %d", n / 2 + 1, n / 2);
//    else
//        printf("%d %d", n / 2, n / 2);
//    return 0;
//}

//BC87 ͳ�Ƴɼ�
//
//int main() {
//    int n = 0;
//    double max = 0.0;
//    double min = 100.0;
//    int i = 0;
//    double sum = 0.0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++) {
//        double ret = 0.0;
//        scanf("%lf", &ret);
//        if (ret > max)
//            max = ret;
//        if (ret < min)
//            min = ret;
//        sum += ret;
//    }
//    printf("%.2lf %.2lf %.2lf", max, min, sum / n);
//
//    return 0;
//}

//BC89 ������֤

//int main() {
//    char ch1[100];
//    char ch2[100];
//    scanf("%s %s", &ch1, &ch2);
//    if (strcmp(ch1, ch2) == 0)
//        printf("same");
//    else
//        printf("different");
//    return 0;
//}

//BC90 �������

//int main() {
//    int arr[10][10] = { 0 };
//    int n = 0, m = 0;
//    int i = 0, j = 0;
//    int sum = 0;
//    scanf("%d %d", &n, &m);
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            scanf(" %d", &arr[i][j]);
//            if (arr[i][j] > 0)
//                sum += arr[i][j];
//        }
//    }
//    printf("%d", sum);
//    return 0;
//}

//BC92 �������

//int main() {
//    int arr[10] = { 0 };
//    int i = 0;
//    for (i = 0; i < 10; i++)
//        scanf("%d", &arr[i]);
//    for (i = 0; i < 10; i++)
//        printf("%d ", arr[9 - i]);
//    return 0;
//}

//BC93 ͳ��������������

//int main() {
//    int arr[10] = { 0 };
//    int i = 0;
//    int pos = 0;
//    int neg = 0;
//    for (i = 0; i < 10; i++) {
//        scanf("%d", &arr[i]);
//        if (arr[i] > 0)
//            pos++;
//        if (arr[i] < 0)
//            neg++;
//    }
//    printf("positive:%d\n", pos);
//    printf("negative:%d\n", neg);
//
//    return 0;
//}

//BC94 N����֮��

//int main() {
//    int n = 0;
//    int sum = 0;
//    int i = 0;
//    int ret = 0;
//
//    scanf("%d", &n);
//    for (i = 0; i < n; i++) {
//        scanf(" %d", &ret);
//        sum += ret;
//    }
//    printf("%d", sum);
//    return 0;
//}

//BC95 ��߷�����ͷ�֮��

//int main() {
//    int n = 0;
//    int i = 0;
//    int max = 0;
//    int min = 100;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++) {
//        int tmp = 0;
//        scanf("%d", &tmp);
//        if (tmp > max)
//            max = tmp;
//        if (tmp < min)
//            min = tmp;
//    }
//    printf("%d", max - min);
//    return 0;
//}

//BC96 ���������ж�

//int main() {
//    int n = 0;
//    int arr[50] = { 0 };
//    int i = 0;
//    int flag = 1;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++) {
//        scanf(" %d", &arr[i]);
//    }
//
//    if (arr[n - 1] - arr[0] > 0) {
//        for (i = 0; i < n - 1; i++) {
//            if (arr[i + 1] - arr[i] < 0) {
//                flag = 0;
//                break;
//            }
//        }
//    }
//    else if (arr[n - 1] - arr[0] < 0) {
//        for (i = 0; i < n - 1; i++) {
//            if (arr[i + 1] - arr[i] > 0) {
//                flag = 0;
//                break;
//            }
//        }
//    }
//    else {
//        for (i = 0; i < n; i++) {
//            if (arr[i] != arr[0]) {
//                flag = 0;
//                break;
//            }
//        }
//    }
//    if (flag)
//        printf("sorted");
//    else
//        printf("unsorted");
//    return 0;
//}

//BC98 ������ɾ��ָ������

//int main() {
//    int n = 0;
//    int arr[50] = { 0 };
//    int i = 0;
//    int del = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++) {
//        scanf(" %d", &arr[i]);
//    }
//    scanf(" %d", &del);
//    int flag = 0;
//    do {
//        flag = 0;
//        for (i = 0; i < n; i++) {
//            if (arr[i] == del) {
//                flag = 1;
//                int j = 0;
//                for (j = i; j < n - 1; j++) {
//                    arr[j] = arr[j + 1];
//                }
//                n--;
//            }
//        }
//    } while (flag);
//    for (i = 0; i < n; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}

//