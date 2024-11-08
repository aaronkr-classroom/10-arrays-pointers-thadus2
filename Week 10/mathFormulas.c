#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int numCheck(char ch) {
	return (int) ch >= '0' && ch <= '9'; 
}

int checkOp(char op) {
	return op == '+' || op == '-' || op == '*' || op == '/';
}

int arrayToInt(char str[]) {
	int i = 0,
		num = 0;

	while (str[i] != '\0') {
		if (numCheck(str[i])) { // 1
			num = num * 10 + (str[i] - '0');
		}
		else { // 0
			break;
		}
		i++;
	}
	return num;
}

int main(void) {
	char input[100],
		numStr1[50], numStr2[50],
		operator = '\0'; 
	int i = 0,
		j = 0; 

	printf("Enter a simple math forumla (12+34):\n");
	fgets(input, sizeof(input), stdin);

	while (input[i] != '\0' && numCheck(input[i])) {
		numStr1[j++] = input[i++];
	}
	numStr1[j] = '\0';

	if (checkOp(input[i])) { // 1
		operator = input[i++];
	}
	else {
		printf("Error: Invalid operator!\n");
		return 1; 
	}

	j = 0; 
	while (input[i] != '\0' && numCheck(input[i])) {
		numStr2[j++] = input[i++];
	}
	numStr2[j] = '\0';

	int num1 = arrayToInt(numStr1);
	int num2 = arrayToInt(numStr2);
	int result = 0;

	switch (operator) {
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		if (num2 != 0)
			result = num1 / num2; 
		else {
			printf("Error: division by 0!\n");
			return 1; 
		}
		break;
	default:
		printf("Error: Invalid operator. Use +, -, *, /.\n");
		return 1; 
	}

	printf("Result: %d %c %d = %d\n", num1, operator, num2, result);

	return 0; 
}