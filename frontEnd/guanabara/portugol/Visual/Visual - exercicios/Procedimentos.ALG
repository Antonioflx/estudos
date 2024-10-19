Algoritmo "Detector de Peso"

Var
   I,Pessoas:Inteiro
   N,Pesado:caractere
   P,Mai:real
Procedimento Topo()
inicio
      LimpaTela
      Escreval("------------------------------------")
      Escreval("D E T E C T O R   D E   P E S A D O")
      Escreval("------------------------------------")
      Escreval("Maior peso até agora: ", Mai, "Kg")
      Escreval("------------------------------------")
FimProcedimento

Inicio
      Topo()
      Escreval("Quantas pessoas são?")
      Leia(Pessoas)
      Para I<-1 ate Pessoas faca
         Escreva("Digite o nome: ")
         Leia(N)
         Escreva("Digite o peso de ", N, ": ")
         Leia(P)
         Se (P>Mai)entao
            Mai<-P
            Pesado<-N
         FimSe
         Topo()
      FimPara
      LimpaTela
      Topo()
      Escreval("A pessoa mais pesada foi ", Pesado, ", com ", Mai, " quilos. ")
Fimalgoritmo