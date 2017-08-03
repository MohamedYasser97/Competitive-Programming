#include <bits/stdc++.h>
using namespace std;

int n;
set<long long int>lucky;

void generate_lucky(long long int made)
{
    if(made>n)
        return;

    lucky.insert(made);

    generate_lucky(made*10+4);
    generate_lucky(made*10+7);
}

int main()
{
    cin>>n;
    generate_lucky(0);
    cout<<lucky.size()-1;

    return 0;
}
