#preço final do veiculo é calculado com a soma do preço de fabrica + lucro do distribuidor + imposto sobre preço de fabrica
#Mostre o valor do imposto do lucro e do preço final
x = float(input("Informe o preço de fabrica do veículo: "))
y = float(input("Informe o percentual de lucro do distribuidor: "))
z = float(input("Informe o percentual de imposto: "))
print(f"\nLucro do distribuidor: R${x*y/100:,.2f};\nValor do imposto R${x*z/100:,.2f};\nPreço final do veiculo: R${x+(x*z/100)+(x*y/100):,.2f};")