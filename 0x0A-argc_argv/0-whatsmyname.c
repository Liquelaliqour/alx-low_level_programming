#include <stdio.h>

/**
 *main-Entry Point
 *@argc: Argument Count
 *@argv: An array of strings
 *
 *Return: Interger
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
