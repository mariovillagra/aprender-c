/***************************************************
 * total -- Demostracion de control flujo          *
 *                                                 *
 ---------------------------------------------------
 * break                                           *
 **************************************************/
 #include <stdio.h>

 char linea[100]; /* Linea para datos de entrada */
 int total;       /* El total de todos los numeros */
 int item;        /* el proximo item para add a la lista */

 int main{
   total = 0
   while(1){
     printf("Ingrese el #  a agregar\n");
     printf("o 0 para detener: ");

     fgets(linea, sizeof(linea), stdin);
     sscanf(linea, "%d", &item);

     if(item == 0) break;

    total += item;
    printf("El total final: %d\n",total);
    return (0);
   }
 }
