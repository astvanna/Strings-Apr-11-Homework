#include <stdio.h>
void replace_character(char *str, char old_char, char new_char) {
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == old_char) {
			str[i] = new_char;
		}
	}
}

int main() {
	char text[] = "Hello world";
	char old_char = 'o';
	char new_char = '0';

	printf("Old: %s\n", text);
	replace_character(text, old_char, new_char);
	printf("New: %s\n", text);

	return 0;
}
