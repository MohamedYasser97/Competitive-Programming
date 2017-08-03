#include <iostream>
#include <algorithm>
using namespace std;

void rev(int a[],int s,int f)
{
    int temp;
    while(s<f){
        temp=a[s];
        a[s]=a[f];
        a[f]=temp;
        s++;f--;
    }
}

int main()
{
    int n;
    cin>>n;

    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }

    sort(b,b+n);
    int s=n-1,f=0;
    bool flag=false;
    for(int i=0;i<n-1;i++){

        if(a[i]>a[i+1] && !flag){
            s=i;
            flag=true;
        }

        if(a[i]<a[i+1] && flag){
            f=i;
            break;
        }
    }

    if(s==n-1){
        cout<<"yes"<<endl<<1<<' '<<1;
        return 0;
    }

    if(f==0)
        f=n-1;

    rev(a,s,f);

    for(int i=0;i<n;i++)
        if(a[i]!=b[i]){
            cout<<"no";
            return 0;
        }

    cout<<"yes"<<endl<<s+1<<' '<<f+1;

    return 0;
}
