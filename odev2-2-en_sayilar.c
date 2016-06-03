#include <stdio.h>
int main(){
	int girilen,en_buyuk,en_kucuk;
	printf("Sayi giriniz: ");
	scanf("%d", &girilen);
	en_buyuk = girilen;
	en_kucuk = girilen;
	while(girilen != 0){
		printf("Sayi giriniz: ");
		scanf("%d", &girilen);
			if(girilen<en_kucuk){
				en_kucuk = girilen;
			}
			if(girilen>en_buyuk){
				en_buyuk = girilen;
			}
	}
	printf("En buyuk sayiniz: %d , en kucuk sayiniz: %d", en_buyuk, en_kucuk);
	return 0;
}