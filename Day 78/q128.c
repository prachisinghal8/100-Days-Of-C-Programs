#include <stdio.h>

int main()
{
    int n, a[100], i, m, b=-2147483647;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    m=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]-m>b)
            b=a[i]-m;
        if(a[i]<m)
            m=a[i];
    }
    printf("%d",b);

    return 0;
}
