#include <iostream>

using namespace std;

int main()
{
    string a;
    cin>>a;

    int b[26]={0};

    for(int i=0;i<a.length();i++)
        b[a[i]-97]++;

    int odd=-1;

    for(auto c : b)
        if(c%2==1)
            odd++;

    if(odd%2==0 || odd==-1)
        cout<<"First";
    else
        cout<<"Second";

    return 0;
}
