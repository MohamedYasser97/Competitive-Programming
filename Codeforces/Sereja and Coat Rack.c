#include <stdio.h>

int main()
{
    int n,d,m,swap,profit=0,flag=0;

    scanf("%d %d", &n, &d);
    int r[n];

    for(int i=0;i<n;i++)
        scanf("%d",&r[i]);

    scanf("%d",&m);

    for(int i=0; i<n;i++)
        for(int j=i+1; j<n; j++)

            if(r[i] > r[j])
                {
                    swap = r[j];
                    r[j] = r[i];
                    r[i] = swap;
                }

    if(m>n)
        flag=1;
    int j,t=n,v=m;
    for(int i=0;i<v;i++)
    {
        profit+=r[i];
        --m;    j=i;  --t;
        if(t==0 && flag==1)
            {

                profit-=d*m;
                break;
            }
    }

    printf("%d",profit);

    return 0;

}
