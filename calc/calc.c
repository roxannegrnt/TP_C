
#include <stdio.h>
#include <stdlib.h>

int main() {
    char op='+';
    int nb1=0;
    int nb2=0;
    int result=0;
    printf("Which operation? (+ or *)\n");
    scanf("%c", &op);
    printf("Please enter 2 integers :");
    if (scanf("%d %d",&nb1, &nb2)!=2){
		printf("syntax error!\n");
	}
	else{
       switch (op)
        {
        case '+': 
            result= nb1+nb2;
            printf("Their sum is %d\n",result);
            break;
        case '*': 
            result=nb1*nb2;
            printf("Their product is %d\n",result);
            break;
        default:
            printf("Unknown operation\n");        
        } 
	}
    return 0;
}

