'''
Create Fri Oct 10 2025 20:45
@author: ntdai

#18 VÒNG LẶP for
'''
# Vòng lặp đi từ 0 đến < n 
n = 10
for i in range(n):
    print(i)
#-------------------------
# Tính tổng từ 0 -> n
n = int(input("nhập n = "))
tong = 0
for i in range(n+1):
    tong = tong + i
print("tong =", tong)
#-------------------------
# Vòng lặp for, có bước nhảy tăng tuỳ chỉnh
for i in range(0, 10, 2):
    print(i)
for i in range(10, 0, -1):
    print(i)
#-------------------------
# Vòng lặp for duyệt các phần tử của list
colors = ["red", "green", "orange"]
for color in colors:
    print(color)
# Vòng lặp for duyệt phần tử theo vị trí
for i in range(len(colors)):
    print(colors[i])