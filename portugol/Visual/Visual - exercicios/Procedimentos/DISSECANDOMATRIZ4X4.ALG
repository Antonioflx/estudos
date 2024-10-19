Algoritmo "DissecandoMatriz4x4"

Var
   Mat:Vetor[1..4,1..4]de Inteiro
   l,c,D:Inteiro
   V:inteiro


Inicio
   para l<-1 ate 4 faca
      para c<-1 ate 4 faca
        Escreva("Digite o valor para a posição [",l,",",c,"]")
        Leia(Mat[l,c])
      FimPara
   FimPara
   LimpaTela
      Repita
        Escreval("MENU DE OPÇÕES")
        Escreval("=================")
        Escreval("[1]Mostrar a Matriz")
        Escreval("[2]Diagonal Principal")
        Escreval("[3]Triangulo Superior")
        Escreval("[4]Triangulo Inferior")
        Escreval("[5]Sair")
        Escreval("===== OPÇÃO:")
      Leia(V)
        Escolha(V)
          caso 1
            para l<-1 ate 4 faca
              para c<-1 ate 4 faca
                Escreva(Mat[l,c]:4)
              FimPara
              Escreval()
            FimPara
     
          caso 2
            para l<-1 ate 4 faca
              para c<-1 ate 4 faca
                Se (l=c)entao
                  Escreva(Mat[l,c]:4)
                senao
                Escreva()
                FimSe
              FimPara
              Escreval()
            FimPara
            
          caso 3
             para l<-1 ate 3 faca
              para c<-1 ate 3 faca
                Se(c>1)entao
                  Escreva(Mat[l,c]:4)
                senao
                  Escreva()
                FimSe
              FimPara
              Escreval()
             FimPara
             
          caso 4
             para l<-1 ate 3 faca
               para c<-1 ate 3 faca
                 Se(l>1)entao
                   Escreva(Mat[l,c]:4)
                 senao
                   Escreva()
                 FimSe
               Fimpara
                 Escreval()
             FimPara
          FimEscolha
          ate(V=5)
   


Fimalgoritmo