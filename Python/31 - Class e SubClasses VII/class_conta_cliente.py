class cliente:
    def __init__(self, cpf, nome, endereco):
        self.cpf = cpf
        self.nome = nome
        self.endereco = endereco

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
        print(f"Nome: {self.clientes}\nNúmero: {self.numero}\nSaldo: {self.saldo}")

    def transferirValor(self,contaDestino,valor):
        if self.saldo <= valor:
            return ("Não existe saldo suficiente")
        else:
            contaDestino.depositar(valor)
            self.saldo -= valor
            return ("Transferência realizada com sucesso")