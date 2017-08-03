#include <stdio.h>

int main()
{

	int n,c;
	char word[101];


	scanf("%d", &n);

	for(c =1; c<=n;c++){

		scanf("%s", word);

		if(strlen(word) <= 10){

			printf("%s\n", word);

		}else{

			printf("%c%d%c\n", word[0], strlen(word)-2 , word[strlen(word)-1]);

		}

	}

		return 0;
}