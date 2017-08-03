#include <stdio.h>

int main()
{
    int n,t,c=0;

    scanf("%d %d", &n, &t);

    char q[n+1];

    scanf("%s", q);

    while(c<t)
    {
        for(int i=1;i<n;i++)
            if(q[i]=='G' && q[i-1]=='B')
            {
                q[i]='B';   q[i-1]='G';
                i++;
            }
        c++;
    }

    printf("%s", q);

    return 0;
}
