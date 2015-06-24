/***********************************************
 * full -- Toma el primer nombre y el segundo
 * para combinarlos
 **********************************************/

 #include <string.h>
 #include <stdio.h>

 char primero[100]; /* Primer nombre */
 char ultimo[100]; /* Apellido */
 char nombre_completo[200]; /* Nombre completo */

 int main(){
   /* Usamos strcpy para copiar un string dentro
    * dentro de un array del tipo char */
   strcpy(primero, "Mario"); /* Se inicializa el primer nombre */
   strcpy(ultimo, "Villagra"); /* Se inicializa el apellido */

   strcpy(nombre_completo, primero); /*completo = "Mario" */
   /* Apartir de ahora usamos strcat para encadenar strings */
   strcat(nombre_completo, " "); /* Agregamos un espacio " "; completo = "Mario " */
   strcat(nombre_completo, ultimo); /* completo = "Mario Villagra" */

   printf("El nombre completo es: %s\n", nombre_completo);
   return (0);

 }
