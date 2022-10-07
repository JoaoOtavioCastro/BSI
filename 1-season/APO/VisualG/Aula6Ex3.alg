algoritmo "semnome"
// Função :
// Autor :
// Data : 17/05/2022
// Seção de Declarações 
var
      an, aa: inteiro
      nome:literal
inicio
procedimento calc_idade(a, b:inteiro; c:literal)
var
idade :inteiro
inicio
idade<- a - b
escreval(c, ", A sua idade em anos é: ", idade)
fimprocedimento
escreva("Informe o Nome do Usuário: ")
leia(nome)
escreva("Informe o Ano de Nascimento: ")
leia(an)
escreva("Informe o Ano Atual: ")
leia(aa)
calc_idade(aa,an, nome)
fimalgoritmo
