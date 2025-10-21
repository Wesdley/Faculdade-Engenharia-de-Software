# Função responsável por mover um disco de uma torre para outra
def mover_disco(origem, destino):
    # Retira o disco do topo da torre de origem (último elemento da lista)
    disco = origem.pop()
    # Coloca esse disco no topo da torre de destino
    destino.append(disco)


# Função que imprime o estado atual das três torres
def imprimir_torres(torre_A, torre_B, torre_C):
    print("A:", torre_A)  # Mostra o conteúdo da torre A
    print("B:", torre_B)  # Mostra o conteúdo da torre B
    print("C:", torre_C)  # Mostra o conteúdo da torre C
    print()  # Linha em branco para separar visualmente


# Função recursiva que resolve o problema da Torre de Hanói
def torres_de_hanoi_recursivo(num_discos, origem, destino, auxiliar):
    # Caso base: se houver apenas 1 disco, basta mover ele diretamente
    if num_discos == 1:
        mover_disco(origem, destino)  # Move o disco da origem para o destino
        imprimir_torres(torre_A, torre_B, torre_C)  # Mostra o estado das torres após o movimento
    else:
        # Passo 1: mover os N-1 discos da torre de origem para a torre auxiliar
        torres_de_hanoi_recursivo(num_discos - 1, origem, auxiliar, destino)

        # Passo 2: mover o maior disco (o último restante) da origem para o destino
        mover_disco(origem, destino)
        imprimir_torres(torre_A, torre_B, torre_C)  # Mostra o estado das torres após o movimento

        # Passo 3: mover os N-1 discos da torre auxiliar para a torre de destino
        torres_de_hanoi_recursivo(num_discos - 1, auxiliar, destino, origem)


# -------------------------------
# Parte principal do programa
# -------------------------------

num_disco = 7  # Define o número de discos da torre

# Inicializa as torres:
# Torre A começa com todos os discos (do maior para o menor)
# Torre B e Torre C começam vazias
torre_A = list(range(num_disco, 0, -1))  # Exemplo: [7, 6, 5, 4, 3, 2, 1]
torre_B = []
torre_C = []

# Mostra o estado inicial das torres antes de começar
imprimir_torres(torre_A, torre_B, torre_C)

# Inicia o processo recursivo para mover todos os discos da torre A para a torre C
# usando a torre B como auxiliar
torres_de_hanoi_recursivo(num_disco, torre_A, torre_C, torre_B)