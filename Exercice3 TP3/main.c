#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[800];
    char ascii[129];
    gets(ch);
    int length=strlen(ch);
    int loop;

    for(loop=0;loop<=128;loop++)
    {
        ascii[loop]=0;
    }
    for(loop=0;loop<length;loop++)
    {
        ascii[ch[loop]]++;
    }
    for(loop=0;loop<=128;loop++)
    {
        if(ascii[loop]!=0)
        {
            printf("%c : %d\n", loop,ascii[loop]);
        }
    }





    return 0;

}
