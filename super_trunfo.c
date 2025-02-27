#include <stdio.h>

 int main(){

char Estado1[50];
char Codigodacarta1[50];
char Nomedacidade1[50];
int Populacao1;
float AreaemKm1;
float PIB1;
int Numerosdepontosturisticos1;

char Estado2[50];
char Codigodacarta2[50];
char Nomedacidade2[50];
int Populacao2;
float AreaemKm2;
float PIB2;
int Numerosdepontosturisticos2;
//criei as duas variaveis para as 2 cartas
printf("Digite seu estado:\n");
scanf("%s", Estado1);

printf("Digite seu Código:\n");
scanf("%s", Codigodacarta1);

printf("Digite sua cidade:\n");
scanf("%s", Nomedacidade1);

printf("Digite sua população:\n");
scanf("%d", &Populacao1);

printf("Digite sua área em Km²:\n");
scanf("%f", &AreaemKm1);

printf("Digite seu PIB:\n");
scanf("%f", &PIB1);

printf("Digite seus pontos turísticos:\n");
scanf("%d", &Numerosdepontosturisticos1);

printf("Estado:%s\n", Estado1);
printf("Código:%s\n", Codigodacarta1);
printf("Nome da Cidade:%s\n", Nomedacidade1);
printf("População:%d\n", Populacao1);
printf("Área:%f\n", AreaemKm1);
printf("PIB:%f\n", PIB1);
printf("Número de Pontos Turísticos:%d\n", Numerosdepontosturisticos1);
// criei a entrada e saida dos dados das cartas
printf("Digite seu estado:\n");
scanf("%s", Estado2);

printf("Digite seu Código:\n");
scanf("%s", Codigodacarta2);

printf("Digite sua cidade:\n");
scanf("%s", Nomedacidade2);

printf("Digite sua população:\n");
scanf("%d", &Populacao2);

printf("Digite sua área em Km²:\n");
scanf("%f", &AreaemKm2);

printf("Digite seu PIB:\n");
scanf("%f", &PIB2);

printf("Digite seus pontos turísticos:\n");
scanf("%d", &Numerosdepontosturisticos2);

printf("Estado:%s\n", Estado2);
printf("Código:%s\n", Codigodacarta2);
printf("Nome da Cidade:%s\n", Nomedacidade2);
printf("População:%d\n",Populacao2);
printf("Área:%f\n", AreaemKm2);
printf("PIB:%f\n", PIB2);
printf("Número de Pontos Turísticos:%d", Numerosdepontosturisticos2);
// copiei o que fiz na carta 1
return 0;

}