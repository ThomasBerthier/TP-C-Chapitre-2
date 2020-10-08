#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[39];
    int i,j,
        nb=0,
        permut;
    for(i=0;i<40;i++)
    {
        printf("Entrez une valeur : ");
        scanf("%d",&tab[i]);
        if(tab[i]==-1)
        {
            break;
        }
        nb++;
    }
    for(i=0;i<nb;i++)
    {
        printf("%d, ",tab[i]);
    }
    printf("\n");
    for(i=0;i<nb-1;i++)
    {
        for(j=0;j<nb-i-1;j++)
        {
            if(tab[j]>tab[j+1])
            {
                permut=tab[j];
                tab[j]=tab[j+1];
                tab[j+1]=permut;
            }
        }
    }
    for(i=0;i<nb;i++)
    {
        printf("%d, ",tab[i]);
    }
}
