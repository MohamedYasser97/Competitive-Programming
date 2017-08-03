#include <iostream>

using namespace std;

int main()
{
    string a[]={"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};

    int n;
    cin>>n;

    string b;
    cin>>b;

    bool flag=false;

    for(string c : a)
        if(c.length() == n)
        {
            for(int i=0;i<n;i++)
            {
                if(b[i]!=c[i] && b[i]!='.')
                    flag=true;
            }

            if(!flag)
                {cout<<c; return 0;}

            flag=false;
        }

}
