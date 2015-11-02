#include<stdio.h>
#include<stdlib.h>

struct parente{
	int grau;
	char *nome;
	struct parente *pai;
	struct parente *mae;
}filho1;
filho1->grau=0;

void pai(struct parente filho){
	struct parente pai=filho->pai;
	pai->grau=filho->grau*2+1;
	struct parente mae=filho->mae;
	mae->grau=filho->grau*2+2;
	prinft("Nome do pai:");
	scanf("%s",pai->nome);
	printf("Nome da mae:");
	scanf("%s",mae->nome);
}
	
void implementacao(){
	int n=0,i=0;
	printf("Quantos trios de parentes voce quer inserir?");
	printf("\nExemplo de trio: filho1");
	printf("                   /     \ ");
	printf("                 pai1   mae1");
	scanf("%d",&n);
}
