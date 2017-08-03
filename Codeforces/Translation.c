#include <stdio.h>
#include <string.h>

int main()
{

	char input[101] , test[101];

	scanf("%s", input);
	scanf("%s", test);


	if(strcmp(input , strrev(test)) == 0){

		puts("YES");
	}else{

		puts("NO");
	}

	return 0;

}
