#include <stdio.h>
	char menu(void) {
	  char opcaoDigitada;
	  printf("CALCULADORA");
	  printf("\n 1- Adicao");
	  printf("\n 2 - Subtracao");
	  printf("\n 3 - Multiplicacao");
	  printf("\n 4 - Divisao");
	  printf("\n 0 - Sair");
	  printf("\n ***************");
	  printf("\n Selecione a opcao: ");
	  opcaoDigitada=getchar(); //le do teclado a opcao
	  return opcaoDigitada;
	}
	int main(void) {
	float num1Adicao, num2Adicao, adicao;
	float num1Subtracao, num2Subtracao, subtracao;
	float num1Multiplicacao, num2Multiplicacao, multiplicacao;
	float num1Divisao, num2Divisao, divisao;
	char opcao = menu();
	switch (opcao)
	{
	  case '1':
	  	printf("\n ADICAO");
	  	printf("\n ####################");
	    printf("\n Digite o primeiro numero: ");
	    scanf("%f", &num1Adicao);
	    printf("\n Digite o segundo numero: ");
	    scanf("%f", &num2Adicao);
	    adicao = num1Adicao+num2Adicao;
	    printf("\n O resultado e: %f", adicao);
	    break;
	  case '2':
	  	printf("\n SUBTRACAO");
	  	printf("#########");
	    printf("Digite o primeiro numero: ");
	    scanf("%f", &num1Subtracao);
	    printf("Digite o segundo numero: ");
	    scanf("%f", &num2Subtracao);
	    subtracao = num1Subtracao-num2Subtracao;
	    printf("O resultado e: %f", subtracao);
	    break;
	  case '3':
	    printf("\n MULTIPLICACAO");
	    printf("\n #############");
	    printf("\n Digite o primeiro numero: ");
	    scanf("%f", &num1Multiplicacao);
	    printf("\n Digite o segundo numero: ");
	    scanf("%f", &num2Multiplicacao);
	    multiplicacao = num1Multiplicacao*num2Multiplicacao;
	    printf("\n O resultado e: %.2f", multiplicacao);
	    break;
	  case '4':
	    printf("\n DIVISAO");
	    printf("\n #######");
	    printf("\n Digite o primeiro numero: ");
	    scanf("%f", &num1Divisao);
	    printf("\n Digite o segundo numero: ");
	    scanf("%f", &num2Divisao);
	    divisao = num1Divisao/num2Divisao;
	    printf("\n O resultado e: %.2f", divisao);
	    break;
	  case '0':
    printf("\n Voce escolheu SAIR");
	    break;
	  default:
	    printf("\n Opcao invalida");
	  }
	  getch();
	return 0;
	}
