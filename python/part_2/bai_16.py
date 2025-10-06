'''
Create Mon Oct 06 2025 15:17
@author: ntdai

#16 TÍNH DIỆN TÍCH VÀ CHU VI TAM GIÁC
    Nhập 3 điểm trên hệ trục toạ độ Oxy
    1, Xác định 3 điểm có tạo thành tam giác không?
    2, Nếu tạo thành tam giác
        a, Xuất ra chu vi của tam giác
        b, Xuất ra diện tích của tam giác
'''

import math

# Nhập dữ liệu
xA =  float(input("Nhập xA: "))
yA =  float(input("Nhập yA: "))
xB =  float(input("Nhập xB: "))
yB =  float(input("Nhập yB: "))
xC =  float(input("Nhập xC: "))
yC =  float(input("Nhập yC: "))

AB = math.sqrt((xB-xA)**2 + (yB-yA)**2)
AC = math.sqrt((xC-xA)**2 + (yC-yA)**2)
BC = math.sqrt((xC-xB)**2 + (yC-yB)**2)

# Kiểm tra
if ((AB+AC>BC) and (AB+BC>AC) and (BC+AC>AB)):
    # Tính chu vi
    cv = AB+AC+BC
    print("Chu vi = ", cv)
    # Tính diện tích
    p = cv/2
    dt = math.sqrt(p*(p-AB)*(p-AC)*(p-BC))
    print("Diện tích = ", dt)
else:
    print("Không tạo thành tam giác")