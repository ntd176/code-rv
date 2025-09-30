'''
Create Tue Sep 30 2025 14:16
@author: ntdai

#13 TOÁN TỬ ĐIỀU KIỆN
    [Trả về khi đk đúng] if [điều kiện] else [trả về khi đk sai]
'''

x = input("Nhập vào số nguyên: ")
x = int(x)

kq = "chẵn" if (x%2==0) else "lẻ"

print(x, " là số ", kq)