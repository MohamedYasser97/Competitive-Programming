#include <stdio.h>

int main()
{
    int i,pass;
    char s[101], swap;

    scanf("%s", s);

    for(pass=1; pass<strlen(s); pass++)

    for(i=0; i<strlen(s)-1;i++){
        if(s[i] == '+')
            continue;

        if(s[i] > s[i+2]){
            swap = s[i+2];
            s[i+2] = s[i];
            s[i] = swap;
        }
    }

    printf("%s", s);

    return 0;
}
