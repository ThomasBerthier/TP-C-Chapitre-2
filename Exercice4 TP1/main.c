#include <stdio.h>
#include <stdlib.h>


   int main()
{
   int tab[100];
   int e;
   int p;
   for(int i=1;i<101;i++)
   {
       tab[i]=i;
       p=0;
       for(int index=1;index<=i;index++)
       {
           if(i%index==0)
           {
               p++;
           }
       }
       if(p==2)
       {
           e=1;
       }
       else
        {
            e=0;
        }
       printf("%d \t %d \n",i,e);
   }

}
