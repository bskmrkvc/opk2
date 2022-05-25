#include<stdio.h>

int main(){
	
	int x[10], y[10], z[10], w[20], n, a, b, i, j=0, k=0;
	
	do{
		printf("\nUnesite duzinu niza: \n");
		scanf("%d", &n);
		if(n<0 || n>10) printf("\nGreska!\n");
	}while(n<0 || n>10);
	
	printf("\nUnesite niz:\n");
	for(i = 0; i < n; i++){
		printf("Unesite %d. clan: ", i+1);
		scanf("%d", &x[i]);
	}
		
	printf("\nUnesite dva cela broja a i b: \n");
	scanf("%d%d", &a, &b);
	
	for(i = 0; i < n; i++){
		if(x[i] > a && x[i] < b){
			y[j++] = x[i];
		}
		else{
			z[k++] = x[i];
		}
	}
	
	for(i = 0; i < j; i++){
		w[i] = y[i];
	}
	
	for(i = 0 ; i < k; i++){
		w[i+j] = z[i];
	}
	
	printf("\nNiz Y: \n");
	for(i = 0 ; i < j; i++){
		printf("%d ", y[i]);
	}
	printf("\nNiz Z: \n");
	for(i = 0 ; i < k; i++){
		printf("%d ", z[i]);
	}
	printf("\nNiz W: \n");
	for(i = 0 ; i < j+k; i++){
		printf("%d ", w[i]);
	}
		
	return 0;
}
