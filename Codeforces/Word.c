#include <stdio.h>
#include <string.h>

int main()
{

	char word[101];
	int c , up=0 , down=0;


	scanf("%s", word);

	for(c=0; c<=strlen(word)-1; c++){

		if(isupper(word[c])){

			up++;
		}else if(islower(word[c])){

			down++;
		}
	}


	if(up > down){

		for(c=0; c<=strlen(word)-1; c++){

			word[c] = toupper(word[c]);
		}

	}else{

		for(c=0; c<=strlen(word)-1; c++){

			word[c] = tolower(word[c]);
		}

	}


	printf("%s", word);

	return 0;

}