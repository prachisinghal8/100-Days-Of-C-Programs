#include <stdio.h>

int main()
{
    char s[300], w[100];
    int i, st = 0, l = 0, ml = 0, ms = 0;

    fgets(s, 300, stdin);

    for(i = 0; ; i++)
    {
        if(s[i] != ' ' && s[i] != '\n' && s[i] != '\0')
        {
            if(l == 0)
                st = i;
            l++;
        }
        else
        {
            if(l > ml)
            {
                ml = l;
                ms = st;
            }
            l = 0;

            if(s[i] == '\0' || s[i] == '\n')
                break;
        }
    }

    for(i = 0; i < ml; i++)
        w[i] = s[ms + i];
    w[ml] = '\0';

    printf("%s", w);

    return 0;
}
