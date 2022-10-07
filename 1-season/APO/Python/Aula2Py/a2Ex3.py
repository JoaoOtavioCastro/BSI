z = input('Informe o tipo do carro(G - gasolina ou A - álcool): ')
y = int(input("Informe a capacidade do tanque: "))
if z== 'A':
    x = float(input('Informe o preço do Alcool: '))
else:
    if z.upper() == 'G':
        x = float(input('Informe o preço da Gasolina: '))
    else
        print('Parabens, não sabe digitar direito agora a conta vai dar errado')

gaso = lambda a, b: a*b
print(f"O valor para encher o tanque é: {gaso(x, y):,.2f}")