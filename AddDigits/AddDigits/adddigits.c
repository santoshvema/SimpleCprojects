#include <stdio.h>

int main()
{
	// This function accepts a number and calculates the sum of its digits
	int n, sum = 0, remainder;
	printf("Enter a number\n");
	scanf_s("%d", &n);

	int x = n;
	while (x != 0)
	{
		remainder = x % 10;
		sum = sum + remainder;
		x = x / 10;
	}
	printf("The sum of %d is %d\n", n, sum);
	return 0;
}