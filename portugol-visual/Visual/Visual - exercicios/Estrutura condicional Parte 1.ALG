Algoritmo "semnome"

Var
   ano,nasc,idade:inteiro


Inicio
      Escreval("Em que anos estamos? ")
      Leia(ano)
      Escreval("Em que ano eu nasci? ")
      Leia(nasc)
      idade<- ano - nasc
      Se (idade<1)entao
         Escreval("Voc� tem ", idade, " meses ")
      FimSe
      Se (idade=1)entao
         Escreval("Voc� tem ", idade, " ano ")
      FimSe
      Se (idade>=2)entao
         Escreval("Voc� tem ", idade, " anos ")
      FimSe
      Se (idade<=12)entao
         Escreval("Voc� � crian�a ")
      senao
           Escreval("Voc� � jovem")
      FimSe


Fimalgoritmo