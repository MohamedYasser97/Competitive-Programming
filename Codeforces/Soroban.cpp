#include <iostream>
using namespace std;

//If it works then it isn't stupid...i know it can be done with a more "clever" way than hardcoding...but wait..who are you to comment on my code? please fuck off

int main()
{
    string zero ="O-|-OOOO"
          ,one  ="O-|O-OOO"
          ,two  ="O-|OO-OO"
          ,three="O-|OOO-O"
          ,four ="O-|OOOO-"
          ,five ="-O|-OOOO"
          ,six  ="-O|O-OOO"
          ,seven="-O|OO-OO"
          ,eight="-O|OOO-O"
          ,nine ="-O|OOOO-";

    long long int n;
    cin>>n;

    if(n==0){
        cout<<zero;
        return 0;
    }else

    while(n>0){

        switch(n%10){
            case 0 : cout<<zero;break;
            case 1 : cout<<one;break;
            case 2 : cout<<two;break;
            case 3 : cout<<three;break;
            case 4 : cout<<four;break;
            case 5 : cout<<five;break;
            case 6 : cout<<six;break;
            case 7 : cout<<seven;break;
            case 8 : cout<<eight;break;
            case 9 : cout<<nine;break;
        }
        cout<<endl;

        n/=10;
    }

    return 0;
}
