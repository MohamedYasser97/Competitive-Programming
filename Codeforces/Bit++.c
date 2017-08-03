#include <stdio.h>

int main()
{

	char bitle[100];
	int n , c;
	int x = 0;

	scanf("%d", &n);

	for(c=1; c<=n; c++){

		scanf("%s", bitle);

		if(bitle[1] == '+'){

			x++;

		}else if(bitle[1] == '-'){

			x--;
		}

	}

	printf("%d", x);

	return 0;

}
