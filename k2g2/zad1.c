#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main(){
	
	int i, n, k = 3, m=0, r=0;
	float x[20], y[20], srVrX=0, srVrY=0, z[200], w[200];
	
	do{
		printf("Unesite broj elemenata: ");
		scanf("%d", &n);
		if(n < 1 || n > 20) printf("\nGreska!!!\n");
	}while(n < 1 || n > 20);
	
	fflush(stdin);
	//ucitavanje
	for(i = 0; i < n; i++){
		printf("Unesite %d. element niza x: ", i+1);
		scanf("%f", x+i);
		z[m++] = x[i];
		srVrX += x[i];
	}
	for(i = 0; i < n; i++){
		printf("Unesite %d. element niza y: ", i+1);
		scanf("%f", y+i);
		z[m++] = y[i];
		srVrY += y[i];
	}
		
	w[r++] = (srVrX + srVrY) / (n*2);
	
	//prikaz
	for(i = 0; i < n; i++){
		printf("\n  | %.1f ---- %.1f |\n ", x[i], y[i]);
		
	}
	
	printf("\nSrednja vrednost niza x: %.1f\nSrednja vrednost niza y: %.1f\n", srVrX/n, srVrY/n);
	
	srVrX=0;
	srVrY=0;
	//deo pod d
	while(k > 0){
		printf("\n%d. iteracija\n", k);
		do{
			printf("Unesite broj elemenata: ");
			scanf("%d", &n);
			if(n < 1 || n > 20) printf("\nGreska!!!\n");
		}while(n < 1 || n > 20);
		
		for(i = 0; i < n; i++){
			printf("Unesite %d. element niza x: ", i+1);
			scanf("%f", x+i);
			z[m++] = x[i];
			srVrX += x[i];
		}
		for(i = 0; i < n; i++){
			printf("Unesite %d. element niza y: ", i+1);
			scanf("%f", y+i);
			z[m++] = y[i];
			srVrY += y[i];
		}
		
		w[r++] = (srVrX + srVrY) / (n*2);
		
		srVrX=0;
		srVrY=0;
		k--;
	}
	
	
	//niz z
	printf("\nNIZ Z:\n");
	for(i = 0; i < m; i++){
		printf("\n  | %.1f |  \n ", z[i]);
	}
	
	//niz w
	printf("\nNIZ W:\n");
	for(i = 0; i < r; i++){
		printf("\n  | %.1f |  \n ", w[i]);
	}
	
	return 0;
	
}
