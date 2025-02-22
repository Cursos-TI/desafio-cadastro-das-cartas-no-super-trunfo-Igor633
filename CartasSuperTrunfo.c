#include <stdio.h>



int main() {
        printf("SUPER TRUFO");
       // Sugestão: Defina variáveis separadas para cada atributo da cidade.
     // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
        char Estado[20]= "Alagoas";
        int código;
        char nome[20]; 
        float população;
        float área;
        float PIB;
        int turisticos;         
        // Cadastro das Cartas:
        // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
        // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
        
        // Exibição dos Dados das Cartas:
        // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
        // Exiba os valores inseridos para cada atributo da cidade, um por linha.
                  
        printf("código: \n");      
        scanf("%d" , código);

        printf("Cidade: \n");
        scanf("%s" , nome);

        printf("população: \n");
        scanf("%f" , população);

        printf("área: \n");
        scanf("%f" , área);

        printf("PIB: \n");
        scanf("%f" , PIB);

        printf("turisticos: \n");
        scanf("%d" , turisticos);

    
    

    return 0;
}
