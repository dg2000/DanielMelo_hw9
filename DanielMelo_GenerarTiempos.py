import numpy as np

import matplotlib.pyplot as plt

import time


def fibonacci(n):

    #casos base

    if(n == 0):
        return 0
    elif(n == 1):
        return 1
    #Recursividad
    else:
        return fibonacci(n-1) + fibonacci(n-2)

def get_time(n):

    t0 = time.time()
    fibonacci(n)
    t1 = time.time() - t0

    return t1

for i in range(35):

    print str(i) + " " + str(get_time(i))

    
