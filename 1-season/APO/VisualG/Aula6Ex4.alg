algoritmo "semnome"

var
x: inteiro
inicio
procedimento tab(t:inteiro)
var
i : inteiro
inicio
para i de 0 ate 10 faca
   escreval(t, " X ", i, " = ",(t*i))
fimpara
fimprocedimento
x<-1
enquanto x<>0 faca
   escreval("Digite 0 para parar")
   escreva("Informe o número para calcular a tabuada: ")
   leia(x)
   se x<>0 entao
      tab(x)
   fimse
fimenquanto
fimalgoritmo
