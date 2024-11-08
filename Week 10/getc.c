#include <stdio.h>

int main(void) {
	char ch;

	printf("Enter char to read (@ to stop):\n");

	// while((ch = getc(filename)) != 'EOF')
	while ((ch = getc(stdin)) != '@') {

		putchar(ch);
	}

	printf("\nEnd of input.\n");

	return 0;
}