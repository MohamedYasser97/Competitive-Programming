#include <stdio.h>

int main()
{
    char a[100];
    scanf("%s",a);

    for(int i=0;i<strlen(a);i++)
        if(a[i]=='H' || a[i]=='Q' || a[i]=='9')
        {
            printf("YES");
            return 0;
        }

    printf("NO");

    return 0;
}
