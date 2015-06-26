/*******************************************************
 * length -- Lee una palabra del tecaldo y reporta su
 *        largura
 ******************************************************/
 #include <string.h>
 #include <stdio.h>

 char palabra[100]; /* La palabra que queremos */

 int main(){
   printf("Ingrese una palabra: ");
   fgets(palabra, sizeof(palabra), stdin); /* lee el string del teclado */

   printf("La largura de la palabra es: %d\n", strlen(palabra)); /* imprime la largura */
   return (0);
 }
