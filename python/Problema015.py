# Problema015
# Crear un algoritmo para calcular el interés compuesto generado
# por un capital depositado durante cierta cantidad de tiempo a
# una tasa de interés determinada, aplique las siguientes 
# fórmulas: M=(1+(r/100))™*C  |  I=M-C
C = float(input("Ingresar capital: "))
r = float(input("Tasa de interés: "))
t = float(input("Tiempo del préstamo: "))

M = ((1 + r/100)**t ) * C
I = M - C

print()
print("Monto total a pagar = ", M)
print("Utilidad = ", I, "%")
