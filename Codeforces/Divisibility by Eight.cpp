#include <bits/stdc++.h>
using namespace std;

int Godsaveme(string num)
{
    for(int i=0;i<num.size();i++)
        if(num[i]=='8')
            return 8;
        else if(num[i]=='0')
                return 0;

    return -1;
}

int main()
{
    string num;
    cin>>num;

    if(Godsaveme(num)==8){
        cout<<"YES"<<endl<<8;
        return 0;
    }
    if(Godsaveme(num)==0){
        cout<<"YES"<<endl<<0;
        return 0;
    }

    if(num.size()==1){
        if(num[0]==0){
            cout<<"YES"<<endl<<0;
            return 0;
        }
        if(num[0]==8){
            cout<<"YES"<<endl<<8;
            return 0;
        }
        cout<<"NO";
        return 0;
    }
    if(num.size()==2){
        if(((num[0]-'0')*10 + num[1]-'0') %8==0)
            cout<<"YES"<<endl<<(num[0]-'0')*10 + num[1]-'0';
        else
            cout<<"NO";

        return 0;
    }

    for(int i=0;i<=num.size()-3;i++)
        for(int j=i+1;j<=num.size()-2;j++)
            for(int k=j+1;k<=num.size()-1;k++){

                int temp=(num[i]-'0')*100 + (num[j]-'0')*10 + num[k]-'0';
                if(temp%8==0){
                    cout<<"YES"<<endl<<temp;
                    return 0;
                }

                int dig1=(num[i]-'0')*10+(num[j]-'0') , dig2=(num[i]-'0')*10+(num[k]-'0') , dig3=(num[j]-'0')*10+(num[k]-'0');

                if(dig1%8==0){
                    cout<<"YES"<<endl<<dig1;
                    return 0;
                }else
                    if(dig2%8==0){
                    cout<<"YES"<<endl<<dig2;
                    return 0;
                }else
                    if(dig3%8==0){
                    cout<<"YES"<<endl<<dig3;
                    return 0;
                }
            }

    cout<<"NO";
    return 0;
}
