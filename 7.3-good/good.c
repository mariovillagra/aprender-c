/*****************************************************************
 * Adivina -- Un juego simple de adivinanza                      *
 *                                                               *
 * Uso:                                                          *
 *    adivina                                                    *
 *                                                               *
 *    Se elige un numero aleatorio entre 1 y 100
 ****************************************************************/
#include <stdio.h>
#include <stdlib.h>

int numero_a_adivinar;  /* Numero aleatorio para adivinar */
int limite_bajo;        /* actual limite bajo del jugador */
int limite_alto;       /* actual limite alto del jugador */
int contador_adivinanza;/* numero de vesces que el jugador intento */
int numero_del_jugador; /* numero obtenido del jugador */
char linea[80];         /* buffer de entrada para una linea */

int main(){
  /*
   * Numero randon.
   */
 numero_a_adivinar = rand() % 100 + 1;

 /* Inicia variables para el loop */
 limite_bajo = 0;
 limite_alto = 100;
 contador_adivinanza = 0;

 while (1) {
   /* Le dice al jugador el rango y cuantas veces adivino */
   printf("Limite %d - %d\n", limite_bajo, limite_alto);
   printf("Valor[%d]? ", contador_adivinanza);

   ++contador_adivinanza;

   fgets(linea, sizeof(linea), stdin);
   sscanf(linea, "%d", &numero_del_jugador);

   /* la respuesta fue la correcta? */
   if(numero_del_jugador == numero_a_adivinar) break;

   /*ajusta los limites para el siguiente */
   if (numero_del_jugador < numero_a_adivinar){
     limite_bajo = numero_del_jugador;
   } else {
     limite_alto = numero_del_jugador;
   }
 }
 printf("Bingo!\n");
 return (0);
}
