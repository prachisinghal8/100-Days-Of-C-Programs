#include <stdio.h>

int main()
{
    int n, a[100], i, s=0, l=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(l==s-l-a[i])
        {
            printf("%d",a[i]);

            return 0;
        }
        l+=a[i];
    }
    printf("-1");

    return 0;
}
