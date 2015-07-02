#include <stdio.h>
char line[100];/* line of data from the input */
int result;
char operator; /* operator the user specified */
int value;
/* the result of the calculations */
/* value specified after the operator */
int main(){
  result = 0; /* si inicia el resultado */
  /* Loop forever (or till we hit the break statement) */
  while (1) {

    printf("Result: %d\n", result);
    printf("Enter operator and number: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%c %d", &operator, &value);
    printf("## despues del scanf %c\n", operator);

    if (operator == '+') {
      printf("## despues del if %c\n", operator);
      result += value;
    } else {
      printf("Unknown operator %c\n", operator);
    }
  }
}
