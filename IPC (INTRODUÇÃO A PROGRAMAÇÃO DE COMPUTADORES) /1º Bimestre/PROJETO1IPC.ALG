algoritmo "Projeto1ipc"
// Luiz Otavio, Bruno Rafael, Matheus Pellegrini  1H

var

   dim1, dim2, area : real
   preco_lampada, custo_lampadas, custo_mao_obra, custo_final : real
   potencia_m2, potencia_total : real
   num_lampadas, comodo : inteiro
   nome_comodo : caractere


inicio
   escreval("Digite o numero do cômodo: ")
   escreval("1 - QUARTO     15W")
   escreval("2 - SALA DE TV 15W")
   escreval("3 - SALAS      18W")
   escreval("4 - COZINHA    18W")
   escreval("5 - VARANDAS   18W")
   escreval("6 - ESCRITÓRIO 20W")
   escreval("7 - BANHEIRO   20W")
   leia(comodo)
   se (comodo > 7) entao
    escreval("Comodo invalido! apenas digite o numero do comodo que quer utilizar!")
            fimalgoritmo
      fimse

   escreva("Informe a primeira dimensão (largura) em metros: ")
   leia(dim1)
   escreva("Informe a segunda dimensão (comprimento) em metros: ")
   leia(dim2)
   escreva("Informe o valor de compra de uma lâmpada: ")
   leia(preco_lampada)

escolha comodo
   caso 1
      potencia_m2 <- 15
      nome_comodo <- "QUARTO"
   caso 2
      potencia_m2 <- 15
      nome_comodo <- "SALA DE TV"
   caso 3
      potencia_m2 <- 18
      nome_comodo <- "SALAS"
   caso 4
      potencia_m2 <- 18
      nome_comodo <- "COZINHA"
   caso 5
      potencia_m2 <- 18
      nome_comodo <- "VARANDAS"
   caso 6
      potencia_m2 <- 20
      nome_comodo <- "ESCRITÓRIO"
   caso 7
      potencia_m2 <- 20
      nome_comodo <- "BANHEIRO"
fimescolha

   area <- dim1 * dim2
   potencia_total <- area * potencia_m2

   num_lampadas <- Int(potencia_total / 60)

   custo_lampadas <- num_lampadas * preco_lampada
   custo_mao_obra <- num_lampadas * 5.00
   custo_final <- custo_lampadas + custo_mao_obra

   escreval("")
   escreval("RESUMO:")
   escreval("Nome do Cômodo: ", nome_comodo)
   escreval("Área Total do Cômodo: ", area)
   escreval("Potência de Iluminação: ", potencia_m2)
   escreval("Número de Lâmpadas necessárias: ", num_lampadas)
   escreval("Valor a pagar pelas Lâmpadas: ", custo_lampadas)
   escreval("Custo total da Mão de Obra: ", custo_mao_obra)
   escreval("CUSTO TOTAL GERAL: ", custo_final)
fimalgoritmo