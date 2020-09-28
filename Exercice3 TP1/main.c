#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t1[10];
    int somme,i;
    for(i=0;i<10;i++)
    {
        printf("Entrez un nombre : ");
        scanf("%f",&t1[i]);
    }
    for(i=0;i<10;i++)
    {
        somme+=t1[i];
    }
    printf("La somme du tableau est de %d",somme);
    return 0;
}
