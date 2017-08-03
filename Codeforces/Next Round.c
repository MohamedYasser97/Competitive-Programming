#include <stdio.h>

int main()
{

	int n,k,c;
	int pool[101];

	scanf("%d %d", &n , &k);

	for(c=0; c<=n-1;c++){

		scanf("%d", &pool[c]);
	}

	int passers=0;

	for(c=0; c<=n-1; c++){

		if(pool[c] >= pool[k-1] && pool[c] > 0){

			passers++;
		}
	}

		printf("%d", passers);


		return 0;
}
