#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void nalazi_datume(int dani[], int meseci[], int n, int trazeniMesec, int *cnt){
	
	int tempNiz[n], i, j=0, k, temp;
	
	cnt = &j;
	
	for(i = 0; i < n; i++){
		if(meseci[i] == trazeniMesec){
			tempNiz[j++] = dani[i];
		}
	}
	
	//sortiranje
	for(i = 0; i < j-1; i++){
		for(k = i; k < j; k++){
			if(tempNiz[i] < tempNiz[k]){
				temp = tempNiz[i];
				tempNiz[i] = tempNiz[k];
				tempNiz[k] = temp;
			}
		}
	}
	
	//sortirani ispis
	printf("\nSortiran ispis:\n");
	for(i = 0; i < j; i++){
		printf("\nDan: %d, mesec: %d\n", tempNiz[i], trazeniMesec);
	}
	
	printf("\nTrazenih dana u tom mesecu: %d\n", *cnt);
	
}

int main(){
	int trazeniMesec, *cnt, dani[10], meseci[10], i, n, daniTemp, meseciTemp, dd, jd, dm, jm;
	char temp[7];
	
	do{
		printf("Unesite broj datuma: ");
		scanf("%d", &n);
		if(n < 1 || n > 10) printf("\nGreska!!!\n");
	}while(n < 1 || n > 10);
	
	fflush(stdin);
	
	for(i = 0; i < n; i++){
		printf("\nUnesite informacije %d. datum: \n", i+1);
		gets(temp);
		fflush(stdin);

		dd = temp[0] - '0';
		jd = temp[1] - '0';
		dm = temp[3] - '0';
		jm = temp[4] - '0';
		
		daniTemp = dd * 10 + jd;
		meseciTemp = dm * 10 + jm;
		
		dani[i] = daniTemp;
		meseci[i] = meseciTemp;
	}	
	
	printf("\nUnesite trazeni mesec:\n");
	scanf("%d", &trazeniMesec);

	nalazi_datume(dani, meseci, n, trazeniMesec, cnt);
	
	return 0;
}
