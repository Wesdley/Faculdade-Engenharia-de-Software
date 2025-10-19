# formatação de dados para evitar erros
def somar(a, b):
    try:
        resultado = a + b
        return resultado
    except TypeError:
        print("Erro: Tipos de dados incompatíveis") # tratamento para erros de tipos
    except Exception as e:
        print(f"Erro inesperado {e}") # tratamentos para erros do cliente
    return None

print(somar(5,5)) # vai dar certo
print(somar(True, 5)) # vai dar certo a conta, mas pelo falo de true = 1. É uma vulnerabilidade que deve ser tratada
print(somar("a", 5)) # vai dar erro de tipo