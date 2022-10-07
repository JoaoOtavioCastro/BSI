algoritmo "semnome"

var
a:vetor[1..4] de real
cont :inteiro
inicio
para cont de 1 ate 4 faca
   escreva("Informe a nota ", cont, ": ")
   leia(a[cont])
fimpara
funcao cal_med():real
var
c: inteiro
i:real
inicio
para c de 1 ate 4 faca
   i<- i+a[c]
fimpara
i<-i/4
retorne i
fimfuncao
limpatela
escreval("A média do aluno é: ",cal_med())
fimalgoritmo
