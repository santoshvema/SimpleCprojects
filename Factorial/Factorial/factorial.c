#include <stdio.h>

/// This function calculates the factorial of a given number
int main()
{
	int n, fact = 1;

	printf("Enter the number to find its factorial\n");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		fact = fact*i;
	}
	printf("The factorial of %d is %d\n", n, fact);
	return 0;
}