from abc import ABC, abstractmethod


# Classe abstrata Veiculo
class Veiculo(ABC):
    @abstractmethod
    def mover(self):
        pass

    @abstractmethod
    def ligar(self):
        pass


# Subclasse Carro
class Carro(Veiculo):
    def mover(self):
        return "O carro está se movendo."

    def ligar(self):
        return "O carro está ligado."


# Subclasse Bicicleta
class Bicicleta(Veiculo):
    def mover(self):
        return "A bicicleta está se movendo."

    def ligar(self):
        return "Não é possível ligar uma bicicleta."


class Aviao(Veiculo):
    def mover(self):
        return "O Avião está se movendo"

    def ligar(self):
        return "O Avião está ligado"


# Testando as implementações
carro = Carro()
bicicleta = Bicicleta()
aviao = Aviao()

print(carro.mover())  # Saída: O carro está se movendo.
print(carro.ligar())  # Saída: O carro está ligado.
print(aviao.ligar())
print(aviao.mover())
print(bicicleta.mover())  # Saída: A bicicleta está se movendo.
print(bicicleta.ligar())  # Saída: Não é possível ligar uma bicicleta.