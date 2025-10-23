class animal:
    def __init__(self, nome):
        self.nome = nome

    def fala(self):
        pass

    def movimentar(self):
        pass


class Cachorro(animal):
    def falar(self):
        return (f"{self.nome} Au Au")

    def movimentar(self):
        return (f"{self.nome} está andando")


class Gato(animal):
    def falar(self):
        return (f"{self.nome} Miau")

    def movimentar(self):
        return (f"{self.nome} está andando")


class Vaca(animal):
    def falar(self):
        return (f"{self.nome} Muu")

    def movimentar(self):
        return (f"{self.nome} está andando")


class voador:
    def voar(self):
        return (f"{self.nome} está voando")


class nadar:
    def nadar(self):
        return (f"{self.nome} está nadando")


class Pato(animal, nadar, voador):
    def falar(self):
        return (f"{self.nome} Quack")

    def voar(self):
        return (f"{self.nome} está voando")

    def andar(self):
        return (f"{self.nome} está andando")

    def movimentar(self):
        return (f"{self.andar()}, {self.nadar()} e {self.voar()}")


class Jacare(animal, nadar):
    def falar(self):
        return (f"{self.nome} Roar")

    def andar(self):
        return (f"{self.nome} está andando")

    def movimentar(self):
        return (f"{self.andar()} e {self.nadar()}")


# Função que usa polimorfismo para poder falar
def fazer_som(animal):
    return animal.falar()


def fazer_movimento(animal):
    return animal.movimentar()


# instancias das classes
gato = Gato("Bonitão")
cachorro = Cachorro("Beethoven")
vaca = Vaca("Miamu")
pato = Pato("Donald")
jacare = Jacare("Tico")

# chamadas polimorficas

print(fazer_movimento(gato))
print(fazer_movimento(cachorro))
print(fazer_movimento(vaca))
print(fazer_movimento(pato))
print(fazer_movimento(jacare))

print(fazer_som(gato))
print(fazer_som(cachorro))
print(fazer_som(vaca))
print(fazer_som(pato))
print(fazer_som(jacare))
