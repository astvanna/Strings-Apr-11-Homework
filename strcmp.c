#include <stdio.h>

int compare_strings(const char *str1, const char *str2) {
	while (*str1 && *str2 && *str1 == *str2) {
		str1++;
		str2++;
	}

	if (*str1 == *str2) {
		return 0;    
	} else if (*str1 < *str2) {
		return -1;   
	} else {
		return 1;
	}
}

int main() {
	printf("%d\n", compare_strings("hello", "hello"));
	printf("%d\n", compare_strings("hi", "world"));
	printf("%d\n", compare_strings("everyone", "hi"));
	return 0;
}
