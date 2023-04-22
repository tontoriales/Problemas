# Problema015
# Crear un algoritmo para calcular el inter�s compuesto generado
# por un capital depositado durante cierta cantidad de tiempo a
# una tasa de inter�s determinada, aplique las siguientes 
# f�rmulas: M=(1+(r/100))�*C  |  I=M-C
C = float(input("Ingresar capital: "))
r = float(input("Tasa de inter�s: "))
t = float(input("Tiempo del pr�stamo: "))

M = ((1 + r/100)**t ) * C
I = M - C

print()
print("Monto total a pagar = ", M)
print("Utilidad = ", I, "%")
