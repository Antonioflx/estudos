Algoritmo "CorrigindoProvas"

Var
   Quest:Vetor[1..5]de caractere
   Nome: Vetor[1..3] de Caractere
   Resp: Vetor[1..5] de Caractere
   Not: Inteiro
   NotT:Vetor[1..5]de Inteiro
   c,TotA:inteiro
   MT:real



Inicio
   TotA<-0
   Escreval("PASSO 1 - Cadastro de Gabarito")
   Escreval("--------------------------------")
   para c<-1 ate 5 faca
      Escreva("Questao ", c, ":")
      Leia(Quest[c])
   FimPara
   LimpaTela
   Para c<-1 ate 3 faca
      Escreval("--------------------------------")
      Escreval("ALUNO ", c)
      Escreval("--------------------------------")
      Escreva("Nome: ")
      Leia (Nome[c])
      Escreval("RESPOSTAS DADAS")
        para c<-1 ate 5 faca
           Escreva("Questão ",c,":")
           Leia(Resp[c])
        FimPara
   LimpaTela
   FimPara
   Para c<-1 ate 5 faca
      Se (Resp[c]= Quest[c])entao
         TotA<-TotA +1
         Not<-TotA*2
         NotT[c]<-Not
      FimSe
       MT<-Not/3
   FimPara
   Escreval("NOTAS FINAIS")
   Escreval("--------------------------------")
   Para C<-1 ate 3 faca
     Escreval(Nome[c]:15,Not:4:2)
   FimPara
   Escreval("--------------------------------")
   Escreval("A média da turma é de : ", MT:4:2)





Fimalgoritmo