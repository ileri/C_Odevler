#include <stdio.h>
#include <string.h>
#include <ctype.h>
void yaz();
void donustur();
int main(){
	donustur();
	return 0;
}
void donustur(){
	int i,c;
	char komut[5],metin[255];
	for(c = getchar(); c != EOF ; ){
		if (c == '#'){
			i = 0;
			for( ; !isspace(c); c = getchar()){
				komut[i] = c;
				i++;
			}
			komut[i] = '\0';
		}
		for(i = 0; c != '#' && c != EOF; c = getchar()){
			metin[i] = c;
			i++;
		}
	metin[i] = '\0';
	yaz(komut,metin);
	}
}
void yaz(char *komut,char *metin){
	if(!strcmp(komut,"#p"))
		printf("<p>%s</p>",metin);
	else if(!strcmp(komut,"#h1"))
		printf("<h1>%s</h1>",metin);
	else if(!strcmp(komut,"#h2"))
		printf("<h2>%s</h2>",metin);
	else if(!strcmp(komut,"#h3"))
		printf("<h3>%s</h3>",metin);
	else if(!strcmp(komut,"#y"))
		printf("<!-- %s -->",metin);
	else if(!strcmp(komut,"#c"))
		printf("<center> %s </center>",metin);
	else if(!strcmp(komut,"#b"))
		printf("<b>%s</b>",metin);
	else if(!strcmp(komut,"#k"))
		printf("<small>%s</small>",metin);
	else
		printf("%s%s",komut,metin);
}