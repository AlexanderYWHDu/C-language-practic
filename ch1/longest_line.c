#include <stdio.h>
#define MAXLINE 1000

int mygetline(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
    int len;                /* 当前行长度 */
    int max;                /* 目前最长的长度 */
    char line[MAXLINE];     /* 当前读入的行 */
    char longest[MAXLINE];  /* 最长的行 */

    max = 0;
    while ((len = mygetline(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0)
        printf("%s", longest);
    return 0;
}

/* 读一行到 s，返回长度 */
int mygetline(char s[], int lim) {
    int c, i;
    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';    /* 字符串结尾 */
    return i;
}

/* 把 from 复制到 to */
void copy(char to[], char from[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}