Algoritmo "semnome"

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
      Se(M>=7)entao
        Escreval("A sua m�dia � de: ",M:2:1)
        Escreval("Felizmente, voc� est� aprovado.")
      senao
           Se(M>=5)e (M<7)entao
              Escreval("A sua m�dia � de: ", M:2:1)
              Escreval("Infelizmente,voc� est� em recupera��o.")
           senao
                Escreval("A sua m�dia � de: ", M:2:1)
                Escreval("Infelizmente, voc� est� reprovado.")
           FimSe
      FimSe



Fimalgoritmo