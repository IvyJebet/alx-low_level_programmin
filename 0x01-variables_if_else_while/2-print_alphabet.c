#include <stdio.h>
/**
 * main - Print the Alphabet.
 *
 * Return: Always 0 (Success)
 * */
int main(void)
{
	char letter[26] ="abcdefghijklmnopqrstuvwxyz";

	for (letter = 0; letter <= 26; letter++) {
		putchar(letter);
	}
	putchar("\n");
	return 0;
}
