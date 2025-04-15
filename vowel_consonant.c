#include <stdio.h>

void count_vowels_and_consonants(const char *str, int *vowels, int *consonants) {
	*vowels = 0;
	*consonants = 0;
	
	const char *vowel_let = "aiueoAIUEO";
	
	while (*str != '\0') {
		char c = *str;
		int is_vowel = 0;
		
		for (const char *v = vowel_let; *v != '\0'; v++) {
			if (c == *v) {
				is_vowel = 1;
				break;
			}
		}
		
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			if (is_vowel) {
				++(*vowels);
			} else {
				++(*consonants);
			}
		}
		++str;
	}
}

int main() {
	const char *text = "Hello World!";
	int vowels = 0;
	int consonants = 0;
	count_vowels_and_consonants(text, &vowels, &consonants);
	printf("vowels: %d consonants: %d\n", vowels, consonants);
	return 0;
}
