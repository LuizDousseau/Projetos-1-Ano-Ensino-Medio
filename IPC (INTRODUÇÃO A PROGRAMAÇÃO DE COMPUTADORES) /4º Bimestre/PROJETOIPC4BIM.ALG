algoritmo "ProjetoIPC4BIM"

Var
alunos: vetor[1..10] de caractere
mediasbimestrais: vetor[1..10,1..4] de real
notinhas: vetor[1..4] de real
totalpontos: vetor[1..10] de real
i, j, qtdalunos: inteiro
resposta, mensagen: caractere
resultado: real


procedimento nomes()
inicio
i <- 0
resposta <- "N"

Repita
i <- i + 1

escreval("Digite o nome do aluno:")
leia(alunos[i])

Se (i < 10) entao
escreval("Deseja parar? (S/N)")
leia(resposta)
resposta <- maiusc(resposta)
fimse

Ate (resposta = "S") ou (i = 10)

qtdalunos <- i
fimprocedimento


procedimento notas(n1,n2,n3,n4: real)
inicio
mediasbimestrais[i,1] <- n1
mediasbimestrais[i,2] <- n2
mediasbimestrais[i,3] <- n3
mediasbimestrais[i,4] <- n4
fimprocedimento


funcao pontos(): real
var
soma: real
inicio
soma <- 0

para i de 1 ate qtdalunos faca
totalpontos[i] <- 0

para j de 1 ate 4 faca
totalpontos[i] <- totalpontos[i] + mediasbimestrais[i,j]
fimpara

soma <- soma + totalpontos[i]
fimpara

retorne soma
fimfuncao


procedimento situacao(pontuacao: real; var mensagem: caractere)
inicio
Se (pontuacao < 15) entao
mensagem <- "ALUNO RETIDO"
Senao
Se (pontuacao < 24) entao
mensagem <- "ALUNO REPROVADO"
Senao
mensagem <- "ALUNO APROVADO"
fimse
fimse
fimprocedimento


Inicio
nomes()
para i de 1 ate qtdalunos faca
escreval("Notas de ", alunos[i])

para j de 1 ate 4 faca
escreval(j, "° bimestre:")
leia(notinhas[j])

enquanto (notinhas[j] < 0) ou (notinhas[j] > 10) faca
escreval("Digite uma nota entre 0 e 10!")
leia(notinhas[j])
fimenquanto
fimpara
notas(notinhas[1], notinhas[2], notinhas[3], notinhas[4])

fimpara
resultado <- pontos()
escreval("Soma geral dos pontos: ", resultado)
para i de 1 ate qtdalunos faca

situacao(totalpontos[i], mensagen)

escreval(alunos[i], ": ", totalpontos[i], " pontos")
escreval(mensagen)
fimpara




Fimalgoritmo
