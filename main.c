#include <stdio.h>
#include <stdlib.h>
#define MAX 12

int seguidores;
char *mensaje2=NULL;
static int maxValue;
char *mensaje="HOLA MUNDO";

int main(int argc, char **argv){
	int i;
	int j=5;
	printf("%s", mensaje);
	mensaje2=(char *)malloc(sizeof(char) * 20);
	if (mensaje2 == NULL) {
		printf("Error: sin memoria\n");
		return 1;
	}
	return 0;
}