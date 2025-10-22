# para criar uma class utilizamos o "class"
class conta:
    def __init__(self, numero, cpf, nomeTitular, saldo):
        self.numero = numero
        self.cpf = cpf
        self.nomeTitular = nomeTitular
        self.saldo = saldo

    def depositar(self, valor):
        self.saldo += valor
        print("Valor depositado com sucesso")

    def sacar (self, valor): # validação de saldo
        if self.saldo >= valor:
            self.saldo -= valor
            return True
        elif (self.saldo < valor):
            return False

    def gerar_extrato(self):
        print(f"Número: {self.numero}\nCPF: {self.cpf}\nNome: {self.nomeTitular}\nSaldo: {self.saldo}")

def main ():
    c1 = conta(123, "123.456.789-00", "João", 100)
    c1.depositar(100) # chamando o método depositar para c1
    c1.gerar_extrato()  # chamando o método gerar extrato para c1
    # c1.sacar(50) # chamando o método sacar para c1

    valor_saque = 500
    resultado_saque = c1.sacar(valor_saque) # fazemos uma validação com o False ou True

    if resultado_saque:
        print("Saque realizado com sucesso")
        print(f"Saque de {valor_saque} realizado com seucesso")
        print(f"Saldo atual: {c1.saldo}")
    else:
        print("Saldo insuficiente")

    c1.gerar_extrato() # chamando o método gerar extrato para c1

if __name__ == "__main__":
    main()