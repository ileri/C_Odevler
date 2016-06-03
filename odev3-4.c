#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, void *argv[]){
  int a1,a2,i;
  float sonuc = 0;
  a1 = atoi(argv[1]);
  a2 = atoi(argv[3]);
  if(strcmp(argv[2], "+") == 0){
    sonuc = a1 + a2;
  }else if(strcmp(argv[2], "-") == 0){
    sonuc = a1 - a2;
  }else if(strcmp(argv[2], "x") == 0){
    sonuc = a1 * a2;
  }else if(strcmp(argv[2], "/") == 0){
    sonuc = a1 / a2;
  }
  
  for(i = 4; i<argc ; i++){
    if(strcmp(argv[i], "+") == 0){
      sonuc = sonuc + atoi(argv[i+1]);
    }else if(strcmp(argv[i], "-") == 0){
      sonuc = sonuc-atoi(argv[i+1]);
    }else if(strcmp(argv[i], "x") == 0){
      sonuc = sonuc * atoi(argv[i+1]);
    }else if(strcmp(argv[i], "/") == 0){
      sonuc = sonuc / atoi(argv[i+1]);
    }
  }
  printf("Sonuç: %.2f\n", sonuc);
  return 0;
}