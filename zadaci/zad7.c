#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define MAX 100

int main(){
	int i, j, k, n, nadjenSpejs = 0, nadjenStop = 0, gotovo = 0, cnt=0, duzina = 0, spejsIndeks;
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
	
	
	for(i = 0; i < n; i++){	
		duzina = strlen(str[i]);
		if(str[i][duzina - 1] == ' '){
			for(j=0; j < duzina; j++){
				if(nadjenSpejs) continue;
				if(str[i][j] == ' '){
					nadjenSpejs = 1;
					spejsIndeks = j;
				}
			}
			if(str[i][spejsIndeks - 1] == str[i][0]) cnt++;
		}
		else {
			if(str[i][duzina-1] == str[i][0]) cnt++;
		}
	}
	
	printf("\nBroj reci sa istim pocetnim i poslednjim slovom: %d\n", cnt);
	
	return 0;
}

    
