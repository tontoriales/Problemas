# Problema019
# Cierto hospital recibe un monto de donación en dólares, el cual va a
# distribuir de la siguiente manera:
# 	• 34.65% para Pediatría
# 	• 31.25% para Cardiología
# 	• El resto para Neurología
# Elabora un algoritmo que permita ingresar el monto de la donación,
# luego que calcule y muestre el monto asignado a cada especialidad.
DON = float(input("Ingresar monto donación ($): "))

PED = DON * 0.3465
CAR = DON * 0.3125
NEU = DON - (PED + CAR)

print()
print("Monto pediatria ($): ", PED)
print("Monto cardiologia ($): ", CAR)
print("Monto neurologia ($): ", NEU)
