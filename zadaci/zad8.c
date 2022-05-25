#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define MAX 100

int main(){
	int i, j, k, n, nadjenStop = 0, gotovo = 0, cnt=0, duzina = 0, indeksNajduze, najduza;
	char str[100][100], unos[100];
	
	do{
		printf("Unesite broj reci: ");
		scanf("%d", &n);
		if(n < 1 || n > 100) printf("\nGreska!!!\n");
	}while(n < 1 || n > 100);
	
	fflush(stdin);
	
	for(i = 0; i < n; i++){
		printf("Unesite %d. rec: ", i+1);
		gets(unos);
		
		if(nadjenStop) continue;
		
		if(unos == 'stop') nadjenStop = 1;
		
		for(j = 0; j < strlen(unos); j++){
			str[i][j] = unos[j];
		}
		str[i][j] = '\0';
	}
	printf("\nUneli ste: \n");
	for(i = 0; i < n; i++){
		for(j = 0; j < strlen(str[i]); j++) printf("%c", str[i][j]);
		puts("\n");
	}
	
	najduza = strlen(str[0]);
	
	for(i = 0; i < n; i++){	
		duzina = strlen(str[i]);
		
		if(duzina > 3 && duzina < 10) cnt++;
		
		if(duzina > najduza){
			indeksNajduze = i;
			najduza = str[i];
		}
	}
	
	printf("\nBroj reci duzine od 3 - 10: %d\n", cnt);
	printf("Najduza rec: ");
	for(i = 0; i < strlen(str[indeksNajduze]); i++){
		printf("%c", str[indeksNajduze][i]);
	}
	
	return 0;
}
