#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
    double n;
    cin>>n;

    printf("%.f\n",ceil(n*n/2));

    bool flag=false;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(flag==false)
                {cout<<'C'; flag=true;}
            else
                {cout<<'.'; flag=false;}
        }

        if(i%2==0)
            flag=true;
        else
            flag=false;

        cout<<endl;
    }

    return 0;
}
