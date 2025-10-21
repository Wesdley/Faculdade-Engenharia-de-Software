for num in range(1000,10000):
    menor = num % 100 # obtem o menor número significativo
    maior = num // 100 # obtem o maior número significativo
    raiz = menor + maior

    if raiz ** 2 == num: #valida se a raiz gera o numero testado
        print(f"Numero que começou: {num}")
        print(f"Menor numero: {menor}")
        print(f"Maior numero: {maior}")
        print(f"Raiz do numero: {raiz}")
print('terminou')
print('saida',num)

print('\n\nOutra forma')
# uma forma mais otimizada desse calculo
for raiz in range (32,100):
    num = raiz * raiz # calcula o numero gerado pela raiz
    menor = num % 100 # obtem o numero dos algarismos menos significativos
    maior = num // 100 # obtem o numero dos algarismos mais significativos

    if ( maior + menor ) == raiz: #  valida se a raiz corresponde a soma
        print(f"Numero que começou: {num}")
        print(f"Menor numero: {menor}")
        print(f"Maior numero: {maior}")
        print(f"Raiz do numero: {raiz}")
print('terminou')
print('saida',num)