a = 400000 
b = 350000 
harga_diskon_a = int((100/100 - 13/100) * a)
harga_diskon_b = int((100/100 - 21/100) * b)

print("Harga sepatu A adalah", a)
print("Harga sepatu B adalah", b)
print(f"Sepatu A mendapat diskon 13% sehingga harganya menjadi {harga_diskon_a}")
print(f"Sepatu B mendapat diskon 21% sehingga harganya menjadi {harga_diskon_b}")