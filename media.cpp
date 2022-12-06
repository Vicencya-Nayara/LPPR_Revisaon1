#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int numero_alunos, cont;
	float nota,acumnotas,media;
	
	acumnotas = 0;
	
	printf("Informe o número de alunos da turma: ");
	scanf("%d", &numero_alunos);
    
    for(cont=1; cont<=numero_alunos; cont++){
    	printf("Informe a nota do %d aluno: ", cont);
    	scanf("%f", &nota);
    	acumnotas += nota;
	}
	media = acumnotas / numero_alunos;
	
	printf("\nA média da turma é %.2f.\n", media);
	
	system("PAUSE");	
	return 0;
}
