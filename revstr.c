#include <stdio.h>
void reverse_string(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    int left = 0;
    int right = length - 1;

    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

int main() {
    char text[] = "hello world";
    printf("Original string: %s\n", text);

    reverse_string(text);
    printf("Reversed string: %s\n", text);

    return 0;
}
