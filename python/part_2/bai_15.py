'''
Create Sat Oct 04 2025 14:50
@author: ntdai

#15 GIẢI PHƯƠNG TRÌNH BẬC HAI ax^2+bx+c=0
'''
import math
# Nhập dữ liệu
a = float(input("Nhập a: "))
b = float(input("Nhập b: "))
c = float(input("Nhập c: "))

if(a!=0):
    # ** -> mũ
    delta = b**2 - 4*a*c 
    if (delta<0):
        print("phương trình vô nghiệm")
    elif(delta==0):
        x = -b/(2*a)
        print("phương trình có nghiệm kép x1=x2=", x)
    else:
        x1 = (-b-math.sqrt(delta))/(2*a)
        x2 = (-b+math.sqrt(delta))/(2*a)
        print("phương trình có 2 nghiệm x1={0} và x2={1}".format(x1, x2))
else:
    print("không phải phương trình bậc 2")