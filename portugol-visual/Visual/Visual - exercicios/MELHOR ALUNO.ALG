Algoritmo "Melhor Aluno"

Var
   A:inteiro
   N,N1,N2,N3:caractere
   M,M1,M2,M3:real


Inicio
      Escreval("Quantos alunos a turma tem? ")
      Leia(A)
      
      Escreval("Aluno 1")
      Escreval("Nome do aluno: ")
      Leia(N)
      Escreval("Qual foi a média de ", N, " ? ")
      Leia(M)
      Escreval("------------------------")
      Escreval("Aluno 2")
      Escreval("Nome do aluno: ")
      Leia(N1)
      Escreval("Qual foi a média de ", N1, " ? ")
      Leia(M1)
      Escreval("------------------------")
      Escreval("Aluno 3")
      Escreval("Nome do aluno: ")
      Leia(N2)
      Escreval("Qual foi a média de ", N2, " ? ")
      Leia(M2)
      Escreval("------------------------")
      Escreval("Aluno 4")
      Escreval("Nome do aluno: ")
      Leia(N3)
      Escreval("Qual foi a média de ", N3, " ? ")
      Leia(M3)
      Escreval("------------------------")
      Se (M>M1)e(M>M2)e(M>M3)entao
      Escreval("O melhor aproveitamento foi de ", N, "com a nota de ", M)
      senao
           Se(M1>M)e(M1>M2)e(M1>M3)entao
           Escreval("O melhor aproveitamento foi de ", N1, " com a nota de ", M1)
           senao
                Se(M2>M)e(M2>M1)e(M2>M3)entao
                Escreval("O melhor aproveitamento foi de ", N2, "com a nota de ", M2)
                     senao
                     Escreval("O melhor aproveitamento foi de ", N3, "com a nota de ", M3)
                FimSe
           FimSe
      FimSe


Fimalgoritmo