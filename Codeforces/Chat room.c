#include <stdio.h>

int main()
{
    char s[101];
    int i,count=0;

    scanf("%s", s);

    for(i=0;i<strlen(s);i++){
        if(s[i] == 'h' && count == 0){
            count ++; continue;
        }
        if(s[i] == 'e' && count == 1){
            count ++; continue;
        }
        if(s[i] == 'l' && count == 2){
            count ++; continue;
        }
        if(s[i] == 'l' && count == 3){
            count ++; continue;
        }
        if(s[i] == 'o' && count == 4){
            count ++; continue;
        }
    }

    if(count == 5)
        puts("YES");
    else
        puts("NO");

    return 0;
}
