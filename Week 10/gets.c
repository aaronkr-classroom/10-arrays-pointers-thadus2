#include <stdio.h>

#define MAX_CHAR 50

int main(void) {
	char input_str[MAX_CHAR];

	printf("Enter your English name:\n");

	// gets(input_str);
	// fgets(입력받을 변수, 길이, 입력 스트림)
	fgets(input_str, MAX_CHAR, stdin);

	printf("Name: %s\n", input_str);

	return 0;
}