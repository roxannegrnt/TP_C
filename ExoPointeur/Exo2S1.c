#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strlenPoint(char *str){
	char c= *str;
	int cpt=0;
	while(c!='\0'){
		cpt++;
		str++;
		c=*str;
	}
	return cpt;
}

int main(){
	char name[]= {'H','e','l','l','o','\0'};
	printf("Result with strlen: %lu\n",strlen(name));
	printf("Result with strlenPoint: %d\n",strlenPoint(name));
}