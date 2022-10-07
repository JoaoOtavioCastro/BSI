x=0.0
y=0.0

x = int(input('Informe a quantidade de caseirinhos vendidos: '))
y = int(input('Informe a quantidade de broinha vendidos: '))

x=x*0.1
y=y*1.6

print(f"Valor de caseirinhos: {x}")
print(f"Valor de broinhas: {y}")
print(f"Valor total vendido: {y+x}")
print(f"Valor a ser guardado: {(x+y)*0.1:,.2f}")