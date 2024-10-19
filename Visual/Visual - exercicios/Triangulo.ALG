Algoritmo "Triângulo - problema"

Var
A,B,C: inteiro
EQ,ES,ISO:logico
Afirm:Caractere
V,F: logico
neg: caractere

Inicio
Escreva("Bom dia, você deseja saber qual é o tipo de triângulo?")
Leia(Afirm)
Escreval("Digite os lados do triângulo")
Escreva ("Informe o primeiro lado:")
Leia (A)
Escreva ("Informe o segundo lado:")
Leia (B)
Escreva ("Informe o terceiro lado:")
Leia (C)
Escreval ("Um triângulo só pode existir, de acordo com a lei matemática. A soma de um lado do triângulo com outro lado tem que ser maior que o lado restante")
Escreval ("Para ficar mais fácil de entender, seria que L1+L2>L3")
Escreval ("Vamos pegar o exemplo desse triângulo proposto por ti")
V <- (A+B>C) e (A+C>B) e (B+C>A)
F <- (A+B<=C) e (A+C<=B) e (B+C<=A)
Escreval ("O triângulo pode existir?", V)
Escreval ("Como ele pode existir, ele é um triângulo:")
EQ <- (A=B) e (B=C) e (V= verdadeiro)
ES <- (A<>B) e (A<>C) e (B<>C) e (F= verdadeiro)
ISO <- (A=B) e (A<>C) ou (A=C) e (A<>B) ou (B=C) e (B<>A) e (F= verdadeiro)
Escreval ("O triângulo é EQUILATERO ", EQ)
Escreval ("O triângulo é ESCANELO ", ES)
Escreval ("O triângulo é ISOSCELES ",ISO)

Fimalgoritmo