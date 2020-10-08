#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[800];
    char chsansespace[800];
    gets(ch);
    int length=strlen(ch);
    int loop;
    int skip=0;

    for(loop=0;loop<=length;loop++)
    {
        if(ch[loop]!=32)
           {
               chsansespace[skip]=ch[loop];
               skip++;
           }
    }
    for(loop=0;loop<=length;loop++)
    {
        printf("%c",chsansespace[loop]);
    }
}
