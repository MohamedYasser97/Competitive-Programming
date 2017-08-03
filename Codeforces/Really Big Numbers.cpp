#include <bits/stdc++.h>//if i is big it is guaranteed that i+1 is big too
using namespace std;

bool isbig(long long int n,long long int s)
{
    long long int rev=n,res=0;
    while(rev){res+=rev%10;rev/=10;}
    if(abs(n-res)>=s)return true;return false;
}

int main()
{
    long long int n,s;
    cin>>n>>s;

    long long int low=1,high=n,mid,finres=n+1;
    while(low<=high){
        mid=(low+high)/2;
        if(isbig(mid,s))
            high=mid-1,finres=mid;
        else
            low=mid+1;
    }

    //if(n==s)cout<<0;else
        cout<<(long long int)(n-finres+1);
    return 0;
}
