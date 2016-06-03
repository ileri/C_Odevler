#include<stdio.h>
int main(){
  int i,j,palindrom_mu,palindrom_sayisi;
  i = j = palindrom_mu = palindrom_sayisi = 0;
  char c,kelime[25];
  c = getchar();
  while(c != EOF){
    kelime[i] = c;
    i++;
    if(c == ' ' || c == '\n'){
      kelime[i] = '\0';
      if(kelime[i-2] == kelime[j]){
        while(j!= i-2){
          if(kelime[i-2] == kelime[j]){
              palindrom_mu = 1;
          }
          else{
              palindrom_mu = 0;
          }
          i--;
          j++;
        }
      }
      if(palindrom_mu == 1){
        printf("%s kelimesi palindrom!\n", kelime);
        palindrom_sayisi++;
      }
      j = 0;
      i = 0;
      palindrom_mu = 0;
    }
        c = getchar();
  }
  printf("Metnin içinde %d palindrom kelime var.\n",palindrom_sayisi);
}
