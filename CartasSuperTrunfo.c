#include <stdio.h>

int main(){
  
    char Estado1;
    char codigo1 [25];
    char cidade1 [50];
    int populacao1 [50];
    float area1;
    float Pib1;
    int pontos_Turisticos;
      
    printf("Carta 01\n");

    printf("Informe o Estado (de A-H): \n");
    scanf("%c", &Estado1);
  
    printf("Informe o codigo da Carta (ex A01, B02): \n");
    scanf("%s", &codigo1);
  
    printf("informe o Nome da Cidade: \n");
    scanf("%s", cidade1);
   
    printf("Digite a populacao: \n");
    scanf("%d", &populacao1);
  
    printf("Informe a área: \n");
    scanf("%f", &area1);
  
    printf("informe o Pib: \n");
    scanf("%f", &Pib1);
  
    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontos_Turisticos);
  

        //Apresentação da carta 02//;
  
            char Estado2 [25];
            char codigo2 [25];
            char cidade2 [50];
            int populacao2 [50];
            float area2;
            float Pib2;
            int pontos_Turisticos2;
              
            printf("Carta 02\n");

            printf("Informe o Estado (de A-H): \n");
            scanf("%s", &Estado2);
          
            printf("Informe o codigo da Carta (ex A01, B02): \n");
            scanf("%s", &codigo2);
          
            printf("informe o Nome da Cidade: \n");
            scanf("%s", cidade2);
           
            printf("Digite a populacao: \n");
            scanf("%d", &populacao2);
          
            printf("Informe a área em km²: \n");
            scanf("%f", &area2);
          
            printf("informe o Pib: \n");
            scanf("%f", &Pib2);
          
            printf("Numero de pontos turisticos: \n");
            scanf("%d", &pontos_Turisticos2);
          
        
  }