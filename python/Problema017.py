# Problema017
# Elabora un algoritmo que permita ingresar la cantidad de alumnas
# y de alumnos de un salón de clase; luego que calcule el
# porcentaje de varones y mujeres.
NH = int(input("Ingresar num. hombres: "))
NM = int(input(" Ingresar num. mujeres: "))
TA = NH + NM;
PH = (NH * 100) / TA;
PM = (NM * 100) / TA;
print(" % de Hombres es: ", PH) 
print(" % de Mujeres es: ", PM) 
