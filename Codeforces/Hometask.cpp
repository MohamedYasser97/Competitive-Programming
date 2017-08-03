#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,freq[10]={0},sum=0,temp,numoth=0;
    bool allzeroes=true,valid=false;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        sum+=temp;
        freq[temp]++;

        if(temp!=0){
            allzeroes=false;
            numoth++;
        }else
            valid=true;
    }

    if(!valid){
        printf("-1");
        return 0;
    }

    int divmod=sum%3;

    bool found=false,found2=false;
    if(divmod!=0){
        for(int i=1;i<=9;i++)
            if(i%3==divmod && freq[i]!=0){
                freq[i]--;
                numoth--;
                found=true;
                break;
            }

        if(!found){
            for(int i=1;i<=2;i++){
                for(int j=1;j<=9;j++){
                    if(j%3!=0 && freq[j]!=0){
                        freq[j]--;
                        sum-=j;
                        numoth--;
                        break;
                    }
                    if(sum%3==0)
                        found2=true;
                }
                if(found2)
                    break;
            }
        }
    }

    if(allzeroes || numoth==0){
        printf("0");
    }else
        for(int i=9;i>=0;i--)
            for(int j=0;j<freq[i];j++)
                printf("%d",i);

    return 0;
}
