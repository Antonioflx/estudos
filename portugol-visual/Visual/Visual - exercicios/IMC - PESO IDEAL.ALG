Algoritmo "IMC - PESO IDEAL"

Var
   M,H,R:real
   V:logico
   


Inicio
      Escreval("Digite a sua Massa em quilogramas: ")
      Leia(M)
      Escreval("Digite a sua altura em metros: ")
      Leia(H)
      R<-M/H^2
      Escreval("O seu IMC � de: ",R:4:2)
      Se(R<17)entao
         Escreval("Voc� est� muito abaixo do peso ideal")
      FimSe
      Se(R>17) e (R<18.5)entao
           Escreval("Voc� est� abaixo do peso ideal")
      FimSe
      Se(R>=18.5) e (R<25)entao
           Escreval("Voc� est� no peso ideal")
      FimSe
      Se(R>=25) e (R<30)entao
           Escreval("Voc� est� com sobrepeso")
      FimSe
      Se(R>=30) e (R<35)entao
           Escreval("Voc� est� com obesidade")
      FimSe
      Se(R>=35) e (R<40)entao
           Escreval("Voc� est� com obesidade severa")
      FimSe
      Se (R>=40)entao
           Escreval("Voc� est� com obesidade m�rbida")
      FimSe



      



Fimalgoritmo