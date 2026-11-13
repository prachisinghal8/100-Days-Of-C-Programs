#include <stdio.h>

long long pw(long long a, int b)
{
    if(b==0)

        return 1;

    return a*pw(a, b-1);
}
int main()
{
    long long a;
    int b;
    scanf("%lld%d",&a,&b);
    printf("%lld",pw(a,b));

    return 0;
}
