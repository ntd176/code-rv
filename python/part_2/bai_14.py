'''
Create Tue Sep 30 2025 14:30
@author: ntdai

#14 CÂU LỆNH RẺ NHÁNH if else
    
    Dạng 1:
        if (điều kiện):
            các câu lệnh (phải thụt vào)
    
    Dạng 2:
        if (điều kiện):
            các câu lệnh 1
        else:
            các câu lệnh 2

    Dạng 3:
        if (điều kiện 1):
            các câu lệnh 1
        elif (điều kiện 2):
            các câu lệnh 2
        else:
            các câu lệnh 3
'''
#--------------------------------------
# Dạng 1
x = input("Nhập số nguyên x: ")
x = int(x)

if x > 0:
    print(x, "là số dương")
#--------------------------------------
# Dạng 2
if x%2==0:
    print(x, "là số chẵn")
else:
    print(x, "là só lẻ")
#--------------------------------------
# Dạng 3
if x>= 9:
    print("Xếp loại: xuất sắc")
elif x>=8:
    print("Xếp loại: giỏi")
elif x>=7:
    print("Xếp loại: khá")
elif x>=6:
    print("Xếp loại: trung bình")
else:
    print("Xếp loại: yếu")