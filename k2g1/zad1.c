#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main(){
	
	int i, n, k = 5, m=0, r=0, x[30], z[30], w[6], tempMax, br=0;
	
	do{
		printf("Unesite broj elemenata: ");
		scanf("%d", &n);
		if(n < 1 || n > 30) printf("\nGreska!!!\n");
	}while(n < 1 || n > 30);
	
	fflush(stdin);
	//ucitavanje
	for(i = 0; i < n; i++){
		printf("Unesite %d. element niza x: ", i+1);
		scanf("%d", x+i);
	}
	
	tempMax = x[0];
	for(i = 0; i < n; i++){
		if(x[i] > tempMax) tempMax = x[i];
		
	}
	z[m++] = tempMax;
		
	for(i = 0; i < n; i++){
		if(x[i] == tempMax) br++;
	}
	w[r++] = br;
	
	//prikaz
	for(i = 0; i < n; i++){
		if(i%10 == 0) printf("\n");
		printf("| %d | ", x[i]);
		
	}
	
	tempMax = 0;
	br = 0;
	printf("\n");
	//deo pod d
	while(k > 0){
		printf("\n%d. iteracija\n", k);
		do{
			printf("Unesite broj elemenata: ");
			scanf("%d", &n);
			if(n < 1 || n > 30) printf("\nGreska!!!\n");
		}while(n < 1 || n > 30);
	
		fflush(stdin);
		//ucitavanje
		for(i = 0; i < n; i++){
			printf("Unesite %d. element niza x: ", i+1);
			scanf("%d", x+i);
		}
	
		tempMax = x[0];
		for(i = 0; i < n; i++){
			if(x[i] > tempMax) tempMax = x[i];
			
		}
		z[m++] = tempMax;
			
		for(i = 0; i < n; i++){
			if(x[i] == tempMax) br++;
		}
		w[r++] = br;
		
		
		tempMax = 0;
		br = 0;
		k--;
	}
	
	
	//niz z
	printf("\nNIZ Z:\n");
	for(i = 0; i < m; i++){
		printf("\n  | %d |  \n ", z[i]);
	}
	
	//niz w
	printf("\nNIZ W:\n");
	for(i = 0; i < r; i++){
		printf("\n  | %d |  \n ", w[i]);
	}
	
	return 0;
	
}
