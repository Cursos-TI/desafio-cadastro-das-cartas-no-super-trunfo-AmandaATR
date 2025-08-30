#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Cadastro da Carta 01 - C01.

    printf ("Carta 01");
    printf ("\n");

        // Variáveis por atributo da cidade.
        char estadoC01;
        char codigoC01 [10], cidadeC01 [50];
        int populaçãoC01;
        float áreaC01, pibC01;
        int pontosturísticosC01;

        // Entradada de dados: informações dos atributos das cartas. 
    

printf ("Digite o Estado (utilize uma letra de A a H): \n");
scanf ("%c", &estadoC01);

printf ("Digite o Código da Carta (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
scanf ("%s", &codigoC01);

printf ("Digite o Nome da Cidade: \n");
scanf ("%s", &cidadeC01);

printf ("Digite a População da Cidade: \n");
scanf ("%d", &populaçãoC01);

printf ("Digite a Área (em Km²): \n ");
scanf ("%f", &áreaC01);

printf ("Digite o PIB (Produto Interno Bruto) da Cidade: \n");
scanf ("%f", &pibC01);

printf ("Digite o Número de Pontos Turísticos da Cidade: \n");
scanf ("%d", &pontosturísticosC01);


printf ("\n\n");
printf ("Carta 01");
printf ("\n");


printf ("Estado: %c\n", estadoC01);

printf ("Código: %s\n", codigoC01);

printf ("Nome da Cidade: %s\n", cidadeC01);

printf ("População: %d\n", populaçãoC01);

printf ("Área: %f Km²\n", áreaC01);

printf ("PIB: %f Bilhões de Reais\n", pibC01);

printf ("Números de Pontos Turísticos: %d\n", pontosturísticosC01);

    
return 0; 
}