#include <stdio.h>
// NATHAN SQUEFI PACHECO-02/11/2023- ATIVIDADE EAD A
/*Problema 1: Foi feita uma pesquisa para determinar o perfil dos alunos que ingressaram na Ciência
da Computação na UFRGS num determinado semestre. Escreva um programa que:
1. Leia inicialmente o número total de alunos que foram matriculados no curso;
2. Leia, em seguida num laço, para cada aluno o gênero ('m' para masculino e 'f' para
feminino) e o número de vezes que este aluno prestou vestibular. Determine e imprima ao final
da entrada de dados:
• a porcentagem de alunos do gênero feminino que se matricularam
• a porcentagem de alunos, independente de gênero, que prestou vestibular 3 vezes ou mais*/
int main(void)
{
    int continuar;
    int totalunos,alunf=0,aluvest=0,vezvestibular,i;
    char genero;
    float percentf,percentvest;
    //para ler o total de alunos.
    do{
    printf("numero total de alunos: ");
    scanf("%d",&totalunos);

    for(i=0; i < totalunos; i++)
    {
        //entrada de dados(caracter)para contabilizar genero masculino ou feminino
        printf("digite o genero do aluno(m/f): ");
        scanf(" %c",&genero);
        //entrada de dados de quantas vezes o aluno prestou vestibular
        printf("digite o numero de vezes que o aluno prestou vestibular: ");
        scanf("%d",&vezvestibular);
        //para verificar e atualizar o contador de alunos do genero feminino
        if(genero == 'f' || genero == 'F')
        {
            alunf++;
        }
        //para verificar e atualizar o contador de alunos que fizeram 3 vezes ou mais o vestibular
        if(vezvestibular>=3)
        {
            aluvest++;
        }
    }
    //calcular a porcentagem de alunos do genero feminino e dos alunos que fizeram 3 vezes ou mais o vestibular.
    percentf= (float)alunf/totalunos*100;
    percentvest=(float)aluvest/totalunos*100;
    // imprime os resultados dos calculos acima.
    printf("Percentual alunos genero feminino: %.2f\n",percentf);
    printf("Percentual alunos vestibular 3 vezes ou mais: %.2f",percentvest);
    printf("\nDeseja continuar? (1 - Sim, 0 - Nao): ");
        scanf("%d", &continuar);
    }while(continuar);






return 0;

}
