'''
Create Sat Sep 27 2025 9:00
@author: ntdai

#09 PHÉP TOÁN SỐ HỌC
'''
a = input("Nhập vào số a: ")
print("Kiểu dữ liệu của a: ", type(a))
a = float(a)
print("Kiểu dữ liệu của a: ", type(a))

b = input("Nhập vào số b: ")
print("Kiểu dữ liệu của b: ", type(b))
b = float(b)
print("Kiểu dữ liệu của b: ", type(b))

print("{0} + {1} = {2}".format(a, b, a+b))
print("{0} - {1} = {2}".format(a, b, a-b))
print("{0} * {1} = {2}".format(a, b, a*b))
print("{0} / {1} = {2}".format(a, b, a/b))
print("{0} % {1} = {2}".format(a, b, a%b))