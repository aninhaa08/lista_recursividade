#include <stdio.h>
#include <string.h>

/*  FATORIAL

int fat(int num){
	
	if(num == 0 || num == 1){
		return 1;
	}
	
	return num * fat(num - 1);
}

*/

/*  SOMA N�MEROS NATURAIS

int somarNum(int num){
	int soma;
	
	if(num == 0){
		return 0;
	}
	
	return num + somarNum(num - 1);
}

*/

/*  FIBONACCI

int termoFibonacci(int num){
	if(num == 0){
		return 0;
	} else if(num == 1){
		return 1;
	}
	
	return termoFibonacci(num - 1) + termoFibonacci(num - 2);
}

*/

/* POT�NCIA

int potencia(int n, int x){
	if(n == 0){
		return 1;
	}
	
	return x * potencia(n-1, x);
}

*/

/*  CONTAGEM REGRESSIVA

void contagemRegressiva(int num){
	printf("%d\n", num);
	
	if(num == 0){
		printf("\nLan�amento!");
		return;
	}
	
	return contagemRegressiva(num-1);
}

*/

/*  SOMA D�GITOS

int somaDig(int num){
	if(num == 0){
		return 0;
	}
	
	return (num % 10) + somaDig(num / 10);
}

*/

/* INVERS�O DE STRINGS

void inverterString(char * s, int inicial, int final){
	if(inicial >= final){
		return;
	}
	
	char t = s[inicial];
	s[inicial] = s[final];
	s[final] = t;
	
	inverterString(s, inicial + 1, final - 1);
}

*/

int main(){
	
	/*  FATORIAL
	
	int num;
	int result;
	
	printf("Insira o n�mero desejado: ");
	scanf("%d", &num);
	
	if(num == 0 || num < 0) {
		printf("\n N�o � poss�vel calcular a fatorial.");
	}
	else {
		result = fat(num);
	}
	
	printf("Resultado da fatorial: %d", result);
	
	*/
	
	/*  SOMA N�MEROS NATURAIS
	
	int quant;
	
	printf("Informe a quantidade de n�meros naturais a ser somada: ");
	scanf("%d", &quant);
	
	int result = somarNum(quant);
	printf("Resultado da soma: %d", result);
	
	*/
	
	/*  FIBONACCI
	
	int num;
	
	printf("Informe o termo a ser retornado de Fibonacci: ");
	scanf("%d", &num);
	
	int termo = termoFibonacci(num);
	printf("Termo da sequ�ncia: %d", termo);
	
	*/
	
	/*  POT�NCIA
	
	int n;
	int x;
	
	printf("Informe o n�mero a ser n (no caso em que ser� n elevado a x): ");
	scanf("%d", &n);
	
	printf("Informe o n�mero a ser x (no caso em que ser� n elevado a x): ");
	scanf("%d", &x);
	
	int result = potencia(n, x);
	printf("Resultado da pot�ncia: %d", result);
	
	*/
	
	/*  CONTAGEM REGRESSIVA
	
	int num;
	
	printf("Informe o in�cio da contagem regressiva: ");
	scanf("%d", &num);
	
	contagemRegressiva(num);
	
	*/
	
	/*  SOMA D�GITOS
	
	int num;
	
	printf("Informe um n�mero: ");
	scanf("%d", &num);
	
	int result = somaDig(num);
	printf("Resultado da soma dos d�gitos: %d", result);
	
	*/
	
	/*  INVERS�O DE STRINGS
	
	char s[] = "recurs�o";
	
	inverterString(s, 0, strlen(s) - 1);
	printf("%s\n", s);
	
	*/
	
}
