#include <iostream>

using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;

    for(int i=s.length()-1;i>=0;i--)
    {
        while(s[i]<'z')
        {
            s[i]++;

            if(s<t)
                {cout<<s; return 0;}
        }

        if(s[i]=='z')
            s[i]='a';
    }

    cout<<"No such string";

    return 0;
}
