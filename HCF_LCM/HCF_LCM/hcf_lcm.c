#include <stdio.h>

/// This program calculates the hcf and lcm of two given numbers
int main()
{
	int num1, num2, x, y, temp, hcf, lcm;
	printf("Enter two numbers\n");
	scanf_s("%d %d", &x, &y);

	num1 = x;
	num2 = y;

	while (num2 != 0) 
	{
		temp = num2;
		num2 = num1 % num2;
		num1 = temp;
		
		//printf("num1=%d num2=%d temp=%d\n", num1, num2, temp);
	}
	hcf = num1;
	lcm = (x*y) / hcf;
	printf("HCF of %d and %d is %d\n", x, y, hcf);
	printf("LCM of %d and %d is %d\n", x, y, lcm);
}