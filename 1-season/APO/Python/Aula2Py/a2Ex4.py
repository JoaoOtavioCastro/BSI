x = int(input("Informe a quatidade de pontos: "))

if x<=10:
    print('A amostra é rochosa!')
elif x<=40:
    print('A amostra é firme!')
elif x<=80:
    print('A amostra é pantanosa!')
else:
    print('A amostra é invalida')