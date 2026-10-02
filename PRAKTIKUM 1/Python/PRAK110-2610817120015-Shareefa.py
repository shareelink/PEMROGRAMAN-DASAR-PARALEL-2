import math

c = 5
a = 12
b = int(math.sqrt(a**2 + c**2))
keliling = int(a + b + c)
luas = int((a * c) / 2)

print(f"Diketahui :\nAlas = {c} meter\nTinggi = {b} meter\n\n")
print(f"Jawab :\nSisi A = {a} cm\nSisi B = {b} cm\nSisi C = {c} cm\nKeliling = {keliling} cm\nLuas = {luas} cm²")
