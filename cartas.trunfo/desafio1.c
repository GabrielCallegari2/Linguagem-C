#include <stdio.h>

int main() {
    char estado[100];               
    char codigo[4];                
    char nomeCidade[50];           
    int populacao, cartas;         
    float area;                    
    float pib;                     
    int pontosTuristicos;          

    printf("Quantas cartas voce deseja cadastrar? ");
    scanf("%d", &cartas);
    getchar(); 

    for (int i = 0; i < cartas; i++) {
        printf("\n--- Cadastro da Carta %d ---\n", i + 1);

        printf("Digite o nome do estado:  ");
        scanf("%s", estado);
    
        
        printf("Digite o nome da cidade:  ");
        scanf("%s",nomeCidade);
       
       
        printf("Digite o codigo da carta (ex: A01): ");
        scanf(" %s", codigo);
       

        printf("Digite a inicial da cidade: ");
        scanf(" %c", nomeCidade);  


        printf("Digite a populacao: ");
        scanf("%d", &populacao);
        

        printf("Digite a area da cidade em km: ");
        scanf("%f", &area);
         

        printf("Digite o PIB da cidade em bilhoes de reais: ");
        scanf("%f", &pib);
         

        printf("Digite o numero de pontos turisticos: ");
        scanf("%d", &pontosTuristicos);
        


        printf("\n--- Informacoes da Carta %d ---\n", i + 1);
        printf("Estado: %s\n", estado);
        printf("Nome da Cidade: %s\n", nomeCidade);
        printf("Codigo da Carta: %s\n", codigo);       
        printf("Populacao: %d\n", populacao);
        printf("Area: %.2f km\n", area);
        printf("PIB: %.2f bilhoes de reais\n", pib);
        printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos);
    }

    printf("\nCadastro concluido!\n");
    
    return 0;
}
