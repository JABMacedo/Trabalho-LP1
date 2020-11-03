/**
 * @file main.c
 * @author José Macedo (12939)
 * @brief Operacoes com soma, .subtracao, divisão e multiplicação
 * @version 0.1
 * @date 2020-11-03
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdio.h>

int main (){
    
    /**
     * @brief variaveis
     * 
     */

    int num1 , num2, soma, subtracao, multiplicacao, divisao;

    //introdução de valores
    /**
     * @brief atribuicao de valores
     * 
     */
    num1 = 10;
    num2 = 10;

    //operações
    /**
     * @brief operações soma, subtração, multiplicação e divisão
     * 
     */

    soma = num1 + num2 ;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;

    //mostrar
    /**
     * @brief Mostra resultados
     * 
     */
    printf("\nA soma de %d com %d igual: %d\n ", num1, num2, soma);
    printf("A subtracao de %d com %d igual:%d\n ", num1, num2, subtracao);
    printf("A divisao de %d com %d igual:%d\n ", num1, num2, multiplicacao);
    printf("A divisao de %d com %d igual:%d\n ", num1, num2, divisao);

    getchar();
    getchar();

    return 0;

}