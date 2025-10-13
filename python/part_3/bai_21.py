'''
Create Mon Oct 13 2025 14:00
@author: ntdai

#21 VÒNG LẶP While 
    Thường sử dụng vòng lặp while khi không biết trước số lần lặp
    
    Yêu cầu người dùng nhập vào một con số n > 0.
    Nếu nhập sai thì yêu cầu người dùng nhập lại.
'''
n = 0
while (n<=0):
    n = int(input("Nhập n: "))
#-----------------------------
i = 0
tong = 0
while (i<=n):
    tong = tong + i
    i = i + 1
print("tong =", tong)
#-----------------------------
j = 0
while (j<=10):
    print(j, "bên trong vòng lặp")
    j = j + 1
else:
    print(j, "bên ngoài vòng lặp")
#-----------------------------
j = 0
while (j<=10):
    print(j, "bên trong vòng lặp")
    j = j + 1
    if(j>=5):
        break
else:
    print(j, "bên ngoài vòng lặp")