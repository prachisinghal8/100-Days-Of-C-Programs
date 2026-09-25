#include <stdio.h>
#include <string.h>

int main()
{
    char a[200], b[200], c[400];
    int n1, n2;

    fgets(a, 200, stdin);
    fgets(b, 200, stdin);

    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';

    n1 = strlen(a);
    n2 = strlen(b);

    if(n1 == n2)
    {
        strcpy(c, a);
        strcat(c, a);

        if(strstr(c, b) != NULL)
            printf("Rotation");
        else
            printf("Not rotation");
    }
    else
        printf("Not rotation");

    return 0;
}
