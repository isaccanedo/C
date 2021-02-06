// biblioteca de padrão de entrada e saida, standart input and output
#include <stdio.h>

//declaração das variaveis
char  line[100],operator; 
int   result,value;

// Banner 
char opcao_menu() {
 int i;
 char *banner[] = {
  "Operator Calc",
  "put with example",
  "operators:+,-,*,/ ",
  "(s)para Sair",
  "-> ",
 };
// \x0a é a mesma coisa que \n para pular linha só que mais rapido como é hex
 for(i=0; i<=5; i++) printf(" %s \x0a",banner[i]);
}
   
int main() {
// chama o banner  e seta resultado para zero
    opcao_menu(); result = 0; 
    while (1) {
     printf("Resultado: %d\x0a", result );
     printf("Digite Operador e o numero : ");
// pega as duas entradas
     fgets(line, sizeof(line), stdin);
     sscanf(line, "%c %d", &operator, &value);
// se a entrada for s ou S programa sai
     if ((operator == 's') || (operator == 'S')) break;
//condições para verificar operador e fazer a conta com ultimo numero armazenado
// fazer result += value é a mesma coisa que fazer "result=result+value" soh que é mais rapido
     if (operator == '+') result += value;
     if (operator == '/') result /= value;
     if (operator == '-') result -= value;
     if (operator == '*') result *= value;
   } 
 return(0);
}
