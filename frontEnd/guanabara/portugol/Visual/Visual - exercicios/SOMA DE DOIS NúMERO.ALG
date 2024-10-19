Algoritmo "Soma de dois número"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 06/07/2024
Var
// Seção de Declarações das variáveis 
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
// Seção de Comandos, procedimento, funções, operadores, etc... 
Escreva ("Digite um número:")
Leia (Na)
Escreva ("Digite outro número:")
Leia (Nb)
S <- Na + Nb
EscrevaL("A soma dos dois números ditos foi de: ",S)
Escreva("Você também deseja saber qual é a subtração, divisão e multiplicação desses dois números?")
Leia(Afir)
Sub <- Na - Nb
Divi <- Na / Nb
Mult <- Na * Nb
Escreval ("Certo, a subtração do número", Na, " com o número ", Nb," é de: ", Sub)
Escreval ("Já, a divisão do número", Na, " com o número ", Nb, " é de: ", Divi)
Escreval ("Por fim, a multiplicação do número ", Na, " com o número ", Nb, " é de: ", Mult)
Escreva ("Você deseja saber mais informações sobre os possíveis cálculos utilizando os número", Na, " e ", Nb," ? ")
Leia (Afir1)
Escreval ("Ok, vamos lá!")
Expoente <- Exp(Na,Nb)
Modulo <- Na % Nb
Escreval ("O expoente entre o número ", Na, " com o número ", Nb, " é de ", Expoente)
Escreval ("Já o módulo entre o número ", Na, " com o número ", Nb, " é de ", Modulo)
Escreva ("Você deseja saber o cos/sen/tang de algum ângulo?")
Leia (Afirm2)
Escreva ("Muito bem,informe um ângulo: ")
Leia (Numero)
angulo <- Cos(Numero)
angulo1 <- Sen(Numero)
angulo2 <- Tan(Numero)
Escreval ("O Cosseno do ângulo ", Numero, " é de ", angulo)
Escreval ("Já o Seno do ângulo ", Numero, " é de ", angulo1)
Escreval ("Por fim, a tangente do ângulo ", Numero, " é de ", angulo2)
Escreva ("Caro usuário, muito obrigado por participar dessa dinâmica")

Fimalgoritmo