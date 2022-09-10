#include <stdio.h>

/**
* main - prints the string in the put function
*
* Description: using the main function
* this program "prints the size of various types on the computer."
* Return: 0
*/
int main(void)
	{
		printf("size of a char: %d byte(s)\n", sizeof(char));
                printf("size of a int: %d byte(s)\n", sizeof(int));
		printf("size of a long: %d byte(s)\n", sizeof(long));
		printf("size of a long long int: %d byte(s)\n", sizeof(long long int));
		printf("size of a float: %d byte(s)\n", sizeof(float));
			return (0);
	}

