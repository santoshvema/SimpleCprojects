#include <stdio.h>

int main()
{
	char ch;
	printf("Enter a  Character\n");
	scanf_s("%c", &ch);

	//// Checking vowel using if statement
	//if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
	//	printf("%c is a vowel\n", ch);
	//else
	//	printf("%c is a not a vowel\n", ch);

	// Checking vowel using switch case
	switch (ch)
	{
	case 'a': case 'A':
	case 'e': case 'E':
	case 'i': case 'I':
	case 'o': case 'O':
	case 'u': case 'U':
		printf("%c is a vowel\n", ch);
		break;
	default:
		printf("%c is a not a vowel\n", ch);
	}
	return 0;
}