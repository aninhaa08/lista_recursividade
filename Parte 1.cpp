#include <stdio.h>
#include <string.h>

/*  // FATORIAL

int fat(int num){
	
	if(num == 0 || num == 1){
		return 1;
	}
	
	return num * fat(num - 1);
}

*/

/*  // SOMA NÚMEROS NATURAIS

int somarNum(int num){
	int soma;
	
	if(num == 0){
		return 0;
	}
	
	return num + somarNum(num - 1);
}

*/

/*  // FIBONACCI

int termoFibonacci(int num){
	if(num == 0){
		return 0;
	} else if(num == 1){
		return 1;
	}
	
	return termoFibonacci(num - 1) + termoFibonacci(num - 2);
}

*/

/* // POTÊNCIA

int potencia(int n, int x){
	if(n == 0){
		return 1;
	}
	
	return x * potencia(n-1, x);
}

*/

/*  // CONTAGEM REGRESSIVA

void contagemRegressiva(int num){
	printf("%d\n", num);
	
	if(num == 0){
		printf("\nLançamento!");
		return;
	}
	
	return contagemRegressiva(num-1);
}

*/

/*  // SOMA DÍGITOS

int somaDig(int num){
	if(num == 0){
		return 0;
	}
	
	return (num % 10) + somaDig(num / 10);
}

*/

/* // INVERSÃO DE STRINGS

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

/* // PALÍNDROMO

int palindromo(char palavra[], int inicio, int fim) {    
    if(inicio >= fim) {        
        return 1;    
    }    
    
    if(palavra[inicio] != palavra[fim]) {        
        return 0;    
    }        
    
    return palindromo(palavra, inicio + 1, fim - 1);
}

*/

/* // MDC

int MDC(int a, int b) {
    if (b == 0) {
        return a;
    }
    return MDC(b, a % b);
}

*/

/* // MULTIPLICAÇÃO RECURSIVA

int multiplicacaoRecursiva(int a, int b) {
    if (b == 0) return 0;
    return a + multiplicacaoRecursiva(a, b - 1);
}

*/

/* // CONTAGEM DE CARACTERES

int contarCarac(const char *str, char carac) {
    if (*str == '\0') {
        return 0;
    }
    return (*str == carac) + contarCarac(str + 1, carac);
}

*/

/* // SOMA ARRAY

int somaArray(int arr[], int n) {
    if (n == 0) return 0;
    return arr[n-1] + somaArray(arr, n-1);
}

*/

/* // NUMERO PRIMO 

int numPrimo(int n, int i) {
    if (n <= 2) return (n == 2);
    if (n % i == 0) return 0;
    if (i * i > n) return 1;
    return numPrimo(n, i + 1);
}

*/

/* // DECIMAL PARA BINÁRIO

void decimalParaBinario(int n) {
    if (n == 0) return;
    decimalParaBinario(n / 2);
    printf("%d", n % 2);
}

*/

/* // NÚMEROS PARES

void imprimirPares(int n) {
    if (n < 0) return;
    imprimirPares(n - 1);
    if (n % 2 == 0) printf("%d ", n);
}

*/

/* // NÚMEROS ÍMPARES

void imprimirImpares(int n) {
    if (n <= 0) return;
    imprimirImpares(n - 1);
    if (n % 2 != 0) printf("%d ", n);
}

*/

/* // BUSCA ARRAY

int buscaArray(int arr[], int n, int x) {
    if (n == 0) return 0;
    if (arr[n-1] == x) return 1;
    return buscaArray(arr, n-1, x);
}

*/

/* // COMP ARRAY

int comprimentoArray(const char *str) {
    if (*str == '\0') return 0;
    return 1 + comprimentoArray(str + 1);
}

*/

/* // TORRE HANÓI

void torreDeHanoi(int n, char origem, char destino, char auxiliar) {
    if (n == 1) {
        printf("Mover disco 1 de %c para %c\n", origem, destino);
        return;
    }
    torreDeHanoi(n-1, origem, auxiliar, destino);
    printf("Mover disco %d de %c para %c\n", n, origem, destino);
    torreDeHanoi(n-1, auxiliar, destino, origem);
}

*/

