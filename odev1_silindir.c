#include <stdio.h>
int main(){
	int yaricap, yukseklik, hacim, yuzey_alani,pi;
	pi = 3;
	printf ("Lutfen silindirin yaricap(r) degerini giriniz: ");
	scanf  ("%d", &yaricap);
	printf ("Lutfen silindirin yukseklik(h) degerini giriniz: ");
	scanf ("%d", &yukseklik);
	hacim = (pi*yaricap*yaricap*yukseklik);
	yuzey_alani = (2*pi*yaricap*yukseklik);
	printf ("Silindirin Alani %d ve Hacmi %d 'dir.\n", yuzey_alani, hacim);
	return 0;
}