// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int quiz(int i) {
    char respostas [15][50];
            
    char perguntas [15][110] = {
      "Qual é o nome do boneco assassino da franquia?",
      "Qual é a cor dos cabelos do Chucky?",
      "Qual é o nome do filme em que o Chucky aparece pela primeira vez?",
      "Qual o nome da marca fictícia do boneco do Chucky?",
      "Qual o nome da namorada do Chucky?",
      "Qual é o nome completo verdadeiro do Chucky antes de se tornar boneco?",
      "Qual é o nome do jovem protagonista que encontra o boneco Chucky na série de 2021?",
      "Qual é o nome do garoto que recebe o boneco Chucky no primeiro filme?",
      "Em qual cidade se passa o primeiro filme Brinquedo Assassino?",
      "Qual personagem da franquia retorna como adulto na série, interpretado pelo mesmo ator dos filmes originais?",
      "Qual a frase clássica usada no ritual de transferência de alma que Chucky repete?",
      "Quantas vezes Chucky consegue transferir sua alma para um corpo humano com sucesso na franquia principal?",
      "Qual é o nome do fabricante fictício responsável por produzir os bonecos Good Guy?",
      "Em qual filme Chucky aparece com múltiplas versões de si mesmo simultaneamente?",
      "Em O Culto de Chucky, qual é o nome da instituição onde Nica é internada?"
    };
    char respostas_certas [15][50] = {
        "chucky",
        "ruivo",
        "brinquedo assasino",
        "good guy",
        "tiffany",
        "charles lee ray",
        "jake",
        "andy",
        "chicago",
        "andy",
        "ade dwe damballa, dê-me o poder, eu lhe imploro",
        "1",
        "play pals toys",
        "o culto de chucky",
        "harrogate"
    };
    
      printf("\n--- Pergunta ---\n");
      printf("%s\n", perguntas[i]);
      scanf(" %[^\n]", respostas[i]);
   
      if (strcmp(respostas[i], respostas_certas[i]) == 0) {
          printf("Respotas correta!\n");
          return 1;
      } else {
          printf("Resposta incorreta :( A certa é %s\n", respostas_certas[i]);
          return 0;
      }
}

int main() {
    int i, opc, pontos = 0;
   
   printf("--- Boas vindas ao Quiz da Nikki! ---\nPS:Sempre responda em minúsculo\n");
   
   printf("Qual sera a difículdade? 1.Fácil, 2.Médio, 3.Díficil\n");
   scanf("%d", &opc);
   
   while (opc < 1 || opc > 3) {
            printf("--- opção invalida, tente novamente ---\n");
            scanf("%d", &opc);
   }
 
   switch (opc) {
       case 1:
          for (i = 0; i <= 4; i++) pontos += quiz(i);
          break;
       case 2:
          for (i = 5; i <= 9; i++) pontos += quiz(i);
          break;
       case 3:
          for (i = 10; i <= 14; i++) pontos += quiz(i);
          break;
        }
   
  printf("\n--- Obrigada por fazer o quiz :) --- \n--- Você acertou %d/5 perguntas! ---", pontos);
    return 0;
}