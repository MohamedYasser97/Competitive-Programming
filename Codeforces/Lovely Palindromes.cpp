#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string x;
    cin>>x;
    cout<<x;

    reverse(x.begin(),x.end());
    cout<<x;

    return 0;
}
