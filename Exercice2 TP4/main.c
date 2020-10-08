#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));/*sequence rand réellement aleatoire*/
    int tab[10],
        i,n=0,
        permut=0,
        j=0;
    for(i=0;i<10;i++)/*creation tableau */
    {
        tab[i]=rand();
        printf("%d\t",tab[i]);
        n++;
    }
    for(i=1;i<=n-1;i++)
    {
        permut=tab[i];/*memorise tab[i] dans permut*/
        j=i; /*deplacement vers la droite des élements du tableau plus grand que permut a partir de tab[i-1]*/
        while((j>0)&&(tab[j-1]>permut))
        {
            tab[j]=tab[j-1];
            j=j-1;
        }
        tab[j]=permut;/*place permut dans la place de tab[j]*/
    }
    for(i=0;i<10;i++)
    {
        printf("%d\t",tab[i]);
    }
}
