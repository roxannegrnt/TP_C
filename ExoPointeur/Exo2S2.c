#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copy_str(char **dst, char *src)
{
	size_t size= strlen(src)+1;
	*dst= malloc(size);
	while (*src!='\0')
	{
		**dst= *src;
		src++;
		dst[0]++;
	}
	*dst-=size-1;
	
}


int main()
{
		char *src= "Hello";
		char **dst= malloc(sizeof(src));
		copy_str(dst,src);
		printf("Voici la chaine copiée: %s\n",*dst);
		free(dst);
}
