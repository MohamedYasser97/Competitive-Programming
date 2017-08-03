#include <stdio.h>

int main()
{
	int w, k, n, i, cost=0;

	scanf("%d %d %d", &k, &n, &w);

	for(i=1; i<=w; i++)
		cost += i*k;

	if((n-cost) >= 0)
		printf("0");
	else
		printf("%d", cost-n);

	return 0;
}