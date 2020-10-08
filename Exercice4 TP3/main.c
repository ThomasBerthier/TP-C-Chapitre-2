#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[800];
    gets(ch);
    int length=strlen(ch);
    int loop;

    for(loop=0;loop<=length;loop++)
    {
        if((ch[loop]>=65)&&(ch[loop]<=90))
           {
               ch[loop]=ch[loop]+32;
           }
    }
    for(loop=0;loop<=length;loop++)
    {
        printf("%c",ch[loop]);
    }
}
