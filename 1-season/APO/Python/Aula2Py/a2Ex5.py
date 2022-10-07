z = input('Informe o nome do nadador: ')
idade = int(input('Informe a idade do nadador: '))

print(f"O nadador(a) {z} possui {idade} anos e esta na categoria ",end='')
if(idade>4 and idade<8):
    print('Infantil A')
elif(idade>7 and idade<11):
    print('Infantil B')
elif(idade>11 and idade<14):
    print('Juvenil A')
elif(idade>13 and idade<18):
    print('Juvenil B')
elif(idade>17):
    print('Adulto')
else:
    print(f"errada\nCategoria Invalida")