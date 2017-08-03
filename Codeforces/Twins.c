#include <stdio.h>

int main()
{
    int n, coins[100], i, pass, swap, times=0, sum=0;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d", &coins[i]);
        sum += coins[i];
    }

    for(pass=0;pass<n-1;pass++){
        for(i=0;i<n-pass-1;i++){
            if(coins[i] < coins[i+1]){
                swap = coins[i];
                coins[i] = coins[i+1];
                coins[i+1] = swap;
            }
        }
    }

    int test = coins[0];

    for(i=0; i<n;i++){

        if(test <= sum/2){
            test += coins[i+1];
            times++;
        }else{
               times++;
               break;
           }
    }

        printf("%d", times);
        return 0;
}
