#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t[3][4]=  {
                    {10,10,10,10},
                    {10,10,10,10},
                    {10,10,10,10},
                    },
                    somme=0,
                    sommeLine;
    for(int line=0;line<3;line++)
    {
        for(int col=0;col<4;col++)
        {
            sommeLine=t[line][col];
            somme+=sommeLine;
            sommeLine=0;
        }
    }
    printf("%f",somme);
    return 0;
}
