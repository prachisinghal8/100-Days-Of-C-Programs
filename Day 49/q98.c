#include <stdio.h>

int main()
{
    char s[300];
    int i, last = 0;

    fgets(s, 300, stdin);

    for(i = 0; s[i] != '\0' && s[i] != '\n'; i++)
    {
        if(s[i] == ' ' && s[i + 1] != ' ' && s[i + 1] != '\0' && s[i + 1] != '\n')
            last = i + 1;
    }

    if(last == 0)
    {
        printf("%s", s);
        return 0;
    }

    printf("%c.", s[0]);

    for(i = 1; i < last; i++)
    {
        if(s[i - 1] == ' ' && s[i] != ' ' && i != last)
            printf("%c.", s[i]);
    }

    printf(" %s", &s[last]);

    return 0;
}
