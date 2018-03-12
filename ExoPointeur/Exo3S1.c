#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Chaine{
	char *c;
	};
	
void Replace(struct Chaine *p, char e){
	char ch= *(p->c);
	while(ch!='\0'){
		ch= *(p->c);
		if (ch==' '){
			*(p->c)= e;
			ch= *(p->c);
		}
		printf("%c",ch);
		p->c++;
	}
	printf("\n");
}

int main(){
	struct Chaine Chaine1;
	strcpy(Chaine1.c, "I live in Nebraska");
	Replace(&Chaine1,'.');
	return 0;
}