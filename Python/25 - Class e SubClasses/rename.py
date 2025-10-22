# para criar uma class utilizamos o "class"
class conta:
    def __init__(self, numero, cpf, nomeTitular, saldo):
        self.numero = numero
        self.cpf = cpf
        self.nomeTitular = nomeTitular
        self.saldo = saldo

def main ():
    c1 = conta(123, "123.456.789-00", "João", 100)
    print(f"Numero da conta: {c1.numero}")
    print(f"Numero de CPF do titular: {c1.cpf}")
    print(f"Nome do Usuario: {c1.nomeTitular}")
    print(f"Saldo: {c1.saldo}")

class A:
    def f(self):
        print("Aoba")

def mainA ():
    obj_A = A() # objeto sendo instanciado
    obj_A.f()

if __name__ == "__main__":
    main()
    mainA()