#Receba as medidas em pés e faça as conversões para polegadas, jarvas e milhas(1 pé = 12 polegadas; 1 jarda = 3 pés; 1 milha = 1760 jardas)
x = float(input("Informe a medida em pés: "))
print(f"\na) {x*12} polegadas;\nb) {x/3:,.2f};\nc) {x/(3*1760):,.5f};")