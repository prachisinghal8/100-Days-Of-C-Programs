#include <stdio.h>

int main()
{
    int n, a[100], i, c=1, b=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
            c++;
        else c=1;
        if(c>b)
            b=c;
    }
    printf("%d",b);

    return 0;
}
