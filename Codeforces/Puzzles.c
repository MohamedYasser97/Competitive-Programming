#include <stdio.h>

int main()
{
    int n,m,swap;
    scanf("%d %d", &n,&m);
    int p[m];

    for(int i=0;i<m;i++)
        scanf("%d", &p[i]);

    for(int i=0;i<m;i++)
        for(int j=i+1;j<m;j++)
            if(p[i] < p[j])
            {
                swap=p[j];
                p[j]=p[i];
                p[i]=swap;
            }

    int dif=p[0]-p[n-1];

    for(int i=1;i<m;i++)
        for(int j=i+n-1;j<m;j++)
            if(p[i]-p[j] < dif)
                dif=p[i]-p[j];

    printf("%d",dif);

    return 0;
}
