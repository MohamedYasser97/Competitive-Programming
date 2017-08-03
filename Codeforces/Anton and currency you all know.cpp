#include <iostream>
using namespace std;

int main()
{
    string a;
    cin>>a;

    bool flag=false;
    for(int i=0;i<a.size();i++)
        if((a[i]-'0')%2==0 && a[i]<a[a.size()-1]){
            swap(a[i],a[a.size()-1]);
            flag=true;
            break;
        }

    if(!flag)
        for(int i=a.size()-1;i>=0;i--)
            if((a[i]-'0')%2==0 && a[i]>a[a.size()-1]){
                swap(a[i],a[a.size()-1]);
                flag=true;
                break;
            }

    if(!flag)
        cout<<-1;
    else
        for(int i=0;i<a.size();i++)
            cout<<a[i];

    return 0;
}
