#include <stdio.h>

int main()
{
    char s[200];
    int i, v = 0, c = 0;

    fgets(s, 200, stdin);

    for(i = 0; s[i] != '\0'; i++)
    {
        char x = s[i];
        if(x >= 'A' && x <= 'Z')
            x = x + 32;

        if(x >= 'a' && x <= 'z')
        {
            if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
                v++;
            else
                c++;
        }
    }

    printf("Vowels=%d, Consonants=%d", v, c);

    return 0;
}
