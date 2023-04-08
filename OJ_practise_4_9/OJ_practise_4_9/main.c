#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include <stdio.h>

//BC99 序列中整数去重

//int main() {
//    int n = 0;
//    int i = 0;
//    int tmp = 0;
//    int k = 0;
//    int arr[1000] = { 0 };
//    scanf("%d", &n);
//    for (i = 0; i < n; i++) {
//        scanf(" %d", &arr[i]);
//    }
//    for (i = 0; i < n; i++) {
//        int j = 0;
//        int flag = 0;
//        for (j = 0; j < i; j++) {
//            if (arr[j] == arr[i]) {
//                flag = 1;
//                break;
//            }
//        }
//        if (flag == 0) {
//            arr[k++] = arr[i];
//        }
//    }
//    for (i = 0; i < k; i++) {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//BC100 有序序列合并

//#include <stdlib.h>
//int comp_int(void* e1, void* e2) {
//    return *(int*)e1 - *(int*)e2;
//}
//
//int main() {
//    int m = 0, n = 0;
//    int arr[2000] = { 0 };
//    int i = 0;
//    scanf("%d %d", &m, &n);
//    for (i = 0; i < m + n; i++) {
//        scanf(" %d", &arr[i]);
//    }
//    qsort(arr, m + n, 4, comp_int);
//    for (i = 0; i < m + n; i++) {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//BC101 班级成绩输入输出

//int main() {
//    double score[5][5] = { 0.0 };
//    double sum[5] = { 0.0 };
//    int i = 0, j = 0;
//    for (i = 0; i < 5; i++) {
//        for (j = 0; j < 5; j++) {
//            scanf(" %lf", &score[i][j]);
//            sum[i] += score[i][j];
//        }
//    }
//    for (i = 0; i < 5; i++) {
//        for (j = 0; j < 5; j++) {
//            printf("%.1lf ", score[i][j]);
//        }
//        printf("%.1lf", sum[i]);
//        printf("\n");
//    }
//
//
//    return 0;
//}

//BC102 矩阵元素定位

//int main() {
//    int n = 0, m = 0;
//    int i = 0, j = 0;
//    int arr[5][5] = { 0 };
//    int r = 0, c = 0;
//    scanf("%d %d", &n, &m);
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++)
//            scanf(" %d", &arr[i][j]);
//    }
//    scanf(" %d %d", &r, &c);
//    printf("%d\n", arr[r - 1][c - 1]);
//    return 0;
//}

//BC103 序列重组矩阵

//int main() {
//    int n = 0, m = 0;
//    int arr[100] = { 0 };
//    int i = 0;
//    scanf("%d %d", &n, &m);
//    for (i = 0; i < n * m; i++)
//        scanf("%d", &arr[i]);
//    for (i = 0; i < n * m; i++) {
//        printf("%d ", arr[i]);
//        if ((i + 1) % m == 0)
//            printf("\n");
//    }
//    return 0;
//}

//BC104 最高身高

