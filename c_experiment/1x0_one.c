#include <stdio.h>

int main(void)
{
	char operator;
	float num1, num2;

	printf("Input values: ");
	scanf("%f", &num1);
	scanf("%f", &num2);

	printf("Enter any arithmetic operator: ");
	scanf("\n%c", &operator);

	if (operator == '+'){
		printf("%f + %f = %f", num1, num2, num1 + num2);
	}
	else if (operator == '-'){
		printf("%f - %f = %f", num1, num2, num1 - num2);
	}
	else if (operator == '*'){
		printf("%f x %f = %f", num1, num2, num1 * num2);
	}
	else if (operator == '/'){
		printf("%f / %f = %f", num1, num2, num1 / num2);
	}
	else{
		printf("ERROR!");
	}
	printf("\n");
	return(0);
}
