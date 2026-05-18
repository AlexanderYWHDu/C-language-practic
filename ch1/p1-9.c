#include <stdio.h>
int main() {
    int c, last = 0;
    while((c = getchar())!= EOF){
        if (c == ' ' && last == ' ')
            ;
        else
            putchar(c);
        last = c;
    }
    return 0;
}