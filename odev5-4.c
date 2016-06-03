#include <stdio.h>
int main(){
  int buyuk,kucuk,bosluk,rakam,diger;
  buyuk = kucuk = bosluk = rakam = diger = 0;
  char c;
  for(c = getchar(); c!= EOF ; c = getchar()){
    if(c >= 'a' && c<='z'){
      putchar(c);
      kucuk++;
    }else if(c >= 'A' && c<='Z'){
      putchar(c);
      buyuk++;
    }else if(c >='0' && c <= '9'){
      rakam++;
    }else if(c == ' ' || c == '\t'){
      bosluk++;
    }else if(c == '\n'){
      putchar(c);
    }else{
      diger++;
    }
  }
  printf("Küçük harf sayısı: %d\nBüyük harf sayısı: %d\n",kucuk,buyuk);
  printf("Boşluk sayısı: %d\nRakam sayısı: %d\nDiğer karakter sayısı: %d\n",bosluk,rakam,diger);
  return 0;
}
