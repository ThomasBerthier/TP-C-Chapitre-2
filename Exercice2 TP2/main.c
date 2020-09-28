#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t[3][4]=  {
                    {10,10,10,10},
                    {20,40,30,30},
                    {10,10,10,10},
                    },
                    somme=0,
                    sommeLine,
                    m[3];
    for(int line=0;line<3;line++)
    {
        for(int col=0;col<4;col++)
        {
            sommeLine=t[line][col];
            somme+=sommeLine;
            sommeLine=0;
            m[line]=somme/4;
        }
        somme=0;
        printf("%f\n",m[line]);
    }

    return 0;
}
