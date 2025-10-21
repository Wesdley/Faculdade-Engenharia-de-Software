def calcular_expressao ():
    # pegamos a expressao do usuario
    expressao = input("Digite uma expressão matemática: ")

    # tratamos o dado para que não haja nenhum erro
    try:
        resultado = eval(expressao) # eval não é seguro por executar qualquer codigo em python então devemos usar ast.literal_eval
        print(f"O resultado da expressão é: {resultado}")
    except Exception as e:
        print(f"Erro ao calcular a expressão: {e}")

# chamamos a função
calcular_expressao()
