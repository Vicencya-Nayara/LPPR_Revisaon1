#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int codigo, nasc, ano_ing;
	
	printf("Verificação da empresa para saber se o empregado está qualificado a aposentadoria.\n");
	printf("Digite o ano de nascimento: ");
	scanf("%d", &nasc);
	printf("Digite o ano de ingresso no serviço: ");
	scanf("%d", &ano_ing);
	printf("Digite o codigo: ");
	scanf("%d", &codigo);
	
	ano_ing = codigo - ano_ing;
	nasc = codigo - nasc;
	
	if(nasc >= 65 &&  ano_ing >= 30 || nasc >= 60 && ano_ing >= 2){
		printf("Sua idade é: %d\n", nasc);
		printf("Seu tempo empregado foi: %d\n", ano_ing);
		printf("Requer aposentadoria\n");
	} else {
		printf("Sua idade é: %d\n", nasc);
		printf("Seu tempo empregado foi: %d\n", ano_ing);
		printf("Não requerer\n");
	}
	return 0;
}
