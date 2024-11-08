#include <stdio.h>
#include <conio.h>

int main(void) {
	char input_data;
	int	count = 1;
	printf("Enter chars ('q', 'Q', or ESC to quit):\n");

	// DRY = Don't Repeat Yourself
	while (1) {
		if (_kbhit()) {
			input_data = _getch(); 

			if (input_data == 27 || input_data == 'q' || input_data == 'Q') {
				printf("\nExiting program...\n");
				break;
			}
			rewind(stdin); 
			printf("Input %d: %c\n", count++, input_data);
		}
	}

	return 0;
}