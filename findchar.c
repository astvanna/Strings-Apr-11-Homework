#include <stdio.h>

int find_character(const char *str, char c) {
	for (int i = 0; str[i] != '\0'; ++i) {
		if (str[i] == c) {
			return i;
		}
	}
	return -1;
}

int main() {
	const char *text = "Hello world";
	char target = 'w';
	
	int index = find_character(text, target);
	printf("%d\n", index);
	return 0;
}
