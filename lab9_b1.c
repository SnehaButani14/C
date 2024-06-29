#include <stdio.h>
void main(){
	char uppercase='A',lowercase='a';
	while(uppercase<='Z'){
		printf("%c ",uppercase);
		uppercase++;
	}
	while(lowercase<='z'){
		printf("%c ",lowercase);
		lowercase++;	
	}
}
