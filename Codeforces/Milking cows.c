#include <stdio.h>

int main()
{
    long long int n,threat=0,loss=0,i;
    scanf("%I64d",&n);

     int cow[n];

     for( i=0;i<n;i++)
        scanf("%I64d",&cow[i]);


    for( i=0;i<n;i++)
    {
        if(cow[i]==1)
            threat++;
        else
            loss+=threat;
    }
    printf("%I64d",loss);

    return 0;
}
