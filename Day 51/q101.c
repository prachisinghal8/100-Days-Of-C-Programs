#include <stdio.h>

int main()
{
    int n, a[100], x, i, f=-1, l=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&x);
    for(i=0;i<n;i++)if(a[i]==x)
    {
        if(f==-1)
            f=i;
        l=i;
    }
    printf("%d,%d",f,l);

    return 0;
}
