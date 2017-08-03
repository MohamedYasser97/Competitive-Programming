#include <iostream>
using namespace std;

int main()
{
    pair<int,char>a[4];
    string x;

    for(int i=0;i<4;i++){
        cin>>x;
        a[i].first=x.size()-2;

        switch(i){
            case 0:a[i].second='A';break;
            case 1:a[i].second='B';break;
            case 2:a[i].second='C';break;
            case 3:a[i].second='D';break;
        }
    }

    for(int i=0;i<4;i++)
        for(int j=i+1;j<4;j++)
            if(a[i].first>a[j].first){
                int temp=a[j].first;        char tempc=a[j].second;
                a[j].first=a[i].first;      a[j].second=a[i].second;
                a[i].first=temp;            a[i].second=tempc;
            }

    if(a[0].first*2<=a[1].first){

        if(a[3].first>=2*a[2].first)
            cout<<"C";
        else
            cout<<a[0].second;

    }else if(a[3].first>=2*a[2].first){

                if(a[0].first*2<=a[1].first)
                    cout<<"C";
                else
                    cout<<a[3].second;
    }else
        cout<<"C";

    return 0;
}
