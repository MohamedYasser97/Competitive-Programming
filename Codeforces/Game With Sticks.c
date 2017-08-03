#include <stdio.h>

int main()
{
    int n,m,turn=0;

    scanf("%d %d",&n,&m);

    while(n!=0 && m!=0)
    {
        n--;
        m--;
        turn++;
    }

    if(turn%2==0)
        printf("Malvika");
    else
        printf("Akshat");

    return 0;

}
