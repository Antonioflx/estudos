Algoritmo "semnome"

Var
   Mat:Vetor[1..4,1..4]de Inteiro
   l,c,sDP,PL2:Inteiro


Inicio
   sDP<-0
   PL2<-1
   Escreval("Iremos fazer um matrix de 4x4 com n�meros aleat�rios")
   Para l<-1 ate 4 faca
     para c<-1 ate 4 faca
        Escreval("Digite o valor [",l,",",c,"]")
        Leia(Mat[l,c])
        Se(l=c)entao
        sDP<-sDP+Mat[l,c])
        FimSe
     FimPara
   FimPara
   
   para l<-1 ate 4 faca
     para c<-1 ate 4 faca
        Escreva(Mat[l,c]:4)
     FimPara
     Escreval()
   FimPara

   para c<-1 ate 4 faca
     PL2<-PL2 * Mat[2,c]
   FimPara
   Escreval("A soma dos valoras da Diag.Princ. � de ",sDP)
   Escreval("J� o produto dos n�meros da linha 2 � de ",PL2)



Fimalgoritmo