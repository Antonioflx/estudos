Algoritmo "SuperMENU"
Var
   N,C:inteiro

inicio
      C<-1
      Escreval("-------------------")
      Escreval("-------------------")
      Escreval("        M E N U ")
      Escreval("-------------------")
      Escreval("-------------------")
      Escreval(" Escolha um número")
      Escreval("-------------------")
      Escreval("| [1] De 1 até 10 |")
      Escreval("| [2] De 10 até 1 |")
      Escreval("| [3] Sair        |")
      Escreval("-------------------")
      Escreval("-------------------")
      Leia(N)
      Escolha(N)
         Caso 1
            Repita
              Escreva(C)
              C<- C + 1
           Ate (C >10)
         Caso 2
          C<-10
            Repita
              Escreva (C)
              C<- C - 1
            Ate (C < 1)
         FimEscolha
         


fimalgoritmo