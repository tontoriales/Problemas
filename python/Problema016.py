# Problema016
# Crear un programa que permita convertir una cantidad de 
# segundos en horas, minutos y segundos
t = int(input("Tiempo en segundos: "))

HORA = 3600;
MINUTO = 60;
h = int(t / HORA)
t = t % HORA
m = int(t / MINUTO)
s = t % MINUTO

print()
print("Hora: ", h)
print("Minuto: ", m)
print("Segundo: ", s)
