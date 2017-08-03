#include <stdio.h>

int main()
{
    char d[205];

    scanf("%s",d);

    for(int i=0;i<strlen(d);i++)
        if(d[i]=='W' && d[i+1]=='U' && d[i+2]=='B')
            i+=2;
        else
            {
                printf("%c",d[i]);
                if(d[i+1]=='W' && d[i+2]=='U' && d[i+3]=='B')
                    printf(" ");
            }
    return 0;

}
