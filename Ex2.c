#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char *adresse;
    char verbe[10];
    printf("donnez un verbe\n");
    gets (verbe);
    adresse = verbe + strlen(verbe) - 2;
    if  (strcmp ( adresse, "er" ))
	{
      int i ;
      char *terminaison[6] = { "e", "es", "e", "ons", "ez", "ent" };
      for ( i=0; i<6; i++ )
      {
        strcpy(adresse, terminaison[i]);
        printf("%s\n", verbe );
      }
	}
    else
	{
      int i ;
      char *terminaison[6] = { "is", "is", "it", "issons", "issez", "issent" };
      for ( i=0; i<6; i++ )
      {
        strcpy(adresse, terminaison[i]);
        printf("%s\n", verbe );
      }
	}

    return 0;
}
