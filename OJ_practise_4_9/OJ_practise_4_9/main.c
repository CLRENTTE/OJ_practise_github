#define _CRT_SECURE_NO_WARNINGS 1

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

int main() {
    int n = 0, m = 0;
    int i = 0, j = 0;
    int arr1[10][10] = { 0 };
    int arr2[10][10] = { 0 };
    int flag = 1;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf(" %d", &arr1[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf(" %d", &arr2[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (arr1[i][j] != arr2[i][j])
                flag = 0;
        }
    }
    if (flag)
        puts("Yes");
    else
        puts("No");
    return 0;
}