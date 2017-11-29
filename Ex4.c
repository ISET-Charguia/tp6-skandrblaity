#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void inverser(char ch[],char ch2[])
{
   int i;
   char c;
   c='a';
   for(i=0;i<strlen(ch);i++)
   {
     if((ch[i]>='a')&&(ch[i]<='z'))
     {
         c=ch[i]-'a'+'A';
         strcat(ch2,c);
     }
     else if((ch[i]>='A')&&(ch[i]<='Z'))
     {
         c=ch[i]-'A'+'a';
         strcat(ch2,c);
     }
    else
	{
         c=ch[i];
         strcat(ch2,c);
    }
   }
}

int main()
{
   const int n=50;
   char ch1[n],ch2[n]="";
   printf("Donner une chaine :\n");
   gets(ch1);
   inverser(ch1,ch2);
   printf("%s",ch2);
   return 0;
}

