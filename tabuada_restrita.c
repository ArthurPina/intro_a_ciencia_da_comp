/* IDENTIFICAÇÃO DO ESTUDANTE:
 * Preencha seus dados e leia a declaração de honestidade abaixo. NÃO APAGUE
 * nenhuma linha deste comentário de seu código!
 *
 *    Nome completo:Pedro Arthur Zuccolotto Pereira
 *    Matrícula:202417268
 *    Turma:Cc1md
 *    Email:pedroarthurzp@gmail.com
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
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int r1 = get_int("Você quer que eu calcule a tabuada de qual número? ");
    int r2 = get_int("Você quer começar a tabuada em qual número? ");
    int r3 = get_int("E que termine em qual número? ");
    if (r2 > r3)
    {
        printf("Erro. Lembre-se o número para o início da tabuada deve ser menor do que o do "
               "final. \n");
    }
    else
        while (r2 < r3 + 1)
        {
            int r = r1 * r2;
            printf("%i x %i = %i\n", r1, r2, r);
            r2++;
        }
}
