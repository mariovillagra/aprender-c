/***********************************************************
 * term -- Programa para demostrar el uso de variables     *
 *         Meramente didactico                            *
 *                                                         *
 * Propocito: Realiza operaciones matematicas con una      *
 * variables y muestra sus resultados                      *
 *                                                         *
 * Uso: Correr el programa                                 *
 **********************************************************/

 #include <stdio.h>

 int term;    /* term es usado en dos expreciones */

 int main(){
   /* Da valor a la variable term */
   term = 3 * 5;

   /* luego realiza una multiplicacion en cada
   printf para mostrar en pantalla */
   printf("Dos veces %d es: %d\n", term, 2*term);
   printf("Tres veces %d es: %d\n", term, 3*term);
   return (0);
 }
