#include <iostream>
using namespace std;

int main()
{
    int n,a,b,c,ans=0;
    cin>>n>>a>>b>>c;

    for(int x=0;x<=n/a +1;x++)
        for(int y=0;y<=n/b +1;y++)
        {
            if(a*x+b*y<n)
            {
                int z=n-(x*a+y*b);

                if(z%c==0)
                    ans=max(ans,x+y+z/c);
            }else if(a*x+b*y==n)
                    ans=max(ans,x+y);
        }

    cout<<ans;

    return 0;
}
