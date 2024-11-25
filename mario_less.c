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
-> criar a piramede do mario (world 1-1), do final da fase citada [um triangulo retangulo]
*/

#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

// Al = altura Co = comprimento Es = espacos Tag = hashtag(#) 

int main(void)
{

    int Al;
    do
    {
        Al = get_int("qual a altura: \n");
    }
        while (Al < 1 || Al > 8);

        for (int Co = 1; Co <= Al; Co++)
        {
            for (int Es = Al - Co ; Es > 0; Es--)
         {
            printf(" ");
         }
            for (int Tag = 1; Tag <= Co; Tag++)
            {
                printf("#");
            }
            printf("  ");
            for (int Tag = 1; Tag <= Co; Tag++)
            {
                printf("#");
            }
            printf("\n");
        }
  return 0;
}
