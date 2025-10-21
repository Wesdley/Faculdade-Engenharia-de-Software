from tkinter import * # importa o tkinter

janelaPrincipal = Tk() # cria janela sem nada

texto = Label(master = janelaPrincipal, text = "Minha janela exibida")
texto.place(x = 50, y = 100)

janelaPrincipal.mainloop() # mantem ela aberta