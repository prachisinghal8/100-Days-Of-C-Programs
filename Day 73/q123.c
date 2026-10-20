#include <stdio.h>

int main()
{
    int n, a[100], v[100]=
    {
        0
    }
    , i, j, c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)if(!v[i])
    {
        c=1;
        for(j=i+1;j<n;j++)if(a[i]==a[j])
        {
            c++;
            v[j]=1;
        }
        printf("%d:%d\n",a[i],c);
    }

    return 0;
}
