Algoritmo "VetorTeste"

Var
   V:vetor[1..7] de Inteiro
   C,TotP:Inteiro


Inicio
      TotP<-0
      Para c<-1 ate 7 faca
        Escreva ("Digite o ", c, "o. valor: ")
        Leia(V[c])
      FimPara
      Limpatela
      Para c<-1 ate 7 faca
           Escreval("{",V[c],"}")
      FimPara
      para C<-1 ate 7 faca
        Se (V[c] % 2 = 0) entao
           TotP<- TotP + 1
           Escreval("Valor PAR na posição: ", c)
        Fimse
      FimPara
      Escreval("Desses números, apenas ", TotP," são pares ")


Fimalgoritmo