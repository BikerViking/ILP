programa
{

//Crie um menu que possibilite ao usu�rio interagir as seguintes op��es
/*
1 - cart�o de cr�dito
2 - Cart�o de d�bito
3 - Pagamento via boleto
4 - Pagamento com bitcoin
5 - Falar com atendente
0 - Sair da sess�o de pagamento e sair do programa.

*/
	funcao inicio()
	{
	 	inteiro opt = 0
		faca
	{
		escreva("1 - cart�o de cr�dito\n")
		escreva("2 - Cart�o de d�bito\n")
		escreva("3 - Pagamento via boleto\n")
		escreva("4 - Pagamento com bitcoin\n")
		escreva("5 - Falar com atendente\n")
		escreva("0 - Sair da sess�o de pagamento e sair do programa.\n")
		
		leia(opt)
		escolha(opt)
		{
			caso 1 :
				escreva("Pago cart�o de cr�dito\n")
				
				pare
			caso 2 :
				escreva("Pago cart�o de d�bito \n")
				pare				
			caso 3 :
				escreva("Pago via boleto \n")
				pare			
			caso 4 :
				escreva("Pago btcoin \n")
				pare
			caso 5 :
				escreva("Falar com atentende \n")
				pare				
			caso 0 :
				escreva("sess�o encerrado \n")
				opt = 0
				pare	
		 caso contrario :
		 	escreva("Op��o inv�lida")
		}
	}enquanto(opt != 0)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 88; 
 */