#include <stdio.h>
/**
 * main - print out sizes of data types in c
 * code by EEC Mastermind
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of a int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
