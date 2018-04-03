import numpy as np

import matplotlib.pyplot as plt

#Inicializo los datos
pyt = np.genfromtxt("times_python.csv")

c = np.genfromtxt("times_cpp.csv")

#grafico los datos

plt.plot(pyt[:, 0], pyt[:, 1], label = "Python")

plt.plot(c[:, 0], c[:, 1], label = "c++")

plt.legend()

plt.title("Tiempo de procesamiento")

plt.xlabel("Tiempo de procesamiento")

plt.ylabel("Elemento de la serie")

plt.savefig("cpp_vs_python.png")
