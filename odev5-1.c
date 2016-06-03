#include <stdio.h>
#include <string.h>
char sirala(char* kelime){
  int i,j;
  for(i=0; i<strlen(kelime)-1; i++){
    for(j=0; j<strlen(kelime)-1; j++){
      if(kelime[j] > kelime[j+1]){
        kelime[j] += kelime[j+1];
        kelime[j+1] = kelime[j]-kelime[j+1];
        kelime[j] -= kelime[j+1];
      }
    }
  }
  return *kelime;
}
int anagram_kontrol(char* kelime1, char* kelime2){
  int i,anagram_mi=1;
  char yeni1[25],yeni2[25];
  strcpy(yeni1,kelime1);
  strcpy(yeni2,kelime2);
  if(strlen(kelime1) == strlen(kelime2)){
    sirala(yeni1);
    sirala(yeni2);
    for(i=0; i<strlen(kelime1)+1; i++){
      if(yeni1[i] != yeni2[i]){
        anagram_mi = 0;
      }
    }
    return anagram_mi;
  }
  else{
    return 0;
  }
}
int main(){
  char kelime1[25], kelime2[25];
  printf("İlk kelimeyi giriniz :\n");
  scanf("%s", kelime1);
  printf("İkinci kelimeyi giriniz :\n");
  scanf("%s", kelime2);
  if(anagram_kontrol(kelime1,kelime2) == 1){
    printf("\"%s\" ve \"%s\" anagramdır.\n", kelime1, kelime2);
  }else{
    printf("\"%s\" ve \"%s\" anagram değildir.\n", kelime1, kelime2);
  }
  return 0;
}
