#include <stdio.h>
typedef struct Nodo{
	int Num;
}Nodo;
void fn(){
	printf("programa terminado\n");
}

void main(){
	// Introducción a Malloc
	// Con matrices para dar dimensión y declarando un tipo de dato...
	int size, tops;
	printf("Dame el valor de filas de tu matriz\n");
	scanf("%d",&size);
	printf("Dame el valor de columnas de tu matriz\n");
	scanf("%d",&tops);
	Nodo **E;
	E=malloc(sizeof(Nodo)*size);
	*E=malloc(sizeof(Nodo)*tops);
	atexit(&fn);
	// int size;
	// scanf("%d",&size);
	// printf("size=%d\n",size);
	// int arreglo[size];
	// arreglo[0]=1;
	// printf("arreglo[0]=%d\n",arreglo[0]);
}



