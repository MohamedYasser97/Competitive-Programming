#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    char a[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

        if(a[i]>=65 && a[i]<=90)
            a[i]+=32;//isupper and tolower functions didn't work and i don't know why
    }

    int b[26]={0};
    for(int i=0;i<n;i++)
        b[a[i]-97]=1;

    int sum=0;
    for(int i=0;i<26;i++)
        sum+=b[i];

    if(sum==26)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;

}
