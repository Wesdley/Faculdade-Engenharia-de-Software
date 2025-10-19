# manipulando variáveis globais e locais

varial_global = "Eu sou uma variável global"
def variavel_local():
    variavel_local = "Eu sou uma variável local"
    print(variavel_local)

variavel_local()
# se chamar a variável local dentro de um print vai causar erro por ser uma função
print(varial_global)