#include <stdio.h>

int main()
{
    int n, flag=0, c, safe, lucky[15] = {4,7,47,44,74,77,444,447,474,477,744,747,774,777};

    scanf("%d", &n);    safe = n;

    while(n != 0)
    {
        if(n%10 != 4 || n%10 != 7)
        {
            flag=1; break;
        }

        else
            flag=0;
        n/=10;
    }

    if(flag==1)
        for(c=0;c<=13;c++)
                if(safe%lucky[c] == 0)
                {
                flag=0;
                break;
                }
    if(flag==0)
        puts("YES");
    else
        puts("NO");

    return 0;

}
