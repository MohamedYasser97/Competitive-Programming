#include <stdio.h>

int main()
{
    long long int n,k,h;
    scanf("%I64d %I64d",&n,&k);

    if(n%2==0)
        h=n/2;
    else
        h=n/2 + 1;

    if(k>h)
        printf("%I64d",(k-h)*2);
    else
        printf("%I64d",k*2 - 1);    //as if it was like (k-0)*2 and -1 to get odd value

    return 0;
}
