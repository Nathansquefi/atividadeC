#include <stdio.h>
#include <math.h>


/* Escreva um programa em C que tenha como entrada o valor de x e o n�mero de termos da soma.
O programa deve verificar se x est� no intervalo v�lido, e caso positivo, calcular o valor
aproximado em radianos e graus do arctan(x) usando o n�mero de termos informado pelo usu�rio.
Observe como a aproxima��o do valor melhora com mais termos. Para a convers�o para graus, use
a constante M_PI que define p (inclua a biblioteca math.h).*/
/*// calculo do fatorial
*/
int main(void)
{
    int continuar;

    do
    {
        double x;//utilizamos para ter mais precis�o no nosso calcuco envolvendo angulos
        int num_termos;

        printf("Digite o valor de x: ");//armazenar
        scanf("%lf", &x);//armazenar o x

        if (x >= -1 && x <1)   // verificar se o x est� no intervalo v�lido.
        {
            printf("Digite o n�mero de termos da soma: ");
            scanf("%d", &num_termos);

            double arctan_x = 0;
            int sinal = 1;
            double potencia_x = x;
            //esse for foi feito com o intuito de aumentar a potencia em impares por isso o calculo por 2 e a subtra��o de 1.
            for (int i = 1; i <= num_termos; i++)
            {
                arctan_x += sinal * potencia_x / (2 * i - 1);
                sinal *= -1;
                potencia_x *= x * x;
            }

            // Convertendo para radianos e graus
            double arctan_rad = arctan_x;//convers�o para radiano
            double arctan_graus = arctan_x * 180.0 / M_PI;//convers�o para graus

            printf("O valor aproximado de arctan(%.2lf) em radianos: %.6lf\n", x, arctan_rad);//resultado da convers�o em rad
            printf("O valor aproximado de arctan(%.2lf) em graus: %.7lf\n", x, arctan_graus);//resultado da convers�o em graus
        }
        else
        {
            printf("VALOR INVALIDO!!!!!!!!!!!!");
        }
        printf("\nDeseja continuar? (1 - Sim, 0 - N�o): ");
        scanf("%d", &continuar);
    }
    while(continuar);

    return 0;
}




