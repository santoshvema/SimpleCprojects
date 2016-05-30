#include <stdio.h>

int main()
{
	// This function accepts a number and calculates the sum of its digits
	int n, result;
	printf("Enter a number\n");
	scanf_s("%d", &n);

	result = add_digits(n);
	printf("The sum of %d is %d\n", n, result);
	return 0;
}

int add_digits(int x)
{
	static int sum = 0;
	if (x == 0)
	{
		return 0;
	}
	sum = x%10 + add_digits(x / 10);
	return sum;
}