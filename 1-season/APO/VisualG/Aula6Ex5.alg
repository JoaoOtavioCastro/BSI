algoritmo "semnome"
var

inicio
procedimento calc_idade(a, b:inteiro)
var
idade:inteiro
inicio
x=1
idade<- a - b
escreval("A idade em anos é: ", idade)
fimprocedimento
escreva("Informe o Ano de Nascimento: ")
leia(an)
escreva("Informe o Ano Atual: ")
leia(aa)
calc_idade(aa,an)
fimalgoritmo
