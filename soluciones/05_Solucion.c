//Este programa nos permite calcular el producto punto de los vectores con 100 entradas definidos en la tarea 5

#include <stdio.h>
#include <math.h> // Llamámos a la libreria math para poder usar sus funciones
#define  n 100 //Esta linea nos ayuda a definir n=100
#define pi 4*atan(1.) //Definimos pi
 
int main(){
    
    float v[n]; //Definimos el arreglo v
    float u[n]; //Definimos el arreglo u
    int i=1; //Definimos el contador y lo iniciamos en uno
    double result; //Definimos la variable para el resultado 
    while(i<=n){
        
        u[i]=i+3; //Se dan los valores paras las entradas del vector u
        v[i]=sin(pi/(2*(i+1))); //Se dan los valores para las entradas del vector v
        i++;
    }
    i=1;
    while(i<=n){
        result=result+u[i]*v[i]; //calculamos el producto punto de U y V, multiplicamos la entrada iesima de el vector U y V y la sumamos al resultada desde i=1 hasta i=100
        i++;
    }
    printf("%lf\n",result); //se imprime el resultado
    
    return 0;
}
