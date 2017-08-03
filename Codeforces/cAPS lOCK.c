#include <stdio.h>
#include <string.h>

int main()
{

	char input[101];
	int c , up = 0;


	scanf("%s", input);

	for(c=0; c<=strlen(input)-1; c++){

		if(isupper(input[c])){

			up++;
		}
	}


	if(islower(input[0]) && up == strlen(input)-1){

		input[0] = toupper(input[0]);

		for(c=1; c<=strlen(input); c++){

			input[c] = tolower(input[c]);
		}

	}else if(up == strlen(input)){

		for(c=0; c<=strlen(input); c++){

			input[c] = tolower(input[c]);
		}

	}

		printf("%s", input);

		return 0;

}
