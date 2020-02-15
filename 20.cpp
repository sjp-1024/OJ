/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 20.cpp
 &Created Time: 19Century 2019年07月17日 星期三 18时50分21秒   CST  Day/198 and Week/28 of this year
 ************************************************/
bool isValid(char* s) {
    int len = strlen(s), top = -1, flag = 1;
    char *stack = (char *)malloc(sizeof(char) * len);
    while (s[0]) {
        switch (s[0]) {
            case '(':
            case '[':
            case '{': stack[++top] = s[0]; break;
            case ')': flag = (top != -1 && stack[top--] == '('); break;
            case ']': flag = (top != -1 && stack[top--] == '['); break;
            case '}': flag = (top != -1 && stack[top--] == '{'); break;
        }
        if (!flag) break;
        s++;
    }
    free(stack);
    return (flag && top == -1);
}
