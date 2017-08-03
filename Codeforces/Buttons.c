#include <stdio.h>

int main()
{
    long long int n,press=0;

    scanf("%I64d",&n);

    for(long long int i=1;i<=n;i++)
        press+=1 + (n-i) * i;

    printf("%I64d",press);

    return 0;
}
