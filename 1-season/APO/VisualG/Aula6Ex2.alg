algoritmo "semnome"
// Função :
// Autor :
// Data : 17/05/2022
// Seção de Declarações 
var
      an, aa: inteiro
inicio
procedimento calc_idade(a, b:inteiro)
var
idade: inteiro
inicio
idade<- a - b
escreval("A idade em anos é: ", idade)
fimprocedimento
escreva("Informe o Ano de Nascimento: ")
leia(an)
escreva("Informe o Ano Atual: ")
leia(aa)
calc_idade(aa,an)
fimalgoritmo
