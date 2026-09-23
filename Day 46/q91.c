#include <stdio.h>

int main()
{
    char s[300];
    int i;

    fgets(s, 300, stdin);

    for(i = 0; s[i] != '\0'; i++)
    {
        char x = s[i];
        if(x >= 'A' && x <= 'Z')
            x = x + 32;

        if(x != 'a' && x != 'e' && x != 'i' && x != 'o' && x != 'u')
            printf("%c", s[i]);
    }

    return 0;
}
