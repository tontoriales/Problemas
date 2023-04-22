# Problema013
# Crear un algoritmo que permita convertir de dólares a soles,
# dado el tipo de cambio, el monto en dólares y el monto de soles
# deben ser solicitados por teclado, posteriormente imprimir la
# conversión a soles.
M_D = input(" Dolares a intercambiar ($): ")
M_D = float(M_D)
T_C = input(" Dolares a intercambiar ($): ")
T_C = float(T_C)

M_S = M_D * T_C

print("")
print("$ ",M_D, ", equivale a S/ ",M_S)
