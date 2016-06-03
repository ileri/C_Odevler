#include <stdio.h>
#include <string.h>
int main(int argc,char* argv[]){
  char* yasakli = argv[1];
  char c;
  int i,var_mi = 0;
  for(c = getchar(); c != EOF ; c = getchar()){
    if(c == yasakli[0]){
      for(i = 0 ; i<strlen(yasakli) ; i++, c = getchar()){
        if(yasakli[i] == c){
          var_mi = 1;
        }else{
          var_mi = 0;
          break;
        }
      }
    }
    if(var_mi){
      printf("Metniniz yasaklı kelime içeriyor!\n");
      return 0;
    }
  }
  return 0;
}
