#include <stdio.h>
#include <stdlib.h>

int main()
{
float t1[10];
float t2[10];
int i;
int n;
for(i=0;i<10;i++)
{
    printf("Entrez un nombre : ");
    scanf("%f",&t1[i]);
}
n=0;
for(i=0;i<10;i++)
{
    if(t1[i]>=0)
    {
        t2[n]=t1[i];
        n++;
    }
}
for(i=n;i<10;i++)
{
    t2[i]=0;
}
for(i=0;i<10;i++)
{
    printf("%f\t%f\n",t1[i],t2[i]);
}
}
