#include<stdio.h>

int main(){
	
	int a[20], b[20], c[20], n, i, j=0, k=0;
	
	do{
		printf("\nUnesite duzinu niza: \n");
		scanf("%d", &n);
		if(n<0 || n>20) printf("\nGreska!\n");
	}while(n<0 || n>20);
	
	printf("\nUnesite niz:\n");
	for(i = 0; i < n; i++){
		printf("Unesite %d. clan: ", i+1);
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i < n; i++){
		if(i % 2)
		{
			c[k++] = a[i];
		}
		else
		{
			b[j++] = a[i];
		}
	}
	
	printf("\nPrvi niz: \n");
	for(i = 0 ; i < j; i++){
		printf("%d ", b[i]);
	}
	printf("\nDrugi niz: \n");
	for(i = 0 ; i < k; i++){
		printf("%d ", c[i]);
	}	
	return 0;
}
