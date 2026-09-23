#include <stdio.h>

int main()
{
    char s[300];
    int i, f[26] = {0};

    fgets(s, 300, stdin);

    for(i = 0; s[i] != '\0' && s[i] != '\n'; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            f[s[i] - 'a']++;
            if(f[s[i] - 'a'] == 2)
            {
                printf("%c", s[i]);
                break;
            }
        }
    }

    return 0;
}
