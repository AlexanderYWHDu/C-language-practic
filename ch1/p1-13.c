#include <stdio.h>
#define MAXLEN 20

int main() {
    int c, len, i;
    int count[MAXLEN];
    
    for (i = 0; i < MAXLEN; i++)
        count[i] = 0;
    
    len = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (len > 0) {
                if (len < MAXLEN)
                    ++count[len];
                len = 0;
            }
        } else {
            ++len;
        }
    }
    

    for (i = 1; i < MAXLEN; i++) {
        printf("%3d | ", i);
        for (int j = 0; j < count[i]; j++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}