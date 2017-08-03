#include <iostream>

using namespace std;

int main()
{
    char s;
    cin>>s;

    char k[3][10]=
    {
        {'q','w','e','r','t','y','u','i','o','p'},
        {'a','s','d','f','g','h','j','k','l',';'},
        {'z','x','c','v','b','n','m',',','.','/'}//fork u too slash, i trusted your presence :(
    };

    string in;
    cin>>in;

    for(int i=0;i<in.length();i++)
        for(int j=0;j<3;j++)    //i know i know i could avoid all this by using a 1d array but it was just for practice
            for(int m=0;m<10;m++)
                if(in[i]==k[j][m])
                    if(s=='R')
                        cout<<k[j][m-1];
                    else
                        cout<<k[j][m+1];

                //no braces is beautiful isn't it? ;)

    return 0;
}
