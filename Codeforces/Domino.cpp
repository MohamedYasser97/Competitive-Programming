#include <iostream>
using namespace std;

int numo(int a[],int n)
{
    int cnt=0;
    for(int i=0;i<n;i++)
        if(a[i]%2==1)
        cnt++;

    return cnt;
}

bool isrot(int a[],int b[],int n)
{
    for(int i=0;i<n;i++)
        if((a[i]%2==0 && b[i]%2==1) || (a[i]%2==1 && b[i]%2==0))
            return true;

    return false;
}

int main()
{
    int n;
    cin>>n;

    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i];

    if(numo(a,n)%2==0 && numo(b,n)%2==0)
        cout<<0;
    else if((numo(a,n)-numo(b,n))%2==0)
        {
            if(isrot(a,b,n))
                cout<<1;
            else
                cout<<-1;
        }
    else
        cout<<-1;

    return 0;

}