/* // PERMUTAÇÃO

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permutar(char *str, int l, int r) {
    if (l == r) {
        printf("%s\n", str);
    } else {
        for (int i = l; i <= r; i++) {
            swap((str + l), (str + i));
            permutar(str, l + 1, r);
            swap((str + l), (str + i)); // backtrack
        }
    }
}

*/

/* // COMB ARRAY

void combina(int arr[], int n, int k, int index, int data[], int i) {
    if (index == k) {
        for (int j = 0; j < k; j++) printf("%d ", data[j]);
        printf("\n");
        return;
    }
    if (i >= n) return;
    
    data[index] = arr[i];
    combina(arr, n, k, index + 1, data, i + 1);
    combina(arr, n, k, index, data, i + 1);
}

*/

/* // SUBCONJ ARRAY

void subconjuntos(int arr[], int n, int index, int subset[], int subsetSize) {
    if (index == n) {
        printf("{ ");
        for (int i = 0; i < subsetSize; i++) printf("%d ", subset[i]);
        printf("}\n");
        return;
    }
    
    subset[subsetSize] = arr[index];
    subconjuntos(arr, n, index + 1, subset, subsetSize + 1);
    
    subconjuntos(arr, n, index + 1, subset, subsetSize);
}

*/

/* // MERGE SORT

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];
    for (i = 0; i < n1; i++) L[i] = arr[l + i];
    for (j = 0; j < n2; j++) R[j] = arr[m + 1 + j];

    i = 0; j = 0; k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

*/

/* // QUICK SORT

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

*/

/* // BUSCA BINÁRIA

int buscaBinaria(int arr[], int l, int r, int x) {
    if (l > r) return -1;
    
    int m = l + (r - l) / 2;
    
    if (arr[m] == x) return m;
    if (arr[m] > x) return buscaBinaria(arr, l, m - 1, x);
    return buscaBinaria(arr, m + 1, r, x);
}

*/

/* // EXPONENCIAÇÃO

int exponenciacaoRap(int x, int n) {
    if (n == 0) return 1;
    if (n % 2 == 0) {
        int y = exponenciacaoRap(x, n/2);
        return y * y;
    } else {
        return x * exponenciacaoRap(x, n-1);
    }
}

*/

/* // CAMINHO MATRIZ

void encontrarCaminho(int x, int y, int x2, int y2) {
    printf("(%d,%d) ", x, y);
    if (x == x2 && y == y2) {
        printf("\n");
        return;
    }
    if (x < x2) {
        encontrarCaminho(x + 1, y, x2, y2);
    } else if (y < y2) {
        encontrarCaminho(x, y + 1, x2, y2);
    }
}

int contarCaminhos(int x, int y, int x2, int y2) {
    if (x > x2 || y > y2) return 0;
    if (x == x2 && y == y2) return 1;
    return contarCaminhos(x + 1, y, x2, y2) + contarCaminhos(x, y + 1, x2, y2);
}

*/

/* // N-RAINHAS

#define MAX 10

int tabuleiro[MAX];

int podeColocar(int linha, int coluna) {
    for (int i = 0; i < linha; i++) {
        if (tabuleiro[i] == coluna || abs(tabuleiro[i] - coluna) == abs(i - linha)) {
            return 0;
        }
    }
    return 1;
}

void imprimirTabuleiro(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (tabuleiro[i] == j) {
                printf("Q ");
            } else {
                printf(". ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void resolver(int linha, int n) {
    if (linha == n) {
        imprimirTabuleiro(n);
        return;
    }
    for (int coluna = 0; coluna < n; coluna++) {
        if (podeColocar(linha, coluna)) {
            tabuleiro[linha] = coluna;
            resolver(linha + 1, n);
        }
    }
}

*/

