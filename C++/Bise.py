import numpy as numpy
import matplotlib.pyplot as plt

def bissecao(f,a,b,tol,N):
    i = 1
    fa = f(a)
    
    while (i <= N):
        p = a+(b-a)/2
        fp = f(p)

        if((fp==0) or ((b-a)/2 < tol)):
            return p,i;
        i = i+1;
        if(fa *fp > 0):
            a= p
            fa = fp
        else :
            b= p

    raise Err('Nun. max de Iter. excedido');