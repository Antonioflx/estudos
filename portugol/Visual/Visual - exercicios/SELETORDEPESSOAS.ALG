Algoritmo "SeletordePessoas"

Var
   resp,Sex:caractere
   Idad,Cab,ContH,ContM:inteiro
   Hom,Mulh:logico
   


Inicio
      Escreval("--------------------")
      Escreval("--------------------")
      Escreval("   SELETOR DE PESSOAS ")
      Escreval("--------------------")
      Escreval("--------------------")
      ContH<-0
      ContM<-0
      Repita
         Escreval("Qual o sexo? [M/F]: ")
         Leia(Sex)
         Escreval("Qual a idade? ")
         Leia(Idad)
         Escreval("Qual a cor do cabelo? ")
         Escreval("--------------------")
         Escreval("[1] Preto ")
         Escreval("[2] Castanho ")
         Escreval("[3] Loiro ")
         Escreval("[4] Ruivo ")
         Leia(Cab)
         Escreval("Quer continuar? Digite [S/N] ")
         Leia(resp)
         LimpaTela
         Hom<-(Idad>=18) e (Cab=2)
         Mulh<-(Idad>=25) e (Idad<=30) e (Cab=3)
            Se (Hom = verdadeiro) entao
               ContH<-ContH+1
            senao
               Se (Mulh=verdadeiro)entao
                  ContM<-ContM+1
               FimSe
            FimSe
      Ate (resp="N")
          Escreval("O total de homens com mais de 18 anos e cabelos castanhos são de ", ContH)
          Escreval("O total de mulheres entre 25 anos e 30 anos e cabelos loiros são de ", ContM)
      


Fimalgoritmo