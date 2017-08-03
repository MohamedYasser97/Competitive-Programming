#include <stdio.h>
#include <string.h>

int main(){

	char word[1001];

	scanf("%s", word);

	word[0] = toupper(word[0]);

	printf("%s", word);

	return 0;

}