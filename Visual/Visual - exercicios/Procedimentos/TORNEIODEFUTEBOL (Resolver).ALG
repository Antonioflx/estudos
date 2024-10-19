Algoritmo "TorneioDeFutebol"

Var
   nome:Vetor[1..3]de Caractere
   nome1:Vetor[1..3] de Caractere
   c,j,aux: inteiro

Inicio
   Escreval("----------------------")
   Escreval("CAMPEONATO DE FUTEBOL")
   Escreval("----------------------")
   para C<-1 ate 3 faca
      Escreva("Nome do ",c, "o. time: ")
      Leia(nome[c])
   FimPara
   Limpatela
   para C<-1 ate 2 faca
      para j<-c+1 ate 3 faca
         Se(nome[c]= nome[j])entao
            aux<-nome[c]
            nome[c]<-nome[j]
            nome[j]<-aux
         FimSe
      FimPara
   FimPara
   Para c<-1 ate 3 faca
      Escreval(nome[c]:15, "[] x []", nome[j])
      Escreval(nome[c]:15, "[] x []", nome[j])
   FimPara

Fimalgoritmo