/*****************************************************
 * Calculadora de 4 funciones                        *
 ****************************************************/
# include <stdio.h>
char linea[100]; /* linea de entrada */

int resultado; /* El resultado de los carculos */
char operador; /* El operador especificado */
int valor;      /* valor a operar */

int main(){
  resultado = 0; /* inicia el resultado */

  /* loop infinito (Or hasta que break sea llamdo) */
  while(1) {
    printf("Resultado: %d\n", resultado);
    printf("Ingrese el operador y el numero: ");

    fgets(linea, sizeof(linea), stdin);
    sscanf(linea, "%c %d", &operador, &valor);

    if ((operador == 'q') || (operador == 'Q')) break;

    if (operador == '+'){
      resultado += valor;
    } else if(operador == '-'){
      resultado -= valor;
    } else if(operador == '*'){
      resultado *= valor;
    } else if(operador == '/'){
      if(valor == 0) {
        printf("Error: Dividido por zero\n");
        printf("  operacion ignorada\n");
      } else {
        resultado /= valor;
      }
    } else {
      printf("Operador desconocido %c\n", operador);
    }
  }

  return (0);
}
