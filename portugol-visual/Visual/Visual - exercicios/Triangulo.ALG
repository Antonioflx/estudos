Algoritmo "Tri�ngulo - problema"

Var
A,B,C: inteiro
EQ,ES,ISO:logico
Afirm:Caractere
V,F: logico
neg: caractere

Inicio
Escreva("Bom dia, voc� deseja saber qual � o tipo de tri�ngulo?")
Leia(Afirm)
Escreval("Digite os lados do tri�ngulo")
Escreva ("Informe o primeiro lado:")
Leia (A)
Escreva ("Informe o segundo lado:")
Leia (B)
Escreva ("Informe o terceiro lado:")
Leia (C)
Escreval ("Um tri�ngulo s� pode existir, de acordo com a lei matem�tica. A soma de um lado do tri�ngulo com outro lado tem que ser maior que o lado restante")
Escreval ("Para ficar mais f�cil de entender, seria que L1+L2>L3")
Escreval ("Vamos pegar o exemplo desse tri�ngulo proposto por ti")
V <- (A+B>C) e (A+C>B) e (B+C>A)
F <- (A+B<=C) e (A+C<=B) e (B+C<=A)
Escreval ("O tri�ngulo pode existir?", V)
Escreval ("Como ele pode existir, ele � um tri�ngulo:")
EQ <- (A=B) e (B=C) e (V= verdadeiro)
ES <- (A<>B) e (A<>C) e (B<>C) e (F= verdadeiro)
ISO <- (A=B) e (A<>C) ou (A=C) e (A<>B) ou (B=C) e (B<>A) e (F= verdadeiro)
Escreval ("O tri�ngulo � EQUILATERO ", EQ)
Escreval ("O tri�ngulo � ESCANELO ", ES)
Escreval ("O tri�ngulo � ISOSCELES ",ISO)

Fimalgoritmo