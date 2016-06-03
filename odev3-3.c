#include <stdio.h>
int main(){
  float alinan,mb_boyut;
  enum boyutlar{
    bit = 1,
    byte = 8*bit,
    kilobyte = 1024*byte,
    megabyte = 1024*kilobyte,
  };
  printf("Dosya boyutunu bit cinsinden giriniz: ");
  scanf("%f", &alinan);
  mb_boyut=(alinan/megabyte);
  printf("%.3f\n", mb_boyut);
  return 0;
}
