#include <stdio.h>

void imprimeFibonacci(n);

int main()
{
    int n = -1; //Comando de atribuição e declaração

    while (n < 0) //Estrutura de Controle -> Comando de Repetição
    {
        printf("Digite quantos termos da Serie de Fibonacci devem aparecer: \n");
        scanf("%d", &n);

        if (n < 0) //Estrutura de controle --> Comando Condicional
        {
            printf("Valor inválido");
        }
    }

    printf("Serie de Fibonacci: \n");
    imprimeFibonacci(n); //Abstração Procedural

    return 0;
}

void imprimeFibonacci(int n)
{
    int fib0 = 0, fib1 = 1, temp;

    printf("%d\n", fib1);
    for (int i = 1; i < n; i++) //Estrutura de Controle -> Comando de Repetição
    {
        temp = fib0 + fib1; //alvo = expressao --> Atribuição e expressão aritmética
        fib0 = fib1;
        fib1 = temp;

        printf("%d\n", temp);
    }
}
