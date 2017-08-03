#include <iostream>
using namespace std;

bool checkpre(string a,string b)
{
    for(int i=0;i<a.size();i++)
        if(a[i]!=b[i])
            return false;

    return true;
}

int main()
{
    string a,temp;
    cin>>a;

    string mina=a;
    bool visit=false;
    int n;
    cin>>n;

    while(n--){

        cin>>temp;

        if(checkpre(a,temp)){
            if(!visit){
                mina=temp;
                visit=true;
            }
            else
            if(temp<=mina)
                mina=temp;
        }
    }

    cout<<mina;

    return 0;
}
