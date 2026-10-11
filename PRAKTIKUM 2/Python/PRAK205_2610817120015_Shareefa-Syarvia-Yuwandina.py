import math 

tinggi = int(input("A = "))
sismir = int(input("B = "))  
alas = int(math.sqrt(sismir**2 - tinggi**2))  
kllg = int(alas + tinggi + sismir)
Luas = int(0.5 * alas * tinggi)
print(f"Alas = {alas} cm")
print(f"Tinggi = {tinggi} cm")
print(f"Keliling = {kllg} cm")
print(f"Luas = {Luas} cm^2")
