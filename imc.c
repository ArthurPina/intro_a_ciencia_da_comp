/* IDENTIFICAÇÃO DO ESTUDANTE:
 * Preencha seus dados e leia a declaração de honestidade abaixo. NÃO APAGUE
 * nenhuma linha deste comentário de seu código!
 *
 *    Nome completo:Arthur Pina 
 *    Matrícula:202414474
 *    Turma:Cc1md
 *    Email:arthurpina10@gmail.com
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
#include <stdlib.h>

int main(void)
{
    float peso, altura, imc, a;

    char class[50];

    printf("Informe seu peso (KG): ");
    scanf("%f", &peso);

    printf("Informe sua altura (M): ");
    scanf("%f", &altura);

    a = altura * altura;
    imc = peso / a;
    // Processo e saida
if (imc < 16)
    {
        sprintf(class, "Magreza Grau III"); // TODO
    }

    else if (imc < 17)
    {
        sprintf(class, "Magreza Grau II"); // TODO
    }

    else if (imc < 18.5)
    {
        sprintf(class, "Magreza Grau I"); // TODO
    }

    else if (imc < 25)
    {
        sprintf(class, "Peso adequado"); // TODO
    }

    else if (imc < 30)
    {
        sprintf(class, "Pré-obeso"); // TODO
    }

    else if (imc < 35)
    {
        sprintf(class, "Obesidade Grau I"); // TODO
    }

    else if (imc < 40)
    {
        sprintf(class, "Obesidade Grau II"); // TODO
    }

    else
    {
        sprintf(class, "Obesidade Grau III"); // TODO
    }
    printf("IMC: %.2f; Classificação: %s.\n", imc, class);

    return 0;
}
