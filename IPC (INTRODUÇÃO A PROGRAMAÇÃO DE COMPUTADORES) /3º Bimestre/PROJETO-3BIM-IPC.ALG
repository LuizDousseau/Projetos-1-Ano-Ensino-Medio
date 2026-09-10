Algoritmo "PROJETO3BIM"
//Luiz Otávio, Matheus, Bruno 1H
Var
   A: vetor [0..4,0..5] de inteiro
   M: vetor [0..5] de real
   B: vetor [0..5] de inteiro
   i, j: inteiro
   maior, menor, dif, total, maiorGeral, diaMaior, picosNoDia, quantpico, diasComPico: inteiro
   media: real
   nomeDia, funcionar: caractere
Inicio
   repita
      escreval(" ")
      escreval("Digite a voltagem: ")
      para i de 0 ate 4 faca
         para j de 0 ate 5 faca
            escreval ("Dia", i+1, ",", j+1, "° ", "medição")
            leia(A[i,j])
            enquanto (A[i,j] < 180) faca
               escreval("ERRO!!! A voltagem não pode ser menor que 180V.")
               leia(A[i,j])
            fimenquanto
         fimpara
      fimpara
      menor <- A[0,0]
      maiorGeral <- A[0,0]
      total <- 0
      quantpico <- 0
      diaMaior <- 0
      diasComPico <- 0

      para i de 0 ate 4 faca
         picosNoDia <- 0
         maior <- A[i,0]

         para j de 0 ate 5 faca
            total <- total + A[i,j]

            se (A[i,j] > 220) entao
               picosNoDia <- picosNoDia + 1
            fimse
            se (A[i,j] > maior) entao
               maior <- A[i,j]
            fimse
            se (A[i,j] > maiorGeral) entao
               maiorGeral <- A[i,j]
            fimse
            se (A[i,j] < menor) entao
               menor <- A[i,j]
            fimse
         fimpara
         B[i] <- maior
         se (picosNoDia > 0) entao
            diasComPico <- diasComPico + 1
         fimse

         se (picosNoDia > quantpico) entao
            quantpico <- picosNoDia
            diaMaior <- i
         fimse
      fimpara
      media <- total / 30
      dif <- maiorGeral - menor

      se (diaMaior = 0) entao
         nomeDia <- "segunda-feira"
      senao
         se (diaMaior = 1) entao
            nomeDia <- "terça-feira"
         senao
            se (diaMaior = 2) entao
               nomeDia <- "quarta-feira"
            senao
               se (diaMaior = 3) entao
                  nomeDia <- "quinta-feira"
               senao
                  nomeDia <- "sexta-feira"
               fimse
            fimse
         fimse
      fimse

      M[0] <- media
      M[1] <- maiorGeral
      M[2] <- menor
      M[3] <- dif
      M[4] <- diasComPico
      M[5] <- diaMaior
      escreval(" ")
      escreval("Medições anotadas:")
      para i de 0 ate 4 faca
         para j de 0 ate 5 faca
            escreval("Dia: ", i, " Medição: ", j, "  Voltagem: ", A[i,j], "V  ")
         fimpara
         escreval(" ")
      fimpara
      escreval(" ")
      escreval("Media: ", M[0])
      escreval("Maior voltagem: ", M[1])
      escreval("Menor voltagem: ", M[2])
      escreval("Diferenca: ", M[3])
      escreval("Quantidade de dias com picos de mais de 220V: ", M[4])
      escreval("Dia com mais picos: ", nomeDia)
      escreval(" ")
      para i de 0 ate 4 faca
         escreval("Maior voltagem do dia ", i+1, ":", B[i])
      fimpara
      escreval("  ")

      escreval("Deseja fazer a medição novamente? (Sim ou Não).")
      leia(funcionar)

   ate (funcionar = "nao") ou (funcionar = "Nao") ou (funcionar = "não") ou (funcionar = "Não") ou (funcionar = "NAO") ou (funcionar = "n") ou (funcionar = "N")

Fimalgoritmo