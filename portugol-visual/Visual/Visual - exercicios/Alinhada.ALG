Algoritmo "Aproveitamento de um aluno"

Var
N,N1,N2,M:real
Inicio
      Escreval("Digite a sua primeira nota: ")
      Leia(N)
      Escreval("Digite a sua segunda nota: ")
      Leia(N1)
      Escreval("Digite a sua terceira nota: ")
      Leia(N2)
      M<-(N+N1+N2)/3
      Escreval("A sua m�dia � de ", M)
      Se(M<=10) e (M>=9)entao
         Escreval("Logo, o seu aproveitamento �: A")
      senao
           Se(8.9>=M) e (M>=8)entao
              Escreval("Logo, o seu aproveitamento �: B")
           senao
                Se(7.9>=M) e (M>=7)entao
                   Escreval("Logo, o seu aproveitamento �: C")
                senao
                     Se(6.9>=M) e (M>=6)entao
                        Escreval("Logo, o seu aproveitamento �: D")
                     senao
                          Se(5.9>=M) e (M>=5)entao
                             Escreval("Logo, o seu aproveitamento �: E")
                          senao
                               Escreval("Logo, o seu aproveitamento �: F")
                          FimSe
                     FimSe
                FimSe
           FimSe
      FimSe



Fimalgoritmo