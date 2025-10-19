# programação procedural
def fatorial (n):
    if n == 0:
        return 1
    else:
        return n * fatorial(n-1)
print("Fatorial de 15 (procedural):", fatorial(15))

# programação orientada a objetos
class fatorial:
    def calcular ( self, n):
        if n == 0:
            return 1
        else:
            return n * self.calcular(n-1)
f = fatorial()
print("Fatorial de 15 (Orientado a Objetos):", f.calcular(15))