def mmc (peso, altura):
    return peso * 100 / (altura * 2) # para trabalhar com alturas em CM e não em M
peso = int(input("Qual o seu peso (em KG): "))
altura = int(input("Qual o sua altura (em CM): "))
imc = mmc(peso, altura)
print(f'Seu IMC é: {imc:.2f}')

# outro exemplo

def taximetro (distancia, multiplicador=1.1):
    largada = 2
    km_rodados = 5
    valor = (largada + distancia * km_rodados) * multiplicador
    return valor

pagamento = taximetro(3.5)
print(f'O pagamento do taximetro é: {pagamento:.2f}')

def func1 (x):
    x = 10
    print(f"valor de x: {x}")
    # por não ter o return Não retorna nada
def func2 (x):
    x = 20
    print(f"valor de x: {x}")
    return x
vn = 0
print(f"Função principal - vn {vn}")
vn = func1(vn) # não vai retornar nada devido a falta do return
print(f"Função principal - vn {vn}")
vn = func2(vn)
print(f"Função principal - vn {vn}")

def func1 (x):
    x = 10
    print(f"valor de x: {x}")
    # por não ter o return Não retorna nada
def func2 (x):
    x = 20
    print(f"valor de x: {x}")
    # por não ter o return Não retorna nada
x = 0
print(f"Função principal - x {x}")
func1(x) # não vai retornar nada devido a falta do return
print(f"Função principal - x {x}")
func2(x)
print(f"Função principal - x {x}")

