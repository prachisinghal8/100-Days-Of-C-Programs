#include <stdio.h>

int main()
{
    char s[300], ch;
    int i, c = 0;

    fgets(s, 300, stdin);
    scanf(" %c", &ch);

    for(i = 0; s[i] != '\0' && s[i] != '\n'; i++)
    {
        if(s[i] == ch)
            c++;
    }

    printf("%d", c);

    return 0;
}
