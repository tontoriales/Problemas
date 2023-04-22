# Problema012
# El dueño de una tienda compra un artículo a un precio determinado.
# Obtener el precio en que lo debe vender para
# obtener una ganancia del 30%.
M_C = input(" Monto de compra: ")
M_C = float(M_C)

P_GAN = 0.3;
MON_G = M_C * P_GAN; 
P_V = M_C + MON_G; 

print("");
print(" Precio de venta: ", P_V);