Algoritmo "semnome"

Var
   M,H,IMC:real


Inicio
      Escreval("Digite a sua Massa em quilogramas: ")
      Leia(M)
      Escreval("Digite a sua altura em metros: ")
      Leia(H)
      IMC<-M/(H^2)
      Escreval("O seu IMC � de: ",IMC:4:2)
      Se(IMC<18.5)entao
         Escreval("Voc� est� muito abaixo do peso ideal. ")
       senao
            Se(IMC>=18.5) e (IMC<25)entao
            Escreval("Voc� est� no peso ideal. ")
            senao
                 Se(IMC>=25) e (IMC<30)entao
                 Escreval("Voc� est� com sobrepeso. ")
                 senao
                      Se(IMC>=30) e (IMC<40)entao
                      Escreval("Voc� est� com obesidade. ")
                      senao
                           Se(IMC>=40)entao
                           Escreval("Voc� est� com obesidade m�rbida. ")
                           FimSe
                      FimSe
                 FimSe
            FimSe
       FimSe




Fimalgoritmo