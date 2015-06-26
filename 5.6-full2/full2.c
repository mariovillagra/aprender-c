/***********************************************
 * full2 -- lee el primer nombre y el segundo
 * para combinarlos
 **********************************************/

#include <string.h>
#include <stdio.h>

char primero[100]; /* Primer nombre */
char ultimo[100]; /* Apellido */
char nombre_completo[200]; /* Nombre completo */

int main(){
 printf("Ingrese su primer nombre: ");
 fgets(primero, sizeof(primero), stdin);
 /* corta el ultimo caracter */
 primero[strlen(primero) -1] = '\0'; /* '\0' indica el final del string */

 printf("Ingrese su segundo nombre: ");
 fgets(ultimo, sizeof(ultimo), stdin);
 ultimo[strlen(ultimo) -1] = '\0';


 strcpy(nombre_completo, primero);
 strcat(nombre_completo, " ");
 strcat(nombre_completo, ultimo);

 printf("El nombre completo es: %s\n", nombre_completo);
 return (0);

}
