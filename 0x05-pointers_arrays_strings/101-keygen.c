#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - program that generates random valid passwords
*Return: Always 0 (success)
*/

int main(void)
{
	char pass[84];
	int index = 0, sum = 0, dffh1, dffh2;

	srand(time(0));

	while (sum < 2772)
	{
		pass[index] = 33 + rand() % 94;
		sum += pass[index++];
	}

	pass[index] = '\0';

	if (sum != 2772)
	{
		dffh1 = (sum - 2772) / 2;
		dffh2 = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
			dffh1++;

		for (index = 0; pass[index]; index++)
		{
			if (pass[index] >= (33 + dffh1))
			{
				pass[index] -= dffh1;
				break;
			}
		}
		for (index = 0; pass[index]; index++)
		{
			if (pass[index] >= (33 + dffh2))
			{
				pass[index] -= dffh2;
				break;
			}
		}
	}
	printf("%s", pass);
	return (0);
}
