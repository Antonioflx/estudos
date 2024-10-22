Algoritmo "Creuza2"

Var
   dinheiro,dinheiro1:real
   resposta:caractere
   Res:real

Inicio
      Escreval("Quantos reais a senhora tem? ")
      leia (dinheiro)
      Escreval("A cotação do dólar, está de 1USD para R$5,47.")
      Escreval("Dessa forma, quanto você quer fazer de câmbio? ")
      leia (dinheiro1)
      Escreval("Certo, o dinheiro que a senhora me deu - foi de: ", dinheiro1)
      Escreval("Está correto? ")
      leia (resposta)
      Res<-dinheiro1/5.47
      Escreva("Com os ", dinheiro, " reais que a senhora deu. Deu-se para obter ", Res, " dólares ")



Fimalgoritmo