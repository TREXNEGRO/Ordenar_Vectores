//BIBLIOTECAS
#include<stdio.h>

//DECLARACION DE FUNCIONES
void ingresarValores(float valores[], int n);
void imprimirValores(float valores[], int n);
void ordenarValores(float valores[], int n);



//CUERPO
int main(){
	//VARIABLES INTERNAS
	unsigned char i = 0, j = 0, k = 0;
	int n = 0, flag = 1;


	//CICLOS - LEER Y ESCRIBIR - VALIDACION
	while(flag == 1){
		printf("Ingrese la nension: ");
		scanf("%d",&n);
		if(n <=0 || n>10){
			printf("Error: Numero no valido!\n\n");
		}else{
			flag = 0;
		}
	}
	//LO IMPORTANTE XDDD
	float valores[n];
	printf("Ingreso de valores:\n");
	ingresarValores(valores, n);
	printf("\nVector ingresado:\n");
	imprimirValores(valores, n);
	printf("\nVector ordenado:\n");
	ordenarValores(valores, n);
	imprimirValores(valores, n);
	return 0;
}


//DESCRPCION DE FUNCIONES
void ingresarValores(float valores[], int n){
	int i = 0;
	for(; i<n; i++){
		printf("Valor[%d]: ",i);
		scanf("%f",&valores[i]);
	}
}


void imprimirValores(float valores[], int n){
	int i=0;
	for(; i<n; i++){
		printf("[%.2f] ",valores[i]);
	}
}


void ordenarValores(float valores[], int n){
	int i = 0, j = 0,  men, aux, pos;
	i=0; men = valores[0];
	for(; i<n; i++){
		for(j=i; j<n; j++){
			if(j == i){
				men = valores[i];
				pos = i;
			}
			if(valores[j] < men){
				men = valores[j];
				pos = j;
			}
		}
		aux = valores[i];
		valores[i] = men;
		valores[pos] = aux;
		
	}
	for(; i<n; i++){
		printf("[%.2f] ",valores[i]);
	}
}
