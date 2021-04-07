#include <stdio.h>
#define FLUSH while(getchar()!='\n');
int main() {
	int a, b;
	char calc;

	printf("Numbers? ");
	scanf("%d %d", &a, &b);
	printf("Calculation? ");
	FLUSH;
	scanf("%c", &calc);

	if (calc == '+')
		printf("Result is %d\n", a + b);
	else if (calc == '-')
		printf("Result is %d\n", a - b);
	else if (calc == '*')
		printf("Result is %d\n", a * b);
	else if (calc == '/')
		printf("Result is %d\n", a / b);

	return 0;
}