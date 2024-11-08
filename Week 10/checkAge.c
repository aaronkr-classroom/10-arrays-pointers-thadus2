#include <stdio.h>

int main(void) {
	int age = 0;
	while (1) {
		printf("Input age: ");
		if (!scanf_s("%d", &age)) {
			rewind(stdin); 
			printf("Only digits allowed!\n");
		}
		else {
			if (age > 0 && age <= 130) {
				break;
			}
			else {
				printf("Incorrect age! Try again!\n");
			}
		}
	}
	printf("Your age: %d\n", age);

	return 0;
}