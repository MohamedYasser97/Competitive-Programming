#include <stdio.h>

int main()
{
    int y,a,b,c,d;

    scanf("%d",&y);
    y++;

    while(y!=0)
    {
        a=y%10; b=(y/10)%10; c=(y/100)%10; d=(y/1000)%10;

        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
            break;
        y++;
    }

    printf("%d", y);

    return 0;
}
