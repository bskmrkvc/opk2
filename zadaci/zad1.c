#include<stdio.h>


int main(){
	float a[10], b[10], s=0;
	int i, j, n;
	
	printf("\nUnesite duzinu niza: \n");
	scanf("%d", &n);
	
	while(n>1 && n<10){	
		for(i=0; i<n; i++){
			printf("\nUnesite %d. clan prvog niza: ", i+1);
			scanf("%f", &a[i]);	
			printf("\nUnesite %d. clan drugog niza: ", i+1);
			scanf("%f", &b[i]);
		}
		s += a[0/n-1] + b[0/n-1];
		printf("\nS = %f\n", s);
	}
	return 0;
}
