Algoritmo "Teste2"

Var
N,N1,N2,N3,M,M1,M2,M3:real


Inicio
Escreval("Digite aqui a sua primeira nota: ")
      Leia(N)
      Escreval("Digite a sua segunda nota: ")
      Leia(N1)
      Escreval("Digite a sua terceira nota: ")
      Leia(N2)
      Escreval("O calculo se da atrav�s da soma das notas, divindindo-os por 3")
      Escreval("Ou seja, ", N, " mais ", N1, " mais ", N2, " divido por 3 ")
      M<-(N + N1 + N2)/3
      Se(M>=7)entao
          Escreval("A sua m�dia � de: ", M)
          Escreval("Logo,voc� est� aprovado.")
      senao
           Se(M<7)entao
           Escreval("A sua m�dia � de: ", M)
           Escreval("Logo,voc� est� de recupera��o. ")
           Escreval("Voc� tem o direito de repor a menor nota.")
           Escreval("Qual foi a nota que voc� tirou na recupera��o?")
           Leia(N3)
      senao
           Se(N3>N)entao
           M1<-(N1+N2+N3)/3
           Escreval("A sua m�dia � de: ", M1)
      senao
           Se(N3>N1)entao
           M2<-(N+N2+N3)/3
           Escreval("A sua m�dia � de: ", M2)
      senao
           Se(N3>N2)entao
           M3<-(N+N1+N3)entao
           Escreval("A sua m�dia � de: ",M3)
      senao
           Se(M1>=7)entao
           Escreval("Voc� est� aprovado.")
      senao
           Se(M1<7)entao
           Escreval("Infezlimente, voc� est� reprovado.")
      senao
           Se(M2>=7)entao
           Escreval("Voc� est� aprovado.")
      senao
           Se(M2<7)entao
           Escreval("Infezlimente, voc� est� reprovado.")
      senao
           Se(M3>=7)entao
           Escreval("Voc� est� aprovado.")
      senao
           Se(M3<7)entao
           Escreval("Infezlimente, voc� est� reprovado.")
      FimSe
      FimSe
      FimSe
      FimSe
      FimSe
      FimSe
      FimSe
      FimSe
      FimSe
      FimSe
      FimSe

Fimalgoritmo