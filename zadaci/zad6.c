#include <stdio.h>
#include <string.h>
#include<ctype.h>

#define MAX 100

int main(){
	
	char tekstUnos[500];
	int i=0, cntE=0, cntEdu=0, n;
	
	
	printf("Unesite neki tekst: ");
	gets(tekstUnos);
	
	n=strlen(tekstUnos);
	
	for(i = 0; i < n; i++){
		if(tolower(tekstUnos[i]) == 'e'){
			if(tekstUnos[i-1] == ' ' || i-1 == -1){
				if(tolower(tekstUnos[i+1])== 'd' && tolower(tekstUnos[i+2])== 'u') cntEdu++;
				cntE++;
			}	
		}
		
		
		if(tolower(tekstUnos[i]) == 's')
			if(tekstUnos[i-1] == ' ' || i-1 == -1){
				continue;
			}
			else{
				if(tolower(tekstUnos[i+1]) == 't')
					if(tolower(tekstUnos[i+2]) == 'o')
						if(tolower(tekstUnos[i+3]) == 'p')
							if(tekstUnos[i+4] == ' '){
								printf("Broj reci na e: %d\nBroj reci na edu: %d\n", cntE, cntEdu);
								return 0;
							}
			}
	}
    
    printf("Broj reci na e: %d\nBroj reci na edu: %d\n", cntE, cntEdu);
	return 0;
}
