#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
  int komut = atoi(argv[1]);
  int alinan,cikan;
  alinan = getchar();
  while(alinan != EOF){
    if(komut == 1){
      cikan=sifrele(alinan);
    }
    else if(komut == 0){
      cikan=sifrecoz(alinan);
    }
    alinan = getchar();
  }
}
int sifrele(int alinan){
  putchar(alinan+5);
}

int sifrecoz(int alinan){
  putchar(alinan-5);
}