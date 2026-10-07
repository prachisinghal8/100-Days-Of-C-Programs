#include <stdio.h>

int main()
{
    int n, a[100], i, m1=2147483647, m2=2147483647;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<m1)
        {
            m2=m1;
            m1=a[i];
        }
        else if(a[i]>m1&&a[i]<m2)m2=a[i];
    }
    if(m2==2147483647)
        printf("-1");
    else printf("%d",m2);

    return 0;
}
