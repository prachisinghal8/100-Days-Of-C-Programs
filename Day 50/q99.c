#include <stdio.h>

int main()
{
    int d, m, y;
    char mon[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    scanf("%d/%d/%d", &d, &m, &y);

    if(m >= 1 && m <= 12)
        printf("%02d-%s-%d", d, mon[m - 1], y);

    return 0;
}
