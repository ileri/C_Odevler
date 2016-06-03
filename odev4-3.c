#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
  FILE* fp = NULL;
  int nfiles = --argc;
  int argidx = 1;
  char* currfile = "1";
  char c;
  /* kelime sayısı, satır sayısı, karakter sayısı */
  unsigned long nw = 0, nl = 0, nc = 0;
  if (nfiles == 0)
  {
    fp = stdin; /* standart girdi */
    nfiles++;
  }
  else /* set to first */
  {
    currfile = argv[argidx++];
    fp = fopen(currfile,"r");
  }
  while(nfiles>0)
  {
    if(fp == NULL)
    {
      fprintf(stderr, " Dosya okunamadı ! \n ");
      exit( -1 );
    }
    nc = nw = nl = 0;
    while((c = getc(fp)) != EOF){
      switch(c){
        case '\n' :
          nl++; nw++; nc++;
          break;
        case ' ' :
          nw++; nc++;
          break;
        default:
          nc++;
      }
    }
    printf(" %ld  %ld %ld %s \n", nl, nw, nc, currfile);
    /* varsa sonraki dosya */
    if( nfiles > 0)
    {
      currfile = argv[argidx++];
      fp = fopen(currfile, "r");
    }
    return 0;
  }
}
