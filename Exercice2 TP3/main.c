#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[43], inversech[43];
    int j, t, i;

    printf("Entrez la chaine de caractere : ");
    gets(ch);

    j=0;
    t=strlen(ch);
    inversech[t]='\0';

    for(i=t-1;i>=0;i--)
    {
        inversech[j++]=ch[i];
    }
    for(i=0;i<=t;i++)
    {
        if(inversech[i]=='a')printf("Le caractere se trouve a la position %d a partir de la droite\n",i+1);
    }

    return 0;
}
