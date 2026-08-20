algoritmo "PROJETO3BIM"
//Luiz Otávio, Matheus, Bruno 1H
var
   A: vetor [0..6,0..5] de real
   B: vetor [0..6] de real
   c: vetor [0..6] de real
   x, y, i, n: inteiro
   maior, total, porcento, menor, diferenca, picos, maiorpico,  maiorpicosem: real

inicio

   escreval("Digite os dados da medição por dia (Seg - Dom):")
   para x de 0 ate 6 faca
      i <- i + 1
      n <- 1
      picos <- 0
      para y de 0 ate 5 faca
         escreval("Dia: ", i, "Numero: ", n)
         leia(A[x,y])
         n <- n + 1
         total <- total + (A[x,y])
         se (A[x,y]) < 180 entao
            escreval("Erro, o minimo de volts é 180v!")
         fimse
         se (A[x,y]) > 220 entao
            picos <- picos + 1
         fimse
         se (A[x,y]) > maior entao
            maior <- (A[x,y])
         fimse
         se (A[x,y]) < menor entao
            menor <- (A[x,y])
         fimse
         se picos > maiorpico entao
            maiorpico <- picos
         fimse
      fimpara
      se maiorpicosem > maiorpico entao
         maiorpico <- 0
      senao
         maiorpicosem <- maiorpico
      fimse
   fimpara

   x <- 0
   y <- 0
   porcento <- total / 30
   diferenca <- maior - menor

   para x de 0 ate 5 faca
      B[0] <- porcento
      B[1] <- maior
      B[2] <- menor
      B[3] <- diferenca
      B[4] <- maiorpicosem
      B[5] <- maiorpico
   fimpara

fimalgoritmo