#include <stdio.h> //Aqui temos a inclusão da biblioteca stdio.h, onde basicamente todas as operações e variaveís só são capazes de funcionar devido a ela.
#include <math.h>  // Aqui temos a inclusão de biblioteca math.h, onde podemos utilizar operadores matemáticos de nível mais alto, para assim ajudar no processo de aperfeiçoamento de código.

int main() // Aqui é a função principal do código, onde tudo é feito nela, pois assim como seu nome ("main") = principal, é a partir dele onde todo o código será utilizado e terá funcionalidade.
{

    float numeros[3]; // Float referente ao uso de vetores, nesse caso com 3 números dentro do vetor. Onde será notável o uso em diversas linhas de código.

    float operacao, resultado, continuacao; // Variveis referentes às decisões que o usuário irá tomar.

    printf("\nOlá, vou te ajudar a realizar operações matemáticas básicas!!!");

    printf("\nComece digitando um número: ");
    scanf("%f", &numeros[0]); // Aqui a primeira utilização de um Vetor para armazenar esse primeiro valor que o usuário desejou.

    printf("\nAgora escolha um operadorador matemático\n[1] Adição \n[2] Subtração \n[3] Multiplicação \n[4] Divisão \n[5] Raiz quadrada de um número \n[6] Elevar um número ao quadrado\nEscolha qual operação você deseja realizar: "); // Aqui tenmos as opções disponíveis para o usuário escolher a operação matemática do seu desejo, onde é disponibilizado opçções para: soma, subtração, multiplicação e visião, Além de operações especiais como: Raiz quadrada e potênciar um número ao quadrado.
    scanf("%f", &operacao);

    if (operacao > 6 || operacao < 1) // Aqui caso o usuário acabe digitando algo fora do padrão reiniciar o código por inválidez. Portanto se ele for maior que 6 ou menor q 1, o código dara que a operação será inválida.
    {
        printf("Operação Inválida!");
        return 0;
    }

    if (operacao != 5 && operacao != 6) // Aqui para caso de uso de operadores básico, sem contar os especiais.
    {
        printf("\nDigite o número: ");
        scanf("%f", &numeros[1]); // Aqui temos outra utilização de Vetor, onde mais um valor será armazenado. Percebe-se que com isso teremos uma boa sequência de utilização desses vetores, assim como o uso de operadores matemáticos.
    }

    if (operacao == 1) // Caso o usuário queira uma operação com soma.
    {
        resultado = numeros[0] + numeros[1];
    }

    if (operacao == 2) // Caso o usuário queira uma operação com subtração.
    {
        resultado = numeros[0] - numeros[1];
    }

    if (operacao == 3) // Caso o usuário queira uma operação com multiplicação.
    {
        resultado = numeros[0] * numeros[1];
    }

    if (operacao == 4) // Caso o usuário queira uma operação com divisão.
    {
        resultado = numeros[0] / numeros[1];
    }

    if (operacao == 5) // Caso o usuário queira uma operação especial, nesse caso sendo a raiz quadrada de um número.
    {
        sqrtf(numeros[0]);
    }

    if (operacao == 6) // Caso o usuário queira uma operação especial, nesse caso a potência de um número.
    {
        resultado = powf(numeros[0], 2);
    }

    printf("\n================================================================\nSeu resultado foi: " // Esses dois "printf" servem para enquadrar a resposta de uma forma mais apresentada.
           "%f",
           resultado);
    printf("\n================================================================");

    printf("\n\nDeseja utilzar outra operação utilizando o resultado da operação anterior?\nCaso queira digite[1]\nCaso não queira digite [2]\nSua resposta é: "); // Aqui serve para saber se o usuário deseja realizar mais alguma operação. ao apertar '1' o código irá exigir mais algumas informações para continuar a operação, e caso ele aperte '2' o código será encerrado, pois ele não deseja fazer mais operações.
    scanf("%f", &continuacao);

    while (continuacao == 1) // Aqui temos uma estrutura de repetição onde o usuário pode decidir quantos vezes ele quer utilizar uma operação matemática, assim criando um laço de repetição caso opite por continuar calculando.
    {

        printf("\nAgora escolha um novamento um operadorador matemático\n[1] Adição \n[2] Subtração \n[3] Multiplicação \n[4] Divisão \n[5] Raiz quadrada de um número \n[6] Elevar um número ao quadrado \n[7] FECHAR CALCULADORA \nEscolha qual operação você deseja realizar: ");
        scanf("%f", &operacao);

        if (operacao > 6 || operacao < 1) // Assim como anteriomente, caso o usuário venha a digitar um número que não se encaixe ao requisitos desejados, ele retorne o código.
        {
            printf("Operação Inválida!");
            return 0;
        }

        if (operacao != 5 && operacao != 6) // Aqui novamente a demonstração que o código deve não reconhecer operadores matemáticos especiais para poder realizar as operações simples, utilizando só mais a frente os operadores especiais.
        {
            printf("\nDigite o número: ");
            scanf("%f", &numeros[1]);
        }

        if (operacao == 1) // Abaixo irá ocorrer as repetições de laço para operadores matemáticas, enquanto o usuário decidir fazer operações.
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

        if (operacao == 7)
        {
            continuacao = 2;
        }

        printf("\n================================================================\nSeu resultado foi: " // Novamente os "printf" abaixo são para enquadrar e deixar a resposta mais apresentável.
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

    return 0; // E assim finalizando utilizando esse recurso para reotornar ao main todo código utilizado, assim fazendo o código funcionar.
}