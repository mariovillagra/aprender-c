/****************************************************
 * double -- Usa la funcion "sscanf" para obtener
 * y duplicar un numero igresado por el usuario
 ----------------------------------------------------
 * sscanf -- String.scanf
 ----------------------------------------------------
 ***************************************************/
 #include <stdio.h>

 char linea[100]; /* linea de entrada */
 int valor; /* el valor a duplicar */

 int main(){
   printf("Ingrese un valor: ");

   fgets(linea, sizeof(linea), stdin); /* lee el valor ingresado, como string */
   /*convierte el string gardado en "linea" a int y lo guarda en "valor" */
   sscanf(linea, "%d", &valor);

   printf("Dos veces %d es %d\n", valor, valor * 2);
   return (0);
 }
