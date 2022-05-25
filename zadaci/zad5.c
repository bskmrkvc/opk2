#include<stdio.h>
#define MAX 100

int main(){
	
	int x[MAX], n, suma=0, sumaIzmedjuNula = 0, i, j=0, brNula=0, indeksiNula[MAX];
	
	do{
		printf("\nUnesite duzinu niza: \n");
		scanf("%d", &n);
		if(n<0 || n>MAX) printf("\nGreska!\n");
	}while(n<0 || n>MAX);
	
	printf("\nUnesite niz:\n");
	for(i = 0; i < n; i++){
		printf("Unesite %d. clan: ", i+1);
		scanf("%d", &x[i]);
	}
	
	for(i = 0; i < n; i++){
		suma += x[i];
		if(x[i] == 0) {
			brNula++;
			indeksiNula[j++] = i;
		}
	}
	
	printf("\nSuma: %d\n", suma);
	
	if(brNula < 2) printf("\nIma manje od dve nule u nizu!\n");
	else{
		for( i = indeksiNula[0]; i < indeksiNula[1]; i++){
			sumaIzmedjuNula += x[i];
		}
		printf("\nSuma elemenata izmedju prve dve nule: %d\n", sumaIzmedjuNula);
	}
		
	return 0;
}
