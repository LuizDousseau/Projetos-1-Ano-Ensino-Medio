Algoritmo "projeto"
Var

s1, s2, n,r ,x, n1, n2 :inteiro
dg1, dg2, resto: inteiro
funcionar: caractere
cpf_quantidade, cpfvalidos, cpfinvalidos: inteiro
cpfvalidospor, cpfinvalidospor: real

Inicio

 repita
 escreval(" ")
escreval("Digite o CPF (Digite cada numero por vez)")
 para x de 10 ate 2 passo -1 faca
   leia(n)
  r <- n*x
  s1 <- s1 + r
  
  s2 <- s2 + ( n * ( x + 1))

fimpara

leia(n1)
leia(n2)

  s1 <- s1 % 11
  se (s1<2) entao
  s1 <- 0
senao
 s1 <- 11 - (s1%11)

fimse

 dg1 <- s1
 s2 <- s2 + dg1
 dg2 <- s2 + dg1
 resto <- dg2 % 11

  se (resto<2) entao
  dg2 <-0
  senao
  dg2 <- 11 - resto
  fimse
  

se (n1 = s1) e (n2 = dg2) entao
 escreval("O CPF é valido!")
 cpfvalidos <- cpfvalidos + 1
 senao
 escreval("O CPF é invalido!")
 cpfinvalidos <- cpfinvalidos + 1
 fimse
 
escreval(" ")
escreval("Fazer outro CPF? (Sim ou Não)")
leia(funcionar)

cpf_quantidade <- cpf_quantidade + 1


s1 <- 0
s2 <- 0
n <- 0
r <- 0
x <- 0

dg1 <- 0
dg2 <- 0
resto <- 0


ate (funcionar = "nao") ou (funcionar = "Nao") ou (funcionar = "não") ou (funcionar = "Não") ou (funcionar = "NAO")

cpfinvalidospor <- (cpfinvalidos / cpf_quantidade) * 100
cpfvalidospor <- (cpfvalidos / cpf_quantidade) * 100

escreval(" ")
escreval("Relátorio:")
escreval("Quantos CPF'S foram verificados: ", cpf_quantidade)
escreval("Quantos CPF'S Validos: ", cpfvalidos)
escreval("Quantos CPF'S Invalidos:", cpfinvalidos)
escreval("Porcentagem de CPF'S Validos em relação ao total: ", cpfvalidospor, "%")
escreval("Porcentagem de CPF'S Invalidos em relação ao total: ", cpfinvalidospor, "%")




Fimalgoritmo