#include <stdio.h>
#include <math.h>
int main(){
	int i=1;
	double t;
	int menu;
	float x,y;
	int fact=1;
	int n;
	printf("Opciones:\n 1.Calcular conjunto de puntos en un MCU.\n 2.Calcular el factorial de un número.\n");
	scanf("%d",&menu);
	switch(menu){
		case 1:
			while (t <= 6.283185){
				printf("(%f,%f)\n",x,y);
				x=cos(t);
				y=sin(t);
				t=t+0.1;
			}
			break;
		case 2:
			printf("Introduce un numero:\n");
			scanf("%d",&n);
			while (i <= n){
				fact=fact*i;
				i=i+1;
			}
			printf("El factorial es %d \n",fact);
			break;
		default:
			printf("Opcion no valida\n");
			break;
	}
}

