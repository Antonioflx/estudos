Algoritmo "Crian�a Esperan�a"

Var
N:inteiro
V:real


Inicio
      Escreval("---------------------")
      Escreval("Crian�a Esperan�a")
      Escreval("---------------------")
      Escreval("Pressione [1] caso queira doar R$5.00")
      Escreval("Pressione [2] caso queira doar R$10.00")
      Escreval("Pressione [3] caso queira doar R$25.00")
      Escreval("Pressione [4] caso queira doar R$50.00")
      Escreval("Pressione [5] caso queira selecionar a quantidade")
      Escreval("Pressione [6] caso queira cancelar a liga��o")
      Leia(N)
      Escolha N
         Caso 1
         V<- 5
         Caso 2
         V<- 10
         Caso 3
         V<- 25
         Caso 4
         V<- 50
         Caso 5
              Escreval("Digite aqui a quantidade que voc� deseje doar: ")
              Leia(V)
         Caso 6
         V<- 0
         FimEscolha
         Escreval("---------------------")
         Escreval("A sua doa��o foi de: R$",V)
         Escreval("---------------------")
         Escreval("MUITO OBRIGADO!")
         Escreval("---------------------")

Fimalgoritmo