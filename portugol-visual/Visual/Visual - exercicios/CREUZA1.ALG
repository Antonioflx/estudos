Algoritmo "Creuza1"

Var
   A,A1,M,M1,D,D1:inteiro
   idade:inteiro
   Sub,Sub1:inteiro
   Sub2: real
   Dias_meses_passado:inteiro
   Dias_meses_atual:inteiro

Inicio
      Escreval("M�e, qual foi o dia/m�s/ano em que eu nasci?")
      Escreva ("Diz primeiro o dia, depois o m�s e o ano. ")
      Leia(D,M,A)
      Escreva ("Certo. Que dia � hoje? ")
      Leia(D1)
      Escreva ("Em que m�s n�s estamos? ")
      Leia (M1)
      Escreva ("Em que ano n�s estamos? ")
      Leia (A1)
      Escreval ("Entendi, ent�o s� basta eu subtrair o ano em que estamos com o ano que nasci")
      Sub <- (A1 - A)
      Escreval ("Logo, na teoria - eu teria a idade ", Sub)
      Escreval ("Mas, preciso saber os dias tamb�m ")
      Escreval ("Ent�o, preciso transformar os meses do ano que nasci e do ano que estamos em dias")
      Dias_meses_passado <- (D + M*30)
      Escreval ("Ent�o, os dias do ano em que eu nasci s�o - ", Dias_meses_passado)
      Dias_meses_atual <- (D1 + M1*30)
      Sub1 <- (Dias_meses_atual - Dias_meses_passado)
      Escreval ("Agora, os dias do ano atual s�o - ", Dias_meses_atual)
      Escreval ("Para ser mais preciso, a minha idade � de ", Sub, " com ", Sub1, " dias.")
      Escreval ("Esses dias podem ser transformados em meses")
      Escreval ("Basta eu dividir por 30")
      Sub2 <- (Sub1\30)
      Escreva ("Por fim, eu tenho, ", Sub, " anos e ", Sub2, " meses.")

Fimalgoritmo