#include <stdio.h>

int main()
{

	int c;
	char word[101];

	scanf("%s", word);

	for(c=0; c<= (strlen(word))-1; c++){

        word[c] = tolower(word[c]);

		if(word[c] == 'a' || word[c] == 'e' || word[c] == 'i' || word[c] == 'o' || word[c] == 'u' || word[c] == 'y'){

            continue;

		}else{

			printf(".%c", word[c]);

		}

	}

		return 0;
}
