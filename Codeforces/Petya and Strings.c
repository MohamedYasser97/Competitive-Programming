#include <stdio.h>
#include <string.h>

int main()
{
    int c;
	char first[101] , second[101];


	scanf("%s" , first);
	scanf("%s" , second);

	for(c=0;c<=101;c++){
        first[c] = tolower(first[c]);
        second[c] = tolower(second[c]);
	}



	if(strcmp(first , second) == 0){

		printf("0");

	}else if(strcmp(first , second) > 0){

		printf("1");
	}else{

		printf("-1");
	}

		return 0;

}
