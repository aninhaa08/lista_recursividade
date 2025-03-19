#include <stdio.h>

/*  FATORIAL

int fat(int num){
	
	if(num == 0 || num == 1){
		return 1;
	}
	
	return num * fat(num - 1);
}

*/

int main(){
	
	/*  FATORIAL
	
	int num;
	int result;
	
	printf("Insira o número desejado: ");
	scanf("%d", &num);
	
	if(num == 0 || num < 0) {
		printf("\n Não é possível calcular a fatorial.");
	}
	else {
		result = fat(num);
	}
	
	printf("Resultado da fatorial: %d", result);
	
	*/
	
	
	int quant;
	
	printf("Informe a quantidade de números naturais a ser digitada: ");
	scanf("%d", &quant);
	
	int listaNum[quant];
	
	for(int i = 0; i != quant; i++){
		printf("Digite o %dº número a ser adicionado: ", i+1);
		scanf("%d", &listaNum[i]);
	}
	
	
	
	for(int i = 0; i != quant; i++){
		printf("%d", listaNum[i]);
	}
	
}


