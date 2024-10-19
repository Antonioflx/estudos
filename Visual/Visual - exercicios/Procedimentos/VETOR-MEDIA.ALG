Algoritmo "Vetor-Media"

Var
   nome: vetor[1..4] de CARACTERE
   n1: vetor[1..4] de Real
   n2: vetor[1..4] de Real
   M: vetor[1..4] de Real
   SM,MT: Real
   i,Alun:Inteiro
   


Inicio
      SM<-0
      Alun<-0
   Para i<-1 ate 4 faca
      Escreval("ALUNO ", i)
      Escreva("NOME: ")
      Leia(nome[i])
      Escreva("Primeira Nota: ")
      Leia(n1[i])
      Escreva("Segunda Nota: ")
      Leia(n2[i])
      M[i]<-(n1[i]+n2[i])/2
   FimPara
   LimpaTela
   Escreval("LISTAGEM DE ALUNOS")
   ESCREVAL("------------------")
   Para i<- 1 ate 4 faca
      EscrevaL(nome[i]:15, M[i]:4:1)
   FimPara
   Para i<-1 ate 4 faca
     SM<-SM+M[i]
     MT<-SM/4
     Se M[i]>= MT entao
        Alun<-Alun+1
        Escreval("O aluno ", i, " possui média igual ou acima da média da turma")
     FimSe
   FimPara
   Escreval("A soma da média da turma é de: ",SM)
   Escreval("A media da nota da turma é de : ",MT)
   Escreval("A quantidade de alunos que tem media igual ou acima de", MT, " é de ", Alun)


   



Fimalgoritmo