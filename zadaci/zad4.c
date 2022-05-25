#include<stdio.h>

int main(){
	
	int x[100], n, max, min, redmax, redmin, i;
	
	do{
		printf("\nUnesite duzinu niza: \n");
		scanf("%d", &n);
		if(n<0 || n>100) printf("\nGreska!\n");
	}while(n<0 || n>100);
	
	printf("\nUnesite niz:\n");
	for(i = 0; i < n; i++){
		printf("Unesite %d. clan: ", i+1);
		scanf("%d", &x[i]);
	}
	
	max = min = x[0];
	
	for(i = 0 ; i < n; i++){
		if(x[i] > max) max = x[i];
		if(x[i] < min) min = x[i];
	}
	
	for(i = 0; i < n; i++){
		if(x[i] == min){
			redmin = i;
			break;
		}
	}
	
	for(i = n-1; i >= 0; i--){
		if(x[i] == max){
			redmax = i;
			break;
		}
	}
	
	printf("\nNajveci element: %d\nNjegov redni broj: %d\nNajmanji element: %d\nNjegov redni broj: %d", max, redmax+1, min, redmin+1);	
	
		
	return 0;
}
