programa
{
// Converter de R$ para $ solicitando cota��o de moeda
	funcao inicio()
	{
		real reais,dolares,cotacao

		escreva("Informe a cota��o do dia: \n")
		leia(cotacao)
		escreva("Informe o quanto possui em reais: \n")
		leia(reais)
		dolares = reais / cotacao
		escreva("Voce possui $",dolares)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 261; 
 */