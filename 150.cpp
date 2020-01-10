/*************************************************
 &Author:     
 &E-mail: 878491983@qq.com
 &Motto: Believe in yourself.
 &File Name: 150.cpp
 &Created Time: 19Century 2019年08月08日 星期四 22时04分45秒   CST  Day/220 and Week/31 of this year
 &Description:

 ************************************************/


#include <stdio.h>
int main() {
    int matrix[3][3];
    int i, j;
    int n = 3;
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int first, last, temp, offset;
    for (i = 0; i < n / 2; ++i) {
        first = i;
        last = n - 1 - first;
        for (j = first; j < last; ++j) {
            offset = j - first;
            temp = matrix[i][j];
            matrix[i][j] = matrix[last - offset][first];
            matrix[last - offset][first] = matrix[last][last - offset];
            matrix[last][last - offset] = matrix[i + offset][last];
            matrix[i + offset][last] = temp;
       }
    }
    for (i = 0; i < n; ++i) {
        printf("%d", matrix[i][0]);
        for (j = 1; j < n; ++j) {
            printf(" %d", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;

}

