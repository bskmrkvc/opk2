#include<stdio.h>
#include<string.h>


int main(){
	char str[100][100], tekstUnos[100];
	
	int i = 0, j, k, cntIste = 0, n, nadjenSpejs=0;
	int m=0;
	
	
	printf("Unesite neki tekst: ");
	gets(tekstUnos);
	
	n=strlen(tekstUnos);
	
	for(i = 0; i < n; i++){
		if(i == 0){
			for(j = 0; j < n; j++){
				if(nadjenSpejs) continue;
				if(tekstUnos[j] == ' '){
					nadjenSpejs = 1;
					for(k = 0; k < j; k++){
						str[m][k] = tekstUnos[k];
					}	
				}
			}
			str[m][k] = '\0';
			m++;
		}
		else{
			if(tekstUnos[i] == ' '){
				for(j = i+1; j < n; j++){
					if(nadjenSpejs) continue;
					if(tekstUnos[j] == ' '){
						nadjenSpejs = 1;
						for(k = i; k < j; k++){
							str[m][k] = tekstUnos[k];
						}
					}
				}
				str[m][k] = '\0';
				m++;
			}	
		}
		nadjenSpejs = 0;
	}
	
	
	for(i = 0; i < m; i++){
		for(j = 0; j < 15; j++) printf("%c", str[i][j]);
		puts("\n");
	}
	
	return 0;
}
