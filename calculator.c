#include <stdio.h>

int main()
{
	char pause;
	char opt;
	float n1, n2;

	printf("Choose an operator: + - * /\n");
	scanf("\n%c", &opt);

	switch (opt){
		case '+':
			printf("\nWhat number would you like to add?\n");
			scanf("%f", &n1);

			printf("\nWhat other number would you like to add?\n");
			scanf("%f", &n2);

			printf("\n%.3f + %.3f = %.3f\n", n1, n2, n1 + n2);
		break;
		case '-':
			printf("\nWhat number would you like to subtract?\n");
			scanf("%f", &n1);

			printf("\nWhat would you like to subtract?\n");
			scanf("%f", &n2);

			printf("\n%.3f - %.3f = %.3f\n", n1, n2, n1 - n2);
		break;
		case '*':
			printf("\nWhat number would you like to multiply?\n");
			scanf("%f", &n1);

			printf("\nWhat number would you like to multiply?\n");
			scanf("%f", &n2);

			printf("\n%.3f * %.3f = %.3f\n", n1, n2, n1 * n2);
		break;
		case '/':
			printf("\nWhat number would you like to divide?\n");
			scanf("%f", &n1);

			printf("\nWhat would you like to divide?\n");
			scanf("%f", &n2);

			printf("\n%.3f / %.3f = %.3f\n", n1, n2, n1 / n2);
		break;
		default:
			printf("Invalid option!");
		break;
	}

	scanf("%c", &pause);
	return 0;
};
