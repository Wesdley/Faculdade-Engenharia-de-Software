from class_conta_cliente import cliente
from class_conta_cliente_extrato import conta

c1 = cliente("123.456.789-00", "João", "Rua 1")
c2 = cliente("123.456.789-00", "Maria", "Rua 2")

conta1 = conta([c1,c2],1,200)

c1.depositar(2000)
c1.sacar(1500)
c1.extrato.extrato(conta1.numero)