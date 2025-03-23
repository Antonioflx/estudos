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
		
		* Conjunto de elementos que ser� inserido no vetor
		-> Cada elemento possui chave �nica ( que representa o �ndice onde vai ser armazenado no vetor )
		
	* Nomenclaturas:
		1. Chave: ( identificador do elemento )
			-> 967000
			-> 421002
		2. Fun��o Hash ou Espalhamento: ( Dividir o conjunto de elementos e espalhar para o vetor )
			-> chave % 100;
		3. Tabela Hash: ( vetor onde cont�m os elementos )
			-> N�o ir� ser percorrido o vetor de forma sequencial
			-> Utilizar� a Fun��o hash para buscar elemento.
		4. Colisao:
			-> Quando 2 chaves quando fizer a fun��o hash -> incide no mesmo indice.
					
		Tabela Hash -> mais eficiente
			
			1. Tamanho Primo ( Ex: 11 );
				-> Olhar para o conjunto de dados 
					Ex: 6 -> faz a conta M = 2 * 6 ( primo mais proximo ) = 11.
				
			2. Fator de Carga -> fc = TamanhoConjuntoDeDados / TamanhadoDaTabela -> 6/11 = 0,54.
				-> 6/11 = 0,54 -> Significa que para o tamanho de dados / tamanho da tabela.
					-> A tabela ter� 54% do espa�o ocupada
					-> Resultado:
						-> � muito pr�ximo de 0 -> Entao, a tabela est� pouco preenchida ( Desperdi�ando mem�ria )
						-> � 0,5 -> Ent�o, a tabela est� preenchida pela metade	( Ideal seria esse )
						-> � muito pr�ximo de 1 -> Ent�o a tabela est� quase toda preenchida (Pouco espa�o vago, consequentemente busca n�o � eficiente)
			
			3. Fun��o de Espalhamento
				-> chave % M (11)
				
			5. Tratameto de Colis�es:
				-> Nunca vai ser ordenado as chaves, precisa tratar essas colis�es:
					Por exemplo: 
						73 % 11 = 7; // aloca no indice 7
						40 % 11 = 7; // n�o pode entrar pois a chave 73 est� no indice 7
						
					1 Forma: (Memoria � um problema)
						-> Caso j� possua algu�m na posi��o vai para a posi��o seguinte at� achar um espa�o vazio.
						-> Por isso precisamos ter posi��es vagas para preencher
						-> Quando formos fazer a busca: 
							-> 73 % 11 // indice 7. � o 73 que est� na posi��o 
							-> S -> Achou. 
							-> N -> Acrescenta +1 at� achar. ( Se n achar, n est� na tabela )
						
					2 Forma: (Memoria sobrando)
						-> Vetor de lista encadeadas
							-> chave % M = indice
								-> N�o coloca no vetor e sim na lista encadeada
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
			-> Ultimos digitos n�o se repetem, em vez de usar a chave por completo
			-> Pode utilizar os 2 �timos digitos
			-> chave % 100 (tamanho do vetor); -> Fun��o hash ( dividir o conjunto de elementos -> para espalhar na tabela)
	
	* Fazer a busca
		chave % 100; 
			(Se tiver elemento, ele faz parte da tabela hash)	
			(Se n�o, nao faz)

*/			

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Codigo


	return 0;
} 
