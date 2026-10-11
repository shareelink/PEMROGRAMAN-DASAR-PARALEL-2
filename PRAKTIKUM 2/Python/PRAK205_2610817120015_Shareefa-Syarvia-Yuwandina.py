import math 

tinggi = int(input("A = "))
sismir = int(input("B = "))  
alas = int(math.sqrt(sismir**2 - tinggi**2))  
Keliling = int(alas + tinggi + sismir)
Luas = int(0.5 * alas * tinggi)
print(f"Alas = {alas} cm")
print(f"Tinggi = {tinggi} cm")
print(f"Keliling = {Keliling} cm")
print(f"Luas = {Luas} cm^2")