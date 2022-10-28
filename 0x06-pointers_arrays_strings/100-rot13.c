#include "main.h"

/**
  * rot13 - encode a string using rot13
  * @s: String
  * Return: char
  */

char *rot13(char *s)
{
	int y = 0, m;

	char alphabet[] = "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + y) != '0')
	{
		for (m = 0; m < 52; m++)
		{
			if (*(s + y) == alphabet[m])
			{
				(*(s + y) = rot13[m])
					break;
			}
		}

		y++;
	}

	return (s);
}
