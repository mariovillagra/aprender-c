/**************************************************
 * str -- La funcion printf usa la conversion %s
 * para para imprimir variables del tipo string
 *************************************************/

 #include <stdio.h>
 /* librerias para string */
 #include <string.h>

 char nombre[30]; /* Nombre de cualquiere */

 int main() {
   strcpy(nombre, "Mario"); /* Inicializa el nombre */
   printf("El nombre es %s\n", nombre);
   return (0);
 }
