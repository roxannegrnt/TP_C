#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Chaine{
	char *c;
	};
	
char* Replace(struct Chaine *p, char e){
	//char ch= *(p->c);
	if (*(p->c) == '\0')
        return "Error";
    char *src = p->c;
    char *end = src + strlen(src) - 1;
	char *sentence=malloc (sizeof (src)+1);
    while (end > src)
    {
		if (*end==' ') {
			*end=e;
		}
		if (*src==' ') {
			*src=e;
		}
        char t = *end;
        *end-- = *src;
        *src++ = t;
    }
	sentence=p->c;
	printf("%s\n", p->c);
	return sentence;
	free(sentence);
}

int main(){
	struct Chaine Chaine1;
	strcpy(Chaine1.c, "I live in Nebraska");
	char *result=Replace(&Chaine1,'.');
	printf("%s\n", result);
	return 0;
}