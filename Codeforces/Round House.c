#include <stdio.h>

int main()
{
    int n,a,b;

    scanf("%d %d %d", &n, &a, &b);

    a+=b;

    a-=(a/n)*n;

    if(a==0)
        a=n;
    if(a<0)
        a=n+a;

    printf("%d", a);

    return 0;
}
