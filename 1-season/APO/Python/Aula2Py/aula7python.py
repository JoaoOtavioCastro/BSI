sal=0.0
bon=0.0
aux=0.0
soma=0.0

sal=float(input("digite seu salario"))

if(sal<=500):
    bon= sal * 0.05
else:
    if(sal>500) and (sal<=1200):
        bon= sal * 0.12
    
if(sal>1200):
    print("não recebe auxilio")
else:
    if(sal<=600):
        aux= 150
    else:
        aux= 100
soma= bon+sal+aux
print(f"voce recebera {soma}")                   

