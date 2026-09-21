#include <stdio.h>

int main()
{
    char s[300];
    int i, sp = 0, d = 0, x = 0;

    fgets(s, 300, stdin);

    for(i = 0; s[i] != '\0' && s[i] != '\n'; i++)
    {
        if(s[i] == ' ')
            sp++;
        else if(s[i] >= '0' && s[i] <= '9')
            d++;
        else if(!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')))
            x++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d", sp, d, x);

    return 0;
}
