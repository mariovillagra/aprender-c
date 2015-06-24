/*********************************************************
 * array -- Imprime el total y el promedio de 5 numeros
 ********************************************************/
 #include <stdio.h>

 float dato[5]; /* Datos para el promedio y el total */
 float total;   /* el total de los datos */
 float promedio; /* el promedio de los datos */

 int main(){
   dato[0] = 34.0;
   dato[1] = 27.0;
   dato[2] = 45.0;
   dato[3] = 82.0;
   dato[4] = 22.0;

   total = dato[0] + dato[1] + dato[2] + dato[3] + dato[4];
   promedio = total / 5.0;

   printf("Total %f Promedio %f\n", total, promedio);

   return (0);
 }
