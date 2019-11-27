#include<stdio.h>
#include<math.h>
#define pi 4.*atan(1.)

/*Código que calcula la integral de una función en el intervalo [a,b] 
por el método del rectángulo con particiones n=50,100,150,200*/

/*
++Funciones que queremos calcular. Las defino al principio para que puedan correr el código y ver en cuál se equivocaron.
Sustitúyanlas en la línea en la que les indico.
  fx=x;   
  fx=(3./2.)*pow(x,2.)+1./2.;
  fx=pow(x,3.)/2+10.;
  fx=cos(2.*x);
  fx=sin(1/(1+x));  
*/

int main()
{
  int i;                  //esta variable sirve para etiquetar las particiones
  int n;                  //particiones del intervalo
  double a=0.;            //límite inferior (empieza en cero)
  double b=pi/2.;         //límite superior (pi/2 según la tarea)
  double x;               //valor de la base del rectángulo i-ésimo
  double fx;              //altura del rectángulo i-ésimo
  double dx=(b-a)/n;      //base de los rectángulos (para todos es la misma) 
  double r;               //resultado 
  
  for(n=50;n<=200;n+=50)  //Este ciclo es para definir las particiones. Empieza en 50 y acaba en 200. Avanza de 50 en 50.
    {
      r=0;
      dx=(b-a)/n;         //En cada partición se reinician esta variables

      for(i=a;i<=n;i++)   //aplicación del método del rectángulo
	{
	  x=a+i*dx;       //base del iésimo rectángulo
	  fx=x;           //función que se desea calcular (sustituyan las del inicio aquí)
	  r+=dx*fx;       //Se realiza la suma del área de todos los rectángulos.
	}
      printf("%i  %.10lf\n",n,r);
    }
  return 0;
}