# Problema014
# A un vendedor se le asigna un bono 10% extra por comisión de
# sus ventas, el vendedor desea saber cuánto dinero obtendrá
# por concepto de comisiones por las tres ventas que realiza en el
# mes y el total que recibirá en el mes tomando en cuenta su
# sueldo base y comisiones.
S_BAS = input(" Sueldo base: ")
S_BAS = float(S_BAS)
V1 = input(" Venta 1: ")
V1 = float(V1)
V2 = input(" Venta 2: ")
V2 = float(V2)
V3 = input(" Venta 3: ")
V3 = float(V3)

P_COM = 0.1;
T_VEN = V1 + V2 + V3;
T_COM = T_VEN * P_COM; 
S_TOT = S_BAS + T_COM;
print(" Sueldo total: ", S_TOT)