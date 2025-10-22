class tv:
    def __init__(self, tcanal, menor,maior):
        self.canal = tcanal
        self.menor = menor
        self.maior = maior

    def muda_canal_para_baixo(self):
        if self.canal > self.menor:
            self.canal -= 1
        else:
            self.canal = self.maior

    def muda_canal_para_cima(self):
        if self.canal < self.maior:
            self.canal += 1
        else:
            self.canal = self.menor


def main ():
    tv1 = tv(5,2,10)
    print("tv1 canal")
    for x in range(2,20):
        tv1.muda_canal_para_cima()
        print(tv1.canal)

    tv2 = tv(10,2,10)
    print("tv2 canal")
    for x in range(2,20):
        tv2.muda_canal_para_baixo()
        print(tv2.canal)

if __name__ == "__main__":
    main()