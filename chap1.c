#include <stdio.h>

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 10;

	fahr = lower;

	printf("celsius fahrenheit\n----------------");
	while (celsius <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", celsius, fahrenheit);
		celsius	= celsius + step;
	}
	
	return 0;
}