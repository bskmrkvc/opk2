#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void nalazi_indekse(int br_ind[], int god_upi[], int n, int trazGodUpis, int *koliko){
	
	int tempNiz[n], i, j, k, temp;
	
	koliko = &j;
	
	for(i = 0; i < n; i++){
		if(god_upi[i] == trazGodUpis){
			tempNiz[j++] = br_ind[i];
		}
	}
	
	//sortiranje
	for(i = 0; i < j-1; i++){
		for(k = i; k < j; k++){
			if(tempNiz[i] > tempNiz[k]){
				temp = tempNiz[i];
				tempNiz[i] = tempNiz[k];
				tempNiz[k] = temp;
			}
		}
	}
	
	//sortirani ispis
	printf("\nSortiran ispis:\n");
	for(i = 0; i < j; i++){
		printf("\nIndeks: %d, godina upisa: 20%d\n", tempNiz[i], trazGodUpis);
	}
	
	printf("\nTrazenih studenta sa tom godinom ima: %d\n", *koliko);
}

int main(){
	int trazenaGodinaUpisa, *cnt, br_indeksa[20], god_upisa[20], i, n, brIndeksaTemp, godUpisaTemp, db, sb, jb, dg, jg;
	char temp[7];
	
	do{
		printf("Unesite broj studenata: ");
		scanf("%d", &n);
		if(n < 1 || n > 20) printf("\nGreska!!!\n");
	}while(n < 1 || n > 20);
	
	fflush(stdin);
	
	for(i = 0; i < n; i++){
		printf("\nUnesite informacije o %d. studentu: \n", i+1);
		gets(temp);
		fflush(stdin);

		sb = temp[0] - '0';
		db = temp[1] - '0';
		jb = temp[2] - '0';
		dg = temp[4] - '0';
		jg = temp[5] - '0';
		
		brIndeksaTemp = sb * 100 + db * 10 + jb;
		godUpisaTemp = dg * 10 + jg;
		
		br_indeksa[i] = brIndeksaTemp;
		god_upisa[i] = godUpisaTemp;
	}	
	
	printf("\nUnesite trazenu godinu upisa:\n");
	scanf("%d", &trazenaGodinaUpisa);

	nalazi_indekse(br_indeksa, god_upisa, n, trazenaGodinaUpisa, cnt);
	
	return 0;
}
