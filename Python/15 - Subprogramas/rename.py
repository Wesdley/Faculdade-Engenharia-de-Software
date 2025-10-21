def funx ():
    num = int(input("Digite 1 ou 2: "))
    if num == 1:
        soma = num + 1
        print(soma)
    elif num == 2:
        soma = num + 2
        print(soma)
    else:
        print("Opção invalida")

funx() # chamamos a função para funcionar

number = int(input("Digite o número 1 ou 2: "))
if number == 1:
    def func1 (x):
        return x + 1
    s = func1(9)
else:
    def func2 (x):
        return x + 2
    s = func2(19)
print(s)