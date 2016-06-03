#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	int a,b,c,kok1,kok2,delta,kok_delta;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = atoi(argv[3]);
	delta = ((pow(b,2))-(4*a*c));
	if(delta>0){
		kok_delta =sqrt(delta);
		kok1 = ((-b-kok_delta)/2*a);
		kok2 = ((-b+kok_delta)/2*a);
		printf("f(x) = %dx² + %dx + %d denkleminizin kokleri %d ve %d dir.", a,b,c,kok1,kok2);
	}
	else if(delta==0){
		kok_delta =sqrt(delta);
		kok1 = ((-b-kok_delta)/2*a);
		printf("f(x) = %dx² + %dx + %d denkleminizin iki cakisik koku var ve %d  dir.", a,b,c,kok1);
	}
	else{
		printf("Denkleminizin gercek koku yoktur.");
	}
	return 0;
}