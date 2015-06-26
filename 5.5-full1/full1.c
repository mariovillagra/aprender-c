/***********************************************
 * full1 -- lee el primer nombre y el segundo
 * del usuario para combinarlos.
 *---------------------------------------------*
  >>>>>>>Este ejemplo posee un error<<<<<<<<<<<
 *---------------------------------------------*
 * Por motivos didacticos esto posee un error
 * al imprimir los resiltados.
 *
 * La version correcta de este codigo es el
 * full2
 **********************************************/

#include <string.h>
#include <stdio.h>

char primero[100]; /* Primer nombre */
char ultimo[100]; /* Apellido */
char nombre_completo[200]; /* Nombre completo */

int main(){
 printf("Ingrese su primer nombre: ");
 fgets(primero, sizeof(primero), stdin);

 printf("Ingrese su apellido: ");
 fgets(ultimo, sizeof(ultimo), stdin);

 strcpy(nombre_completo, primero);
 strcat(nombre_completo, " ");
 strcat(nombre_completo, ultimo);

 printf("El nombre completo es: %s\n", nombre_completo);
 return (0);

}

/****************************************************************
 * Esto imprime: Ej.
 * >El nombre completo es: Mario
 * >Villagra
 ----------------------------------------------------------------
 * Pero nosotros necesitabamos que el nombre aparezca en una
 * sola linea.
 *
 * Esto sucede por que el fgets toma el array completo
 * incluyendo el final de linea
 * Ej:
 * primero[0] = 'J'
 * primero[1] = 'o'
 * primero[2] = 'h'
 * primero[3] = 'n'
 * primero[4] = '\n'
 * primero[5] = '\0'  fin del string
 *
 **************************************************************/
