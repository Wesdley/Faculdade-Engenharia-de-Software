nota1 = float(input("Digite um número: "))
nota2 = float(input("Digite um número: "))
nota3 = float(input("Digite um número: "))

media = (nota1 + nota2 + nota3) / 3
print(f"A média é: {media:.2f}")

if media >= 8:
    print("Parabens!")
elif media <= 7:
    print("Precisa melhorar")
else:
    print("Reprovado")

inteiro = int(input("Digite um número inteiro: "))
floatinho = float(input("Digite um número flutuante: "))
booleano = bool(input("Digite False ou True (0 ou 1): "))

print(f"Inteiro: {inteiro}")
print(f"Float: {floatinho}")
print(f"bool: {booleano}")