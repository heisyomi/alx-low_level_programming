#include <stdio.h>
/**
 * main-prints the size of various types on the computer
 * Return:returns the value zero if exit properly, non-zero otherwise
 */
int main(void)
{
	printf("Size of a char: %Id byte(s)\n", sizeof(char));
	printf("size of an int: %Id byte(s)\n", sizeof(int));
	printf("size of a long int: %Id byte(s)\n", sizeof(long int));
	printf("size of a long long int: %Id byte(s)\n", sizeof(long long int);
	printf("size of a float: %Id bytes(s)\n", sizeof(float));
	return (0);
}
