import matplotlib.pyplot

# entradas
meses = ['Janeiro', 'Fevereiro', 'Março', 'Abril', 'Maio', 'Junho']
valores = [105235, 107697, 110256, 109236, 108859, 109986]

# cria o gráfico
matplotlib.pyplot.plot(meses, valores)

# limitando range y
matplotlib.pyplot.ylim(100000, 120000)

# add titulo
matplotlib.pyplot.title('Faturamento no primeiro semestre de 2017')

# add rotulos x e y 
matplotlib.pyplot.xlabel('Meses')
matplotlib.pyplot.ylabel('Faturamento em R$')

# mostra o gráfico
matplotlib.pyplot.show()