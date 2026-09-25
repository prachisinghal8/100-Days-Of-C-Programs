#include <stdio.h>

int main()
{
    char s[300];
    int i, j, st = 0;

    fgets(s, 300, stdin);

    for(i = 0; ; i++)
    {
        if(s[i] == ' ' || s[i] == '\n' || s[i] == '\0')
        {
            for(j = i - 1; j >= st; j--)
                printf("%c", s[j]);

            if(s[i] == ' ')
                printf(" ");

            st = i + 1;

            if(s[i] == '\n' || s[i] == '\0')
                break;
        }
    }

    return 0;
}
