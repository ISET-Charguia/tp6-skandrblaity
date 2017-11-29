#include <stdio.h>
int estseparateur(char c)
{
	char *sep=", ; : ! ?.";
	if (strchr(sep,c) != NULL)
	{
		return 1 ;
	}
	return 0;
}

int nbrmot(char *text)
{
	int nb=0;int i=0;
	if (text!=NULL &&strlen (text)>0)
	{
		while (estseparateur (text[i]))
		{
           i++;
	    }
	for(;i<strlen(text)-1;i++)
	{
		if(estseparateur(text[i])&& ! estseparateur(text[i-1]))
		{
			nb++ ;
		}
	}
	if (!estseparateur(text[strlen(text -2)]))
	{
		nb++;
	}
	return nb;
}
return 0;
}
void majus( char *ch)
{
    int i=1;
    ch[0]=ch[0]-32;
    while (ch[i]!='\0')
    {

        if (ch[i]>'a' && ch[i]<'z' && estseparateur(ch[i]-1))
        {

            i++;
            ch[i]=ch[i]+'A' - 'a';
        }
        i++;
    }
}
int main()
{
	const int max=100;
	char ch[max];
	int n;
	printf("Saisie une chaine");
	fgets(ch,sizeof(ch),stdin);
	n=nbrmot(ch);
	majus(ch);
	printf("Il y a %d mots",n+1);
	printf("\n%s",ch);
	return 0;
}
