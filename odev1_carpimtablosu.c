#include <stdio.h>
int main(){
	int i, j, satir_sayisi, sutun_sayisi;
	satir_sayisi = 10;
	sutun_sayisi = 10;
	printf("Carpim Tablosu...\n================= \n");
	for(i=1 ; i<=satir_sayisi; i++){
		for(j=1; j<=sutun_sayisi; j++){
			printf("%d \t", (i*j));
		}
		printf("\n");
	}
	return 0;
}