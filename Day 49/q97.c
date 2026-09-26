#include <stdio.h>

int main()
{
    char s[300];
    int i;

    fgets(s, 300, stdin);

    if(s[0] != ' ' && s[0] != '\n')
        printf("%c.", s[0]);

    for(i = 1; s[i] != '\0' && s[i] != '\n'; i++)
    {
        if(s[i - 1] == ' ' && s[i] != ' ')
            printf("%c.", s[i]);
    }

    return 0;
}
