
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

void FillRand(int tab[],int n){
	srand(time(NULL));
	for(int i=0; i<n; i++){
		tab[i]= rand()%10;
	}
}

int Min(int tab[],int n){
	int min= tab[0];
	for(int i=1; i<n; i++){
		if (tab[i]< min){
			min= tab[i];
		}
	}
	return min;
}
void ReplaceMax(int tab[],int n){
	int max= tab[0];
	int pos= 0;
	int last=tab[n-1];
	for(int i=1; i<n; i++){
		if (tab[i] > max){
			max= tab[i];
			pos= i;
		}
	}
	//Place le plus grand élément en fin de tableau
	tab[n-1]= max;
	//Place l'ancien dernière élément à la place du max
	tab[pos]= last;
}
void Search(int tab[],int n){
	int input= 0;
	bool in= false;
	printf("Please enter an integer between 0 and 10 :\n");
	if (scanf("%d",&input)!=1){
		printf("syntax error!\n");
	}
	else{
		for(int i=0; i<n; i++){
			if((tab[i] = input)){ 
				in= true;
			}
		}
		if (in){
			printf("This number is in the array\n");
		}
		else{
			printf("This number isn't in the array\n");
		}
		
	}
}
double Average(int tab[], int n){
	int somme=0;
	for(int i=0; i<n; i++){
		somme+=tab[i];
	}
	return (double)somme/n;
}
double Variance(int tab[], int n){
	int somme=0;
	int average= Average(tab,n);
	double constante= (double)1/n;
	for(int i=0; i<n; i++){
		
		somme+=pow((tab[i]-average),2);
	}
	return constante*(double)somme;
}
void sort(int tab[], int n){
	 int i, j, min_idx, temp;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (tab[j] < tab[min_idx])
            min_idx = j;
 
        // Swap the found minimum element with the first element
		temp= tab[min_idx];
		tab[min_idx]=tab[i];
		tab[i]= temp;
    }
}
int median(int tab[], int n){
	int median;
	sort(tab,n);
	if (n % 2 == 0){
		median= (tab[n/2] + tab[n/2 + 1])/2;
	}
	else{
		median= tab[(n-1)/2];
	}
	return median;
}
int main() {
	const int SIZE = 10;
	int tab[SIZE];
	FillRand(tab,SIZE);
	for(int i=0; i<SIZE; i++){
		printf("%d\n", tab[i]);
	}
	Search(tab,SIZE);
	
	
    
}