//int main() {
//    int n = 0, m = 0;
//    int arr[10][10] = { 0 };
//    int i = 0, j = 0;
//    int r = 0;
//    int c = 0;
//    int max = 0;
//    scanf("%d %d", &n, &m);
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            scanf(" %d", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            if (arr[i][j] > max) {
//                r = i + 1;
//                c = j + 1;
//                max = arr[i][j];
//            }
//        }
//    }
//    printf("%d %d", r, c);
//    return 0;
//}

//BC105 矩阵相等判定

//int main() {
//    int n = 0, m = 0;
//    int i = 0, j = 0;
//    int arr1[10][10] = { 0 };
//    int arr2[10][10] = { 0 };
//    int flag = 1;
//    scanf("%d %d", &n, &m);
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            scanf(" %d", &arr1[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            scanf(" %d", &arr2[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            if (arr1[i][j] != arr2[i][j])
//                flag = 0;
//        }
//    }
//    if (flag)
//        puts("Yes");
//    else
//        puts("No");
//    return 0;
//}

//BC106 上三角矩阵判定


//int main() {
//    int n = 0;
//    int i = 0, j = 0;
//    int flag = 1;
//    int tem = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < n; j++) {
//            scanf(" %d", &tem);
//            if (j < i && tem != 0) {
//                flag = 0;
//                break;
//            }
//        }
//    }
//    if (flag)
//        puts("YES");
//    else
//        puts("NO");
//    return 0;
//}

//BC107 矩阵转置

//int main() {
//    int n = 0, m = 0;
//    int i = 0, j = 0;
//    int arr[10][10] = { 0 };
//    scanf("%d %d", &n, &m);
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            scanf(" %d", &arr[i][j]);
//        }
//    }
//    for (j = 0; j < m; j++) {
//        for (i = 0; i < n; i++)
//            printf("%d ", arr[i][j]);
//        printf("\n");
//    }
//    return 0;
//}

//BC108 矩阵交换

//int main() {
//    int n = 0, m = 0;
//    int i = 0, j = 0;
//    int k = 0;
//    char t = '0';
//    int r = 0, c = 0;
//    int arr[10][10] = { 0 };
//    scanf("%d %d", &n, &m);
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            scanf(" %d", &arr[i][j]);
//        }
//    }
//    scanf(" %d", &k);
//    for (i = 0; i < k; i++) {
//        scanf(" %c", &t);
//        scanf(" %d %d", &r, &c);
//        switch (t) {
//        case 'r':
//            for (j = 0; j < m; j++) {
//                int tem = arr[r - 1][j];
//                arr[r - 1][j] = arr[c - 1][j];
//                arr[c - 1][j] = tem;
//            }
//            break;
//        case 'c':
//            for (j = 0; j < n; j++) {
//                int tem = arr[j][r - 1];
//                arr[j][r - 1] = arr[j][c - 1];
//                arr[j][c - 1] = tem;
//            }
//            break;
//        }
//    }
//
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++)
//            printf("%d ", arr[i][j]);
//        printf("\n");
//    }
//
//    return 0;
//}

//BC109 杨辉三角

//int main() {
//	int n = 0;
//	int i = 0, j = 0;
//	int arr[30][30] = { 0 };
//
//	scanf("%d", &n);
//	
//	for (i = 0; i < n; i++) {
//		arr[i][0] = 1;
//		for (j = 1; j <= i; j++) {
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (i = 0; i < n; i++) {
//		for (j = 0; j <= i; j++) {
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//BC110 井字棋

//int main() {
//    char ch[3][3] = { '0' };
//    int i = 0, j = 0;
//    char ret = 'o';
//    for (i = 0; i < 3; i++) {
//        for (j = 0; j < 3; j++)
//            scanf(" %c", &ch[i][j]);
//    }
//    for (i = 0; i < 3; i++) {
//        if (ch[i][0] == ch[i][1] && ch[i][0] == ch[i][2])
//            ret = ch[i][0];
//        else if (ch[0][i] == ch[1][i] && ch[0][i] == ch[2][i])
//            ret = ch[0][i];
//    }
//    if (ch[0][0] == ch[1][1] && ch[0][0] == ch[2][2])
//        ret = ch[1][1];
//    else if (ch[0][2] == ch[1][1] && ch[2][0] == ch[1][1])
//        ret = ch[1][1];
//
//    switch (ret) {
//    case 'K':
//        puts("KiKi wins!");
//        break;
//    case 'B':
//        puts("BoBo wins!");
//        break;
//    default:
//        puts("No winner!");
//        break;
//    }
//    return 0;
//}

//BC111 小乐乐与进制转换

//void func(int n) {
//    if (n >= 6) {
//        func(n / 6);
//        printf("%d", n % 6);
//    }
//    else {
//        printf("%d", n);
//    }
//}
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    func(n);
//    return 0;
//}

//BC112 小乐乐求和

//int main() {
//    int n = 0;
//    long long sum = 0;
//    int i = 0;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++) {
//        sum += i;
//    }
//    printf("%lld", sum);
//    return 0;
//}

//BC113 小乐乐定闹钟

//int main() {
//    int h = 0, m = 0, k = 0;
//    int x = 0, y = 0;
//    scanf("%d:%d %d", &h, &m, &k);
//    m += k % 60;
//    if (m >= 60) {
//        m %= 60;
//        h++;
//    }
//    h += k / 60;
//    if (h >= 24) {
//        h %= 24;
//    }
//    printf("%02d:%02d", h, m);
//    return 0;
//}

//BC114 小乐乐排电梯

//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d", 4 * (n / 12) + 2);
//    return 0;
//}

//BC115 小乐乐与欧几里得

//int main() {
//    long long n = 0, m = 0;
//    long long x = 0, y = 0;
//    int ret = 0;
//    scanf("%lld %lld", &n, &m);
//    x = (n > m ? n : m);
//    y = m + n - x;
//    ret = x % y;
//    while (ret) {
//        x = y;
//        y = ret;
//        ret = x % y;
//    }
//    printf("%lld", m * n / y + y);
//    return 0;
//}

//BC116 小乐乐改数字

//int main() {
//    int n = 0;
//    int sum = 0;
//    int count = 1;
//    scanf("%d", &n);
//    while (n) {
//        sum += (n % 10 % 2) * count;
//        n /= 10;
//        count *= 10;
//    }
//    printf("%d", sum);
//    return 0;
//}

//BC117 小乐乐走台阶

//int step_num(int n) {
//    if (n == 1)
//        return 1;
//    else if (n == 2)
//        return 2;
//    else {
//        return step_num(n - 1) + step_num(n - 2);
//    }
//}
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d", step_num(n));
//    return 0;
//}

//BC118 小乐乐与序列
//#include <stdlib.h>
//
//int main() {
//	int n = 0;
//	int i = 0;
//	int arr[100001] = { 0 };
//	int tmp = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++) {
//		scanf(" %d", &tmp);
//		arr[tmp] = tmp;
//	}
//	for (i = 1; i <= n; i++) {
//		if (arr[i] != 0)
//			printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//BC119 小乐乐与字符串
//#include <string.h>
//
//int main() {
//	char arr[8000] = { 0 };
//	int i = 0;
//	int len = 0;
//	int c = 0, ch = 0, chn = 0;
//	scanf("%s", arr);
//	len = (int)strlen(arr);
//	for (i = 0; i < len; i++) {
//		if (arr[i] == 'C')
//			c++;
//		else if (arr[i] == 'H')
//			ch += c;
//		else if (arr[i] == 'N')
//			chn += ch;
//	}
//	printf("%d", chn);
//
//	return 0;
//}

//BC123 小乐乐找最大数

//int main() {
//    int i = 0;
//    int tmp = 0;
//    int max = 0;
//    for (i = 0; i < 4; i++) {
//        scanf(" %d", &tmp);
//        if (tmp > max)
//            max = tmp;
//    }
//    printf("%d", max);
//    return 0;
//}

//BC125 小乐乐转换成绩

//int main() {
//    int score = 0;
//    scanf("%d", &score);
//    if (score > 100 || score < 0)
//        putchar('F');
//    else if (score >= 90)
//        putchar('A');
//    else if (score >= 80)
//        putchar('B');
//    else if (score >= 70)
//        putchar('C');
//    else if (score >= 60)
//        putchar('D');
//    else
//        putchar('E');
//
//    return 0;
//}

//BC129 小乐乐计算函数

//int max(int x, int y, int z) {
//	return (x > y ? x : y) > z ? (x > y ? x : y) : z;
//
//}
//
//int main() {
//	int a = 0, b = 0, c = 0;
//	double ret = 0.0;
//	scanf("%d %d %d", &a, &b, &c);
//	ret = (max(a + b, b, c) / (max(a, b + c, c)*1.0 + max(a, b, b + c)));
//	printf("%.2lf", ret);
//
//	return 0;
//}

//BC130 小乐乐查找数字

int main() {
    int n = 0;
    int arr[100] = { 0 };
    int i = 0;
    int x = 0;
    int count = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf(" %d", &arr[i]);
    }
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (arr[i] == x)
            count++;
    }
    printf("%d", count);
    return 0;
}