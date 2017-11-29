#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int occurences(char ch1[], char ch2[])
{
	int i = 0, occ = 0;
	int j, k;
	while (ch1[i] != '\0')
	{

		if (ch1[i] == ch2[0])
		{

			j = i;
			k = 0;
			while (ch2[k] != '\0' && ch1[j] == ch2[k])
			{
				k++;
				j++;
			}
			if (k == strlen(ch2)) {
				occ++;
			}
		}
		i++;
	}
	return occ;
}

int main()
{
	char ch1[30];
	char ch2[15];
	do
	{
		printf("donner la premier chaine:\n");
		gets(ch1);
		printf("donner la deuxiéme chaine:\n");
		gets(ch2);

	}while (strlen(ch1) < strlen(ch2));
	printf("le nombre d'occurences est: %d",occurences(ch1, ch2));
	return 0;
}

