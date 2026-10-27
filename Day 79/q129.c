#include <stdio.h>

int main()
{
    int n, a[100], i, m, p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    m=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]-m>p)
            p=a[i]-m;
        if(a[i]<m)
            m=a[i];
    }
    printf("%d",p);

    return 0;
}
