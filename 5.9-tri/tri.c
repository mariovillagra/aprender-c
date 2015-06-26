/**********************************************************
 * tri -- Calcula el area de un triangulo, leyengo
 * la largura y altura
 *********************************************************/
 #include <stdio.h>

 char linea[100]; /* linea de entrada de datos */
 int altura;      /* la altura del triangulo */
 int largura;     /* la largura del triangulo */
 int area;        /* el area del triangulo */

 int main(){
   printf("Ingrese largura y altura: ");

   fgets(linea, sizeof(linea), stdin);
   sscanf(linea, "%d %d", &largura, &altura);

   area = (largura * altura) / 2;

   printf("El area es %d\n", area);
   return (0);
 }
