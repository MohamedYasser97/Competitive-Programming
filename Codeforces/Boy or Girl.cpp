#include <iostream>

using namespace std;

int main()
{
    string a;
    cin>>a;

    int b[26]={0},sum=0;

    for(int i=0;i<a.length();i++)
        b[a[i]-97]=1;

    for(int i=0;i<26;i++)
        sum+=b[i];

    if(sum%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";

    return 0;
}
