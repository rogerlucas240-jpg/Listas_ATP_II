#include <stdio.h>
#include <limits.h>

// Letra A
int ehMaior(int valor, int maior){
    if(valor > maior){
        return 1;
    }
    return 0;
}

int ehMenor(int valor, int menor){
    if(valor < menor){
        return 1;
    }
    return 0;
}

// Letra B
void somarRef(int *soma, int valor){
    *soma += valor;
}

// Letra C
void mostrarResultados(int n, int maior, int menor, int soma){
    printf("Tarefa concluida com sucesso!\n\n");
    printf("Resultados:\n");
    printf("==========================================================\n");
    printf("Lidos\tMaior\tMenor\tSoma\n");
    printf("----------------------------------------------------------\n");
    printf("%d\t%d\t%d\t%d\n\n", n, maior, menor, soma);
    printf("==========================================================\n");
}

// Letra D
void obterMaiorMenor(int valor, int *maior, int *menor){
    if(valor > *maior){
        *maior = valor;
    }

    if(valor < *menor){
        *menor = valor;
    }
}

void classificarValor(int valor, int *maior, int *menor, int *soma){
    obterMaiorMenor(valor, maior, menor);
    somarRef(soma, valor);
}

int main(){
    int maior = INT_MIN;
    int menor = INT_MAX;
    int valor, n, soma = 0;

    printf("Bem-vindo ao nosso classificador!\n\n");
    printf("Informe a quantidade de numeros que vamos classificar: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Informe o %dº numero: ", i + 1);
        scanf("%d", &valor);

        // Letra A
        if(ehMaior(valor, maior)){
            maior = valor;
        }

        if(ehMenor(valor, menor)){
            menor = valor;
        }

        // Letra B
        somarRef(&soma, valor);
    }

    // Letra C
    mostrarResultados(n, maior, menor, soma);

    return 0;
}