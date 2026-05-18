#include <stdio.h>

int main() {
    int c, i;
    int count[26];  
    
    for (i = 0; i < 26; i++)
        count[i] = 0;
    
    while ((c = getchar()) != EOF)
        if (c >= 'a' && c <= 'z')
            ++count[c - 'a'];
    
    for (i = 0; i < 26; i++) {
        printf("%c | ", 'a' + i);
        for (int j = 0; j < count[i]; j++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}