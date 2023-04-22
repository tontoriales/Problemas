# Problema018
# Un alumno desea saber cual será su calificación final en un curso.
# Dicha calificación se compone de los siguientes porcentajes:
#   • 55% del promedio de sus tres calificaciones parciales.
#   • 30% de la calificación del examen final.
#   • 15% de la calificación de un trabajo final.
N1 = int(input("Nota 1: "))
N2 = int(input("Nota 2: "))
N3 = int(input("Nota 3: "))
EF = int(input("Examen final: "))
TF = int(input("Trabajo final: "))
		
PP = (N1 + N2 + N3) / 3;
NF = PP*0.55 + EF*0.3 + TF*0.15;

print("")
print("Nota Final: ", NF)
