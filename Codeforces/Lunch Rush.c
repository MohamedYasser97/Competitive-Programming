#include <stdio.h>

int main()
{
    int n,k,a,b,joy,max;

    scanf("%d %d", &n, &k);
    scanf("%d %d", &a,&b);

    if(b>k)
            max=a-(b-k);
        else
            max=a;

    for(int i=1;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        if(b>k)
            joy=a-(b-k);
        else
            joy=a;

        if(joy>max)
            max=joy;
    }

    printf("%d", max);

    return 0;
}
