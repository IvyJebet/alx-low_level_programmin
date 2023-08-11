#include <stdio.h>
#include <unistd.h>
/**
 * main - Print the Alphabet.
 *
 * Return: Always 0 (Success)
 * */
int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++) {
		putchar("%c", letter);
	}
	printf("\n");
	return 0;
}
