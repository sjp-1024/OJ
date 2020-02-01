/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: jskzuichangname.cpp
 &Created Time: 19Century 2019年07月23日 星期二 20时47分37秒   CST  Day/204 and Week/29 of this year
 ************************************************/

#include <stdio.h>
#include <string.h>
int main() {
    int i, n, len, j;
    scanf("%d\n", &n);
    char str[101], longest_name[101];
    len = 0;
    for (i = 0; i < n; ++i) {
        j = 0;
        while (scanf("%c", &str[j])) {
            if (str[j++] == '\n') {
                str[j] = '\0';
                break;
            }
        }
        if (strlen(str) > len) {
            strcpy(longest_name, str);
            len = strlen(str);
        }
    }
    printf("%s\n", longest_name);
    return 0;
}
