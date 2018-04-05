#include <stdio.h> // Biblioteca que permite usar funções padrões

/* 
 * Função Principal do programa. 
 * Será essa função que o computador executará por padrão.
 */
int main () { 
/* 
 * Funções podem ter tipos. 
 * Ao declarar um tipo para uma função se compromete a retornar um valor daquele tipo. 
 * Logo, a função main(), por ser do tipo inteiro, se compromete a retornar um valor inteiro.
 */	
	
	/*
	 * printf é uma função da biblioteca stdio.h.
	 * Funções são, basicamente, um conjunto de códigos que fazem uma determinada tarefa.
	 * Neste caso, essa função toma uma string como argumento e escreve seu valor na tela do console.
	 * Argumentos são valores que funções podem ou não precisar para resolver sua tarefa. Alguns argumentos são essenciais, outros opcionais e, em alguns casos, funções não precisam de argumentos.
	 * Argumentos pode ser valores estáticos, como "Hello World!" ou variáveis. 	
	 */
	printf("Hello World!"); 
	
	// Quando a função principal retorna zero ela informa que acabou.
	return 0; 
}
