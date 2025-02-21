#include <stdio.h>

 int main(){

char Estado1[50];
char Códigodacarta1[50];
char Nomedacidade1[50];
int População1;
float ÁreaemKm²1;
float PIB1;
int Númerosdepontosturísticos1;

char Estado2[50];
char Códigodacarta2[50];
char Nomedacidade2[50];
int População2;
float ÁreaemKm²2;
float PIB2;
int Númerosdepontosturísticos2;

printf("Digite seu estado:\n");
scanf("%s", Estado1);

printf("Digite seu Código:\n");
scanf("%s", Códigodacarta1);

printf("Digite sua cidade:\n");
scanf("%s", Nomedacidade1);

printf("Digite sua população:\n");
scanf("%d", &População1);

printf("Digite sua área em Km²:\n");
scanf("%f", &ÁreaemKm²1);

printf("Digite seu PIB:\n");
scanf("%f", &PIB1);

printf("Digite seus pontos turísticos:\n");
scanf("%d", &Númerosdepontosturísticos1);

printf("Estado:%s\n", Estado1);
printf("Código:%s\n", Códigodacarta1);
printf("Nome da Cidade:%s\n", Nomedacidade1);
printf("População:%d\n", População1);
printf("Área:%f\n", ÁreaemKm²1);
printf("PIB:%f\n", PIB1);
printf("Número de Pontos Turísticos:%d\n", Númerosdepontosturísticos1);

printf("Digite seu estado:\n");
scanf("%s", Estado2);

printf("Digite seu Código:\n");
scanf("%s", Códigodacarta2);

printf("Digite sua cidade:\n");
scanf("%s", Nomedacidade2);

printf("Digite sua população:\n");
scanf("%d", &População2);

printf("Digite sua área em Km²:\n");
scanf("%f", &ÁreaemKm²2);

printf("Digite seu PIB:\n");
scanf("%f", &PIB2);

printf("Digite seus pontos turísticos:\n");
scanf("%d", &Númerosdepontosturísticos2);

printf("Estado:%s\n", Estado2);
printf("Código:%s\n", Códigodacarta2);
printf("Nome da Cidade:%s\n", Nomedacidade2);
printf("População:%d\n",População2);
printf("Área:%f\n", ÁreaemKm²2);
printf("PIB:%f\n", PIB2);
printf("Número de Pontos Turísticos:%d", Númerosdepontosturísticos2);

return 0;

}