/* // BACKTRACKING

#define N 3
#define M 4

int labirinto[N][M] = {
    {0, 1, 0, 0},
    {0, 0, 0, 1},
    {1, 0, 1, 0}
};

int solucao[N][M] = {0};

int mover(int x, int y) {
    if (x == N-1 && y == M-1) {
        solucao[x][y] = 1;
        return 1;
    }
    if (x >= 0 && x < N && y >= 0 && y < M && labirinto[x][y] == 0) {
        solucao[x][y] = 1;

        if (mover(x, y + 1)) return 1; // direita
        if (mover(x + 1, y)) return 1; // baixo

        solucao[x][y] = 0; // backtracking
    }
    return 0;
}

void imprimirSolucao() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (solucao[i][j]) {
                printf("* ");
            } else {
                printf("%d ", labirinto[i][j]);
            }
        }
        printf("\n");
    }
}

*/

/* // PARENTÊSIS VÁLIDOS

void gerarParenteses(char *str, int pos, int n, int aberto, int fechado) {
    if (fechado == n) {
        str[pos] = '\0';
        printf("%s\n", str);
        return;
    }
    if (aberto < n) {
        str[pos] = '(';
        gerarParenteses(str, pos + 1, n, aberto + 1, fechado);
    }
    if (fechado < aberto) {
        str[pos] = ')';
        gerarParenteses(str, pos + 1, n, aberto, fechado + 1);
    }
}

*/

