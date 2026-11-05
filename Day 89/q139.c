#include <stdio.h>

int main()
{
    int n, a[40], i=0, j;
    scanf("%d",&n);
    if(n==0)
    {
        printf("0");

        return 0;
    }
    while(n)
    {
        a[i++]=n%2;
        n/=2;
    }
    for(j=i-1;j>=0;j--)
        printf("%d",a[j]);

    return 0;
}
