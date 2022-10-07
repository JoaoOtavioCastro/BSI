x = float(input('Informe o salario do funcionario: '))

if x <600:
    if x<=500:
        x= 150 + (x*1.05)
    else:
        x = 150 + (x*1.12)
elif x<=1200:
    x = 100+(x*1.12)
else:
    x += 100
print(f"O valor do novo salario será: {x:,.2f}")