#include <iostream>
using namespace std;

int main()
{
    int n;      cin>>n;
    string a;   cin>>a;

    for(int i=0;i<a.length();i++)
        if(a[i]>=65 && a[i]<=90)
            a[i]+=32;

    int b[26]={0},buy=0;

    for(int i=0;i<a.length()-1;i+=2)
        if(a[i]!=a[i+1])
        {
            if(b[a[i+1]-97]>=1)
               b[a[i+1]-97]--;
            else
                buy++;

            b[a[i]-97]++;
        }

    cout<<buy;
    return 0;
}
