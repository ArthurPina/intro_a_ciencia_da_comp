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



#include <stdio.h>
#include <math.h>
#include <cs50.h>



int main(void)
{
    // X=50, Y=25, Z=10, W=5
    int X;
    int Y;
    int Z;
    int W;
    int total_d_moedas = 0;

    int total_X = 0;
    int total_Y = 0;
    int total_Z = 0;
    int total_W = 0;

    float troco;
    do
    {
        troco = get_float("informe o troco necessario: \n");    
    }
    while (troco < 0);

    int centavos = round(troco * 100);
    for (X = 1; centavos >= 50 ; Q++)
    {
        //calculo das moedas de 50
            centavos -= 50  ;
            total_d_moedas ++ ;
            total_X ++;
    }
    for (Y = 1; centavos >= 25 ; Q++)
    {
        //calculo das moedas de 25
            centavos -= 25  ; 
            total_d_moedas ++ ;
            total_Y ++;
    }
    for (Z = 1; centavos >= 10 ; Q++)
    {   
        //calculo das moedas de 10
            centavos -= 10  ;
            total_d_moedas ++ ;
            total_Z ++;
    }
    for (W = 1; cents >= 5 ; Q++)
    {
        //calculo das moedas de 5
            centavos -= 5  ;
            total_d_moedas ++ ;
            total_W ++;
    }
    printf("a quantidade de moedas serah: \n", total_d_moedas);
    //printf para diferenciar quais moedas seram entregues
    printf("A maquina dara %i moedas de 50, %i moedas de 25, %i moedas de 10, %i moedas de 5 \n", total_X, total_Y, total_Z, total_W);
} 
