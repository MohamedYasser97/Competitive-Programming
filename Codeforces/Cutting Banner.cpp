#include <iostream>
using namespace std;

int main()
{
    string a;
    cin>>a;

    for(int i=0;i<a.length();i++)
        for(int j=i+1;j<=a.length();j++)
            if(a.substr(0,i) + a.substr(j) == "CODEFORCES")
                {cout<<"YES"; return 0;}

    cout<<"NO";

    return 0;
}
