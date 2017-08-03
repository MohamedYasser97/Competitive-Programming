#include <stdio.h>

int main()
{

	int n,c;
	int	guidance = 0;
	int voice[3];

	scanf("%d", &n);



	for(c=1; c<=n; c++){

		scanf("%d %d %d", &voice[0], &voice[1], &voice[2]);

		if((voice[0] + voice[1] + voice[2]) >= 2){

			guidance++;
		}

	}


	printf("%d", guidance);

	return 0;

}
