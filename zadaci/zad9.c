
/*
		Fali ono crvenim slovima jer ne kontam sta traze
*/


#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define MAX 100

int main(){
	int i, j, k, n, suma=0;
	char str[10][100];
	
	do{
		printf("Unesite broj redova teksta: ");
		scanf("%d", &n);
		if(n < 1 || n > 10) printf("\nGreska!!!\n");
	}while(n < 1 || n > 10);
	
	fflush(stdin);
	
	for(i = 0; i < n; i++){
		printf("\nUnesite %d. red teksta: \n", i+1);
		gets(str[i]);
	}

	printf("\nUneli ste: \n");
	for(i = 0; i < n; i++){
		for(j = 0; j < strlen(str[i]); j++) printf("%c", str[i][j]);
		puts("\n");
	}
	
	for(i = 0; i < n; i++){
		suma += strlen(str[i]);
	}
	printf("\nSrednja duzina zadatih redova: %.2f\n", (suma*1.0/n));
	
	return 0;
}
