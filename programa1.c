#include <stdio.h>
#include <math.h>

int main()
{

    float numeros[3]; // Float referente ao uso de vetores, nesse caso com 3 números dentro do vetor.

    float operacao, resultado, continuacao;

    printf("\nOlá, vou te ajudar a realizar operações matemáticas básicas!!!");

    printf("\nComece digitando um número: ");
    scanf("%f", &numeros[0]);

    printf("\nAgora escolha um operadorador matemático\n[1] Adição \n[2] Subtração \n[3] Multiplicação \n[4] Divisão \n[5] Raiz quadrada de um número \n[6] Elevar um número ao quadrado\nEscolha qual operação você deseja realizar: ");
    scanf("%f", &operacao);

    if (operacao > 6 || operacao < 1)
    {
        printf("Operação Inválida!");
        return 0;
    }

    if (operacao != 5 && operacao != 6)
    {
        printf("\nDigite o número: ");
        scanf("%f", &numeros[1]);
    }

    if (operacao == 1)
    {
        resultado = numeros[0] + numeros[1];
    }

    if (operacao == 2)
    {
        resultado = numeros[0] - numeros[1];
    }

    if (operacao == 3)
    {
        resultado = numeros[0] * numeros[1];
    }

    if (operacao == 4)
    {
        resultado = numeros[0] / numeros[1];
    }

    if (operacao == 5)
    {
        sqrtf(numeros[0]);
    }

    if (operacao == 6)
    {
        resultado = powf(numeros[0], 2);
    }

    printf("\n================================================================\nSeu resultado foi: "
           "%f",
           resultado);
    printf("\n================================================================");

    printf("\n\nDeseja utilzar outra operação utilizando o resultado da operação anterior?\nCaso queira digite[1]\nCaso não queira digite [2]\nSua resposta é: ");
    scanf("%f", &continuacao);

    while (continuacao == 1)
    {

        printf("\nAgora escolha um novamento um operadorador matemático\n[1] Adição \n[2] Subtração \n[3] Multiplicação \n[4] Divisão \n[5] Raiz quadrada de um número \n[6] Elevar um número ao quadrado \n[8] FECHAR CALCULADORA \nEscolha qual operação você deseja realizar: ");
        scanf("%f", &operacao);

        if (operacao > 6 || operacao < 1)
        {
            printf("Operação Inválida!");
            return 0;
        }

        if (operacao != 5 && operacao != 6)
        {
            printf("\nDigite o número: ");
            scanf("%f", &numeros[1]);
        }

        if (operacao == 1)
        {
            resultado += numeros[2];
        }

        if (operacao == 2)
        {
            resultado -= numeros[2];
        }

        if (operacao == 3)
        {
            resultado *= numeros[2];
        }

        if (operacao == 4)
        {
            resultado /= numeros[2];
        }

        if (operacao == 5)
        {
            resultado = sqrtf(resultado);
        }

        if (operacao == 6)
        {
            resultado = powf(resultado, 2);
        }

        if (operacao == 8)
        {
            continuacao = 2;
        }

        printf("\n================================================================\nSeu resultado foi: "
               "%f",
               resultado);
        printf("\n================================================================");

        printf("\n\nDeseja utilzar outra operação utilizando o resultado da operação anterior? \nCaso queira digite[1]\nCaso não queira digite [2].\nSua resposta é: ");
        scanf("%f", &continuacao);
    }

    if (continuacao == 2)
    {
        printf("Operação finalizada");
    }

    return 0;
}