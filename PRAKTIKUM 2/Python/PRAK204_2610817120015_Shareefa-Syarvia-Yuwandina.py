jari = float(input("Jari-jari = "))
t_b = float(input("Tinggi Bejana = "))
phi = 22/7
muter = 2 * phi * jari
luas = 2 * phi * jari * (jari + t_b)
vol = phi * jari * jari * t_b
print("Volume = %.2f" % vol)
print("Luas = %.2f" % luas)
print("Keliling = %.2f" % muter)