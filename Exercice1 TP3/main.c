#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, i, j;
    char ch[7],inversechaine[7];

    printf("entrez la  chaine : ");
    gets(ch);

    j=0;
    t=strlen(ch);

    inversechaine[t] = '\0';
    for(i=t-1;i>=0;i--)
    {
        inversechaine[j++]=ch[i];
    }

    printf("%s",inversechaine);



    return 0;
}
