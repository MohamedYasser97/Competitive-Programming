#include <stdio.h>

int main()
{
	int a, b, dead=0, hours=0;

	scanf("%d %d", &a, &b);

	while(a != 0)
	{

		a--;
		dead++;

		if(dead == b)
		{
			dead=0;
			a++;
		}

		hours++;
	}

	printf("%d", hours);

	return 0;
}