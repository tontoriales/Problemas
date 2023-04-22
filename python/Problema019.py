# Problema019
# Cierto hospital recibe un monto de donaci�n en d�lares, el cual va a
# distribuir de la siguiente manera:
# 	� 34.65% para Pediatr�a
# 	� 31.25% para Cardiolog�a
# 	� El resto para Neurolog�a
# Elabora un algoritmo que permita ingresar el monto de la donaci�n,
# luego que calcule y muestre el monto asignado a cada especialidad.
DON = float(input("Ingresar monto donaci�n ($): "))

PED = DON * 0.3465
CAR = DON * 0.3125
NEU = DON - (PED + CAR)

print()
print("Monto pediatria ($): ", PED)
print("Monto cardiologia ($): ", CAR)
print("Monto neurologia ($): ", NEU)
