Algoritmo "Creuza2"

Var
   dinheiro,dinheiro1:real
   resposta:caractere
   Res:real

Inicio
      Escreval("Quantos reais a senhora tem? ")
      leia (dinheiro)
      Escreval("A cota��o do d�lar, est� de 1USD para R$5,47.")
      Escreval("Dessa forma, quanto voc� quer fazer de c�mbio? ")
      leia (dinheiro1)
      Escreval("Certo, o dinheiro que a senhora me deu - foi de: ", dinheiro1)
      Escreval("Est� correto? ")
      leia (resposta)
      Res<-dinheiro1/5.47
      Escreva("Com os ", dinheiro, " reais que a senhora deu. Deu-se para obter ", Res, " d�lares ")



Fimalgoritmo