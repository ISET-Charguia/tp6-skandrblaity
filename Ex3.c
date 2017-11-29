#include <stdio.h>
#include <stdlib.h>
#include<string.h>
char remplace(char ch[], char old, char new)
{
	int i;
	char ch2[40];
	strcpy(ch2, "");
	for (i = 0; i < strlen(ch); i++)
	{

		if (ch[i] == old)
		{
			strcat(ch2, new);

		}
		else
		{
			strcat(ch2, ch[i]);

		}
	}
	return *ch2;
}
int main()
{
	char ch[3];
	ch[1]='d';
	ch[2]='o';
	ch[3]='n';
	char old;
	char new;
    old='0';
    new='a'	;
    puts(remplace(ch,old,new));
return 0;
}
