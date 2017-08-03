#include <stdio.h>

int main()
{
    long long int k,l,i=0,kf;
    scanf("%I64d",&k); kf=k;
    scanf("%I64d",&l);

    while(k<=l)
    {
        if(k==l)
        {
            printf("YES\n%d",i);
            return 0;
        }else
        {
        ++i;
        k=k*kf;
        }
    }

    printf("NO");
    return 0;
}
