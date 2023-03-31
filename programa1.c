#include <stdio.h>
#include <math.h>

int main()
{

    float numeros[3];

    float operacao, resultado, continuacao;

    printf("\nOlá, vou te ajudar a realizar operações matemáticas básicas!!!");

    printf("\nComece digitando um número: ");
    scanf("%f", &numeros[0]); // Aqui temos a utilização de Vetor, onde um valor será armazenado. Percebe-se que com isso teremos uma boa sequência de utilização desses vetores, assim como o uso de operadores matemáticos.

    printf("\nAgora escolha um operadorador matemático\n[1] Adição \n[2] Subtração \n[3] Multiplicação \n[4] Divisão \n[5] Raiz quadrada de um número \n[6] Elevar um número ao quadrado\nEscolha qual operação você deseja realizar: ");
    scanf("%f", &operacao);

    if (operacao > 6 || operacao < 1) // Aqui caso o usuário acabe digitando algo fora do padrão reiniciar o código por inválidez. Portanto se ele for maior que 6 ou menor q 1, o código dara que a operação será inválida.
    {
        printf("Operação Inválida!");
        return 0;
    }

    if (operacao != 5 && operacao != 6) // Aqui para caso de uso de operadores básico, sem contar os especiais.
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

    while (continuacao == 1) // Aqui temos uma estrutura de repetição onde o usuário pode decidir quantos vezes ele quer utilizar uma operação matemática, assim criando um laço de repetição caso opite por continuar calculando.
    {

        printf("\nAgora escolha um novamento um operadorador matemático\n[1] Adição \n[2] Subtração \n[3] Multiplicação \n[4] Divisão \n[5] Raiz quadrada de um número \n[6] Elevar um número ao quadrado \nEscolha qual operação você deseja realizar: ");
        scanf("%f", &operacao);

        if (operacao > 6 || operacao < 1) // Assim como anteriomente, caso o usuário venha a digitar um número que não se encaixe ao requisitos desejados, ele retorne o código.
        {
            printf("Operação Inválida!");
            return 0;
        }

        if (operacao != 5 && operacao != 6)
        {
            printf("\nDigite o número: ");
            scanf("%f", &numeros[2]);
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

        printf("\n================================================================\nSeu resultado foi: " /
                   "%f",
               resultado);
        printf("\n================================================================");

        printf("\n\nDeseja utilzar outra operação utilizando o resultado da operação anterior? \nCaso queira digite[1]\nCaso não queira digite [2].\nSua resposta é: "); // Aqui o laço continua a se repetir enquanto o usuário digitar '1', caso digite '2' o laço irá ser finalizado.
        scanf("%f", &continuacao);
    }

    if (continuacao == 2) // Aqui caso o usuário queira finalizar o uso da calculadora. Portanto ao apertar "2" o laço será encerrada.
    {
        printf("Operação finalizada");
    }

    return 0;
}