#include <stdio.h>

int main()
{
    char a;
    int freq[26]={0},cnt=0;

    do{
        scanf("%c",&a);

        if(a>=97 && a<=122 && a!='{' && a!='}' && a!=" ")
            freq[a-97]=1;

    }while(a!='}');


    for(int i=0;i<26;i++)
        if(freq[i]==1)
            cnt++;

    printf("%d",cnt);

    return 0;

}
