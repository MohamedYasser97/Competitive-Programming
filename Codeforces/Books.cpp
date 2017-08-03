#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;

    int tosum[n+1];
    tosum[0]=0;
    for(int i=1;i<=n;i++){
        int garb;
        cin>>garb;
        tosum[i]=garb+tosum[i-1];
    }

    int res=0;
    for(int i=1;i<=n;i++){

        int low=i,high=n,mid;

        while(low<=high){

            mid=(low+high)/2;

            if(tosum[mid]-tosum[i-1]<=t){
                res=max(res,mid-i+1);
                low=mid+1;

            }else
                high=mid-1;
        }
    }

    cout<<res;

    return 0;
}
