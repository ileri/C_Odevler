#include <stdio.h>
#include <stdlib.h>
unsigned long faktor(int sayi){
  unsigned long sonuc = 1;
  while(sayi>0){
    sonuc *= sayi;
    --sayi;
  }
  return sonuc;
}
int permutasyon(int ust,int alt){
  unsigned long ust_f, alt_f,fark_f,fark,perm;
  if(ust == 0 || alt == 0){
    perm = 1;
  }else{
    fark = ust-alt;
    ust_f = faktor(ust);
    alt_f = faktor(alt);
    fark_f = faktor(fark);
    perm = (ust_f)/(alt_f*fark_f);
  }
  return perm;
}
int main(int argc, char *argv[]){
  int i,j,satir,sira;
  unsigned long sonuc;
  int basamak_sayisi = atoi(argv[1]);
  i = basamak_sayisi;
    for(satir = 0; satir < basamak_sayisi; satir++, --i){
      for(j = 0; j<i+1 ; j++)
        printf(" ");
      for(sira = 0; sira<satir+1; sira++){
        sonuc = permutasyon(satir,sira);
        printf("%ld ", sonuc);
      }
      printf("\n");
    }
  return 0;
}