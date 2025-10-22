import datetime
from class_extrato import extrato

class conta:
    def __init__(self, clientes,numero,saldo):
        self.clientes = clientes
        self.numero = numero
        self.saldo = saldo
        self.data_abertura = datetime.datetime.today()
        self.extrato = extrato() # inicializando a composição

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
