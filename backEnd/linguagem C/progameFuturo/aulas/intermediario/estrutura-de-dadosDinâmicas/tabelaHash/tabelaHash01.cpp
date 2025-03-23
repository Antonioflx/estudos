#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
	Aula 259: Tabelha Hash;
		-> Estutura de dados utilizada para tornar
		o processo de busca mais eficiente.
	
	Vetor, Matriz, Lista, Fila, Pilha
		-> Estrutura de Dados para armazenar.
		
	Tabela Hash
		-> Busca mais eficiente.
		
		* Conjunto de elementos que será inserido no vetor
		-> Cada elemento possui chave única ( que representa o índice onde vai ser armazenado no vetor )
		
	* Nomenclaturas:
		1. Chave: ( identificador do elemento )
			-> 967000
			-> 421002
		2. Função Hash ou Espalhamento: ( Dividir o conjunto de elementos e espalhar para o vetor )
			-> chave % 100;
		3. Tabela Hash: ( vetor onde contém os elementos )
			-> Não irá ser percorrido o vetor de forma sequencial
			-> Utilizará a Função hash para buscar elemento.
		4. Colisao:
			-> Quando 2 chaves quando fizer a função hash -> incide no mesmo indice.
					
		Tabela Hash -> mais eficiente
			
			1. Tamanho Primo ( Ex: 11 );
				-> Olhar para o conjunto de dados 
					Ex: 6 -> faz a conta M = 2 * 6 ( primo mais proximo ) = 11.
				
			2. Fator de Carga -> fc = TamanhoConjuntoDeDados / TamanhadoDaTabela -> 6/11 = 0,54.
				-> 6/11 = 0,54 -> Significa que para o tamanho de dados / tamanho da tabela.
					-> A tabela terá 54% do espaço ocupada
					-> Resultado:
						-> É muito próximo de 0 -> Entao, a tabela está pouco preenchida ( Desperdiçando memória )
						-> É 0,5 -> Então, a tabela está preenchida pela metade	( Ideal seria esse )
						-> É muito próximo de 1 -> Então a tabela está quase toda preenchida (Pouco espaço vago, consequentemente busca não é eficiente)
			
			3. Função de Espalhamento
				-> chave % M (11)
				
			5. Tratameto de Colisões:
				-> Nunca vai ser ordenado as chaves, precisa tratar essas colisões:
					Por exemplo: 
						73 % 11 = 7; // aloca no indice 7
						40 % 11 = 7; // não pode entrar pois a chave 73 está no indice 7
						
					1 Forma: (Memoria é um problema)
						-> Caso já possua alguém na posição vai para a posição seguinte até achar um espaço vazio.
						-> Por isso precisamos ter posições vagas para preencher
						-> Quando formos fazer a busca: 
							-> 73 % 11 // indice 7. É o 73 que está na posição 
							-> S -> Achou. 
							-> N -> Acrescenta +1 até achar. ( Se n achar, n está na tabela )
						
					2 Forma: (Memoria sobrando)
						-> Vetor de lista encadeadas
							-> chave % M = indice
								-> Não coloca no vetor e sim na lista encadeada
						-> chave % Tam = o mesmo indice
							-> Coloca na lista encadeada
							-> Tipo 73 % 11 e 40 % 11 == 7
							-> Caso tenha outro numero fazer o mesmo.
					Ex:
					Os indices do vetor possuem uma lista encadeada = NULL;
						[0.] 
						[1.]
						[2.] 
							-> 24	
						[3.]
						[4.]
						[5.] 
							-> 38
						[6.]
							-> 171
						[7.]
							-> 73 -> 40		
						[8.]	
							-> 8
					

	Chaves:
		967000 							
		...
		421002
		...
		618396
			-> Ultimos digitos não se repetem, em vez de usar a chave por completo
			-> Pode utilizar os 2 útimos digitos
			-> chave % 100 (tamanho do vetor); -> Função hash ( dividir o conjunto de elementos -> para espalhar na tabela)
	
	* Fazer a busca
		chave % 100; 
			(Se tiver elemento, ele faz parte da tabela hash)	
			(Se não, nao faz)

*/			

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Codigo


	return 0;
} 
