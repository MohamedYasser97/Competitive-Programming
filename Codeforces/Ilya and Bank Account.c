#include <stdio.h>

int main()
{
    int n,hold;
    scanf("%d",&n);

    if(n<0)
    {
        if(-n%10 > (-n/10)%10)
            n/=10;
        else
        {
            hold=-n%10;
            n/=100;
            n=(n*10) - hold;
        }
    }

    printf("%d",n);

    return 0;
}
