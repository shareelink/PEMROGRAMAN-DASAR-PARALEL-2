import math

c = 5
a = 12
b = int(math.sqrt(a**2 + c**2))
keliling = int(a + b + c)
luas = int((a * c) / 2)

print("Diketahui :")
print(f"Alas = {c} meter")
print(f"Tinggi = {a} meter\n")
print("Jawab :")
print(f"Sisi A = {a} cm")
print(f"Sisi B = {b} cm")
print(f"Sisi C = {c} cm")
print(f"Keliling = {keliling} cm")
print(f"Luas = {luas} cm")