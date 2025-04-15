#include <stdio.h>
int string_length(const char *str) {
    int len = 0;
    while (str[len] != '\0') {
        ++len;
    }
    return len;
}

int main() {
    const char *text = "Hello world";
    int len = string_length(text);
    printf("%d\n", len);
    return 0;
}
