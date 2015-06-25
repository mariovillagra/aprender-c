/*********************************************************
 * fib -- Una secuencia Fibonacci                        *
 *                                                       *
 ---------------------------------------------------------
 * Demostracion de control de flujo tipo: while          *
 ********************************************************/
#include <stdio.h>

int numero_anterior; /* El numero Fibonacci previo */
int numero_actual;   /* El numero Fibonacci actual */
int numero_siguiente;/* El numero Fibonacci que sigue */

int main(){
 /* se inicializa las variables */
 numero_anterior = 1;
 numero_actual = 1;

 printf("1\n"); /* Imprime el primer numero */

 while (numero_actual < 100){
   printf("%d\n", numero_actual);
   numero_siguiente = numero_actual + numero_anterior;

   numero_anterior = numero_actual;
   numero_actual = numero_siguiente;
 }

 return (0);
}
