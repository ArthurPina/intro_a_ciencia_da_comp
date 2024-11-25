/* IDENTIFICAÇÃO DO ESTUDANTE:
 * Preencha seus dados e leia a declaração de honestidade abaixo. NÃO APAGUE
 * nenhuma linha deste comentário de seu código!
 *
 *    Nome completo: Arthur Pina
 *    Matrícula: 202414474
 *    Turma: cc1ma
 *    Email: arthurpina10@gmail.com
 *
 * DECLARAÇÃO DE HONESTIDADE ACADÊMICA:
 * Eu afirmo que o código abaixo foi de minha autoria. Também afirmo que não
 * pratiquei nenhuma forma de "cola" ou "plágio" na elaboração do programa,
 * e que não violei nenhuma das normas de integridade acadêmica da disciplina.
 * Estou ciente de que todo código enviado será verificado automaticamente
 * contra plágio e que caso eu tenha praticado qualquer atividade proibida
 * conforme as normas da disciplina, estou sujeito à penalidades conforme
 * definidas pelo professor da disciplina e/ou instituição.
 */

// Comece aqui seu programa.

/*
-> imprimir a tabuada de um numero por inteiro informado pelo usuario
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
 int n;

  printf("digite um numero inteiro: ");
  scanf("%i", &n);

    for(int i=1; i<=10; i++){
      printf("%i X %i = %i\n", n, i, n*i);
    }
  return 0;
}
