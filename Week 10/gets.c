#include <stdio.h>

#define MAX_CHAR 50

int main(void) {
	char input_str[MAX_CHAR];

	printf("Enter your English name:\n");

	// gets(input_str);
	// fgets(�Է¹��� ����, ����, �Է� ��Ʈ��)
	fgets(input_str, MAX_CHAR, stdin);

	printf("Name: %s\n", input_str);

	return 0;
}