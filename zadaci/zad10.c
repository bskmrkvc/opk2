#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define MAX 100

int main(){
	int i, j, k, n, suma=0;
	char str[10][100], temp, tempred[100];
	
	do{
		printf("Unesite broj redova teksta: ");
		scanf("%d", &n);
		if(n < 1 || n > 10) printf("\nGreska!!!\n");
	}while(n < 1 || n > 10);
	
	fflush(stdin);
	
	for(i = 0; i < n; i++){
		printf("\nUnesite %d. red teksta: \n", i+1);
		gets(str[i]);
	}

	printf("\nUneli ste: \n");
	for(i = 0; i < n; i++){
		for(j = 0; j < strlen(str[i]); j++) printf("%c", str[i][j]);
		puts("\n");
	}
	
	//sortiranje
	for(i = 0; i < n; i++){
		for(j = 0; j < strlen(str[i]) - 1; j++)
		{
			for(k = j; k < strlen(str[i]); k++)
			{
				if(str[i][j] > str[i][k])
				{
					temp = str[i][j];
					str[i][j] = str[i][k];
					str[i][k] = temp;
				}
			}
		}
	}
	
	printf("\nSortirani redovi teksta: \n");
	for(i = 0; i < n; i++){
		for(j = 0; j < strlen(str[i]); j++) printf("%c", str[i][j]);
		puts("\n");
	}
	
	//invertovanje
	for(i = 0; i < n/2; i++){
		strcpy(tempred, str[i]);
		strcpy(str[i], str[n-i+1]);
		strcpy(str[n-i+1], tempred);
	}
	
	printf("\Obrnuti redovi teksta: \n");
	for(i = 0; i < n; i++){
		for(j = 0; j < strlen(str[i]); j++) printf("%c", str[i][j]);
		puts("\n");
	}
	
	return 0;
}
