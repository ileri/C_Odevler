#include <stdio.h>
#include <math.h>
int main(){
  int i,c;
  unsigned long sayi = 0,us_toplam,gecici;
  for(c = getchar(); c != EOF; i=0, c = getchar()){
    for( ; c != '\n' ; i++, c = getchar()){
      sayi *= 10;
      sayi += c - '0';
    }
    us_toplam = 0;
    gecici = sayi;
    while(gecici){
      us_toplam += pow((gecici % 10), i);
      gecici /= 10;
    }
    if(us_toplam == sayi){
      printf("%ld\tArmstrong bir sayıdır.\n",sayi);
    }else{
      printf("%ld\tArmstrong değildir.\n",sayi);
    }
    sayi = 0;
  }
  return 0;
}
