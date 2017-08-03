#include <bits/stdc++.h>
using namespace std;
multiset<int>info;

void genout(int quest,int cursum)
{
    if(quest==0){
        info.insert(cursum);
        return;
    }
    genout(quest-1,cursum+1);
    genout(quest-1,cursum-1);
}

int main()
{
    string a,b;
    cin>>a>>b;
    int orisum=0,quest=0,mysum=0;
    for(int i=0;i<a.size();i++){
        switch(a[i]){case '+':orisum++;break;case '-':orisum--;break;}
        switch(b[i]){case '+':mysum++;break;case '-':mysum--;break;default:quest++;break;}
    }
    if(quest==0){if(orisum!=mysum)printf("0.000000000000");else printf("1.000000000000");return 0;}

    genout(quest,mysum);
    double res=info.count(orisum)/(double)info.size();
    printf("%.12f",res);

    return 0;

}
