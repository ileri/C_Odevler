#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int compress(){
  int sayi;
  char harf,c;
  for(c = getchar(); c != EOF ; ){
    harf = c;
    sayi = 1;
    for(c = getchar() ; c == harf ; c = getchar())
      sayi++;
    if(c != EOF)
      printf("%d%c", sayi, harf);
  }
}
int extract(){
  int i,sayi;
  char c;
  for(c = getchar(); c != EOF; c = getchar()){
    if(c-'0' >= 1 && c-'0'<=9){
      sayi = c-'0';
      for(c = getchar(); c-'0' >= 0 && c-'0'<=9; c = getchar()){
        sayi *= 10;
        sayi += c-'0';
      }
      for(i = 0 ; i<sayi ; i++)
        printf("%c",c);
    }
  }
}
int main(int argc,char* argv[]){
  int komut = atoi(argv[1]);
  if(komut == 1)
    compress();
  else if(komut == 0)
    extract();
  return 0;
}