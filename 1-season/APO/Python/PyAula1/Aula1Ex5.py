x = float(input("Informe o Tempo gasto na viagem: "))
y = float(input("Informe quantos Km/l o carro faz: "))
z = float(input("Informe a velocidade média: "))
print(f"\nVelocidade média: {z}Km/h;\nTempo Gasto: {x}h;\nDistancia Percorrida: {x*z:,.2f}Km;\nQuantidade de Litros gastos: {(x*z)/y:,.2f};")