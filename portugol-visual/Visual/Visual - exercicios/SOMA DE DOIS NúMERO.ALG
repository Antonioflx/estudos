Algoritmo "Soma de dois n�mero"
// 
//  
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 06/07/2024
Var
// Se��o de Declara��es das vari�veis 
Na,Nb,S:inteiro
Afir:caractere
Sub:inteiro
Divi:real
Mult:inteiro
Afir1:caractere
Expoente:real
Modulo:real
Afirm2:caractere
angulo:real
angulo1:real
angulo2:real
Numero:real



Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
Escreva ("Digite um n�mero:")
Leia (Na)
Escreva ("Digite outro n�mero:")
Leia (Nb)
S <- Na + Nb
EscrevaL("A soma dos dois n�meros ditos foi de: ",S)
Escreva("Voc� tamb�m deseja saber qual � a subtra��o, divis�o e multiplica��o desses dois n�meros?")
Leia(Afir)
Sub <- Na - Nb
Divi <- Na / Nb
Mult <- Na * Nb
Escreval ("Certo, a subtra��o do n�mero", Na, " com o n�mero ", Nb," � de: ", Sub)
Escreval ("J�, a divis�o do n�mero", Na, " com o n�mero ", Nb, " � de: ", Divi)
Escreval ("Por fim, a multiplica��o do n�mero ", Na, " com o n�mero ", Nb, " � de: ", Mult)
Escreva ("Voc� deseja saber mais informa��es sobre os poss�veis c�lculos utilizando os n�mero", Na, " e ", Nb," ? ")
Leia (Afir1)
Escreval ("Ok, vamos l�!")
Expoente <- Exp(Na,Nb)
Modulo <- Na % Nb
Escreval ("O expoente entre o n�mero ", Na, " com o n�mero ", Nb, " � de ", Expoente)
Escreval ("J� o m�dulo entre o n�mero ", Na, " com o n�mero ", Nb, " � de ", Modulo)
Escreva ("Voc� deseja saber o cos/sen/tang de algum �ngulo?")
Leia (Afirm2)
Escreva ("Muito bem,informe um �ngulo: ")
Leia (Numero)
angulo <- Cos(Numero)
angulo1 <- Sen(Numero)
angulo2 <- Tan(Numero)
Escreval ("O Cosseno do �ngulo ", Numero, " � de ", angulo)
Escreval ("J� o Seno do �ngulo ", Numero, " � de ", angulo1)
Escreval ("Por fim, a tangente do �ngulo ", Numero, " � de ", angulo2)
Escreva ("Caro usu�rio, muito obrigado por participar dessa din�mica")

Fimalgoritmo