# cria a agregação das classes
from class_conta import conta
from class_conta_cliente import cliente
from class_extrato import extrato

c1 = cliente("123.456.789-00", "João", "Rua 1")
c2 = cliente("123.456.789-00", "Maria", "Rua 2")

#criando uma conta com os 2 clientes
conta1 = conta([c1,c2],1,200)

conta1.gerar_extrato()
conta1.depositar(1500)
conta1.sacar(500)
conta1.gerar_extrato()