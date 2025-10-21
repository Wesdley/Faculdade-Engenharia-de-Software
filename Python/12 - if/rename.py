idade = int(input("Digite sua idade: "))
if idade <= 10:
    print("Criança")
elif idade > 10 and idade < 18:
    print("Adolecente")
elif idade >= 18 and idade < 65:
    print("Adulto")
else:
    print("Idoso")