int main(){
	
	/*  // FATORIAL
	
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
	
	/*  // SOMA NÚMEROS NATURAIS
	
	int quant;
	
	printf("Informe a quantidade de números naturais a ser somada: ");
	scanf("%d", &quant);
	
	int result = somarNum(quant);
	printf("Resultado da soma: %d", result);
	
	*/
	
	/*  // FIBONACCI
	
	int num;
	
	printf("Informe o termo a ser retornado de Fibonacci: ");
	scanf("%d", &num);
	
	int termo = termoFibonacci(num);
	printf("Termo da sequência: %d", termo);
	
	*/
	
	/*  // POTÊNCIA
	
	int n;
	int x;
	
	printf("Informe o número a ser n (no caso em que será n elevado a x): ");
	scanf("%d", &n);
	
	printf("Informe o número a ser x (no caso em que será n elevado a x): ");
	scanf("%d", &x);
	
	int result = potencia(n, x);
	printf("Resultado da potência: %d", result);
	
	*/
	
	/*  // CONTAGEM REGRESSIVA
	
	int num;
	
	printf("Informe o início da contagem regressiva: ");
	scanf("%d", &num);
	
	contagemRegressiva(num);
	
	*/
	
	/*  // SOMA DÍGITOS
	
	int num;
	
	printf("Informe um número: ");
	scanf("%d", &num);
	
	int result = somaDig(num);
	printf("Resultado da soma dos dígitos: %d", result);
	
	*/
	
	/*  // INVERSÃO DE STRINGS
	
	char s[] = "recursão";
	
	inverterString(s, 0, strlen(s) - 1);
	printf("%s\n", s);
	
	*/

	/* // PALÍNDROMO

 	char palavra[100];        
    
	printf("Insira a palavra a ser verificada: ");    
	scanf("%s", palavra);        
	
	if(palindromo(palavra, 0, strlen(palavra) - 1)){        
	printf("%s é palíndromo.\n", palavra);    
	} else {        
	printf("%s não é palíndromo.\n", palavra);    
	}
 
	*/

	/* // MDC

	int num1, num2;

	printf("Digite o primeiro número para calcular o MDC: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo número para calcular o MDC: ");
	scanf("%d", &num2);
	
	printf("O MDC dos números %d e %d é: %d\n", num1, num2, MDC(num1, num2));

	*/

	/* // MULTIPLICAÇÃO RECURSIVA

	int a = 0;
	int b = 0;
	
	printf("Insira o primeiro número para a multiplicação: ");
	scanf("%d", &a);
	printf("Insira o segundo número: ");
	scanf("%d", &b);
	
	printf("Resultado: %d\n", multiplicacaoRecursiva(a, b));

	*/

	/* // CONTAGEM DE CARACTERES

	char str[100];
	char carac;
	
	printf("Insira a palavra a ser utilizada: ");
	scanf("%s", str);
	
	printf("Agora, insira a letra a ser contada: ");
	scanf(" %c", &carac);
	
	printf("Quantidade de letras '%c' na palavra %s: %d\n", carac, str, contarCarac(str, carac));

	*/

	/* // SOMA ARRAY

	int arr[] = {1, 2, 3, 4};
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", somaArray(arr, n));

	*/

	/* // NÚMERO PRIMO

	int n = 7;
	printf("%d\n", numPrimo(n, 2));

	*/

	/* // DECIMAL PARA BINÁRIO

	int n = 10;
	if (n == 0) printf("0");
	else decimalParaBinario(n);
	printf("\n");

	*/

	/* // NÚMEROS PARES

	int n = 6;
	imprimirPares(n);
	printf("\n");

	*/

	/* // NÚMEROS ÍMPARES

	int n = 7;
	imprimirImpares(n);
	printf("\n");

	*/

	/* // BUSCA ARRAY
	
	int arr[] = {2, 4, 6, 8};
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", buscaArray(arr, n, 6));

	*/

	/* // COMP STRING
	
	char str[] = "recursivo";
	printf("%d\n", comprimentoArray(str));

	*/

	/* // TORRE HANÓI
	
	int n = 2;
	torreDeHanoi(n, 'A', 'C', 'B');

	*/

	/* // PERMUTAÇÃO

	char str[] = "abc";
	int n = strlen(str);
	permutar(str, 0, n - 1);

	*/

	/* // COMB ARRAY

	int arr[] = {1, 2, 3};
	int k = 2;
	int data[k];
	int n = sizeof(arr) / sizeof(arr[0]);
	combina(arr, n, k, 0, data, 0);

	*/

	/* // SUBCONJ ARRAY
	
	int arr[] = {1, 2};
	int subset[10];
	int n = sizeof(arr) / sizeof(arr[0]);
	subconjuntos(arr, n, 0, subset, 0);

	*/

	/* // MERGE SORT

	int arr[] = {5, 3, 8, 1};
	int n = sizeof(arr) / sizeof(arr[0]);
	mergeSort(arr, 0, n-1);
	for (int i = 0; i < n; i++) printf("%d ", arr[i]);
	printf("\n");

	*/

	/* // QUICK SORT

	int arr[] = {9, 2, 5, 1, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	quickSort(arr, 0, n-1);
	for (int i = 0; i < n; i++) printf("%d ", arr[i]);
	printf("\n");

	*/

	/* // BUSCA BINÁRIA
	
	int arr[] = {1, 3, 5, 7, 9};
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", buscaBinaria(arr, 0, n-1, 5));

	*/

	/* // EXPONENCIAÇÃO

	int x = 0;
 	int n = 0;
 
	printf("Informe um número: ");
	scanf("%d", &x);
 	printf("Informe outro número: ");
	scanf("%d", &n);
	printf("Resultado da exponenciação: %d\n", exponenciacaoRap(x, n));

	*/

	/* // CAMINHO MATRIZ

	int n = 3, m = 3;
	printf("Um caminho:\n");
	encontrarCaminho(0, 0, n-1, m-1);
	
	printf("Total de caminhos: %d\n", contarCaminhos(0, 0, n-1, m-1));

	*/

	/* // N-RAINHAS

	int n;
	printf("Digite o número de rainhas: ");
	scanf("%d", &n);
	resolver(0, n);

	*/

	/* // BACKTRACKING

	if (mover(0, 0)) {
		imprimirSolucao();
	} else {
		printf("Nenhum caminho encontrado!\n");
	}

	*/

	/* // PARENTÊSIS VÁLIDOS

	int n;
	printf("Digite o número de pares de parênteses: ");
	scanf("%d", &n);
	
	char str[2 * n + 1];
	gerarParenteses(str, 0, n, 0, 0);

	*/
	
	return 0;
}



