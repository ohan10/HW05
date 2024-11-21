#include <stdio.h>

void stringReverse(const char* str) {
    if (*str == '\0') {
        return;
    }
    stringReverse(str + 1);
    putchar(*str);
}

int main() {
    char str[] = "Hello, World!";
    printf("­ì¦r¦ê: %s\n", str);
    printf("¤Ï¦V¦C¦L: ");
    stringReverse(str);
    printf("\n");
    return 0;
}
