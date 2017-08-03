#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s("");

    for(int i=1;i<=n;i++)
    {
        (i&1)? s+="I hate " : s+="I love ";

        if(i<=n-1)
            s+="that ";
    }

    s+="it";

    cout<<s;

    return 0;
}
