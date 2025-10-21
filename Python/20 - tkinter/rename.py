from tkinter import * # importa o tkinter

def clickButton ():
    print("Madara!")

janelaPrincipal = Tk() # cria janela sem nada

texto = Label(master = janelaPrincipal, text = "Minha janela exibida")
texto.pack()

pic = PhotoImage(file="C:/Users/User/Desktop/Curso/Faculdade-Engenharia-de-Software/Python/20 - tkinter/madara.gif")
logo = Label(master = janelaPrincipal, image = pic)
logo.pack()

botao = Button(master = janelaPrincipal, text = 'Clique', command = clickButton())
botao.pack()

janelaPrincipal.mainloop() # mantem ela aberta