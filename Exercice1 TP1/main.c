#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[10];
    int i;
    int min,max;
    for(i=0; i<10; i++)
    {
        tab[i]=i;
        printf("%d\n",tab[i]);
    }
    for(i=0;i<10;i++)
    {
        if(tab[i]>tab[max]) max=i;
        if(tab[i]<tab[min]) min=i;

    }
    printf("min = %d\tmax = %d",min,max);
    getch();
    return 0;
}
