'''
Create Tue Oct 14 2025 15:40
@author: ntdai

#22 BÀI TẬP CHUYỂN ĐỔI SỐ THẬP PHÂN SANG SỐ NHỊ PHÂN 
'''
# nhập n
n = -1
while(n<=0):
    n = int(input("nhập n: "))
#-----------------------------
# chuyển từ thập phân sang nhị phân
binary = ""
if n==0:
    binary = "0"
else:
    while n>0:
        binary = str(n%2) + binary
        n = n // 2
print("nhị phân", binary) 

'''
Ví dụ:
| Lần lặp |  n  | n%2 | old binary |   new binary           | 
|    1    |  13 |  1  |     ""     |   1                    | 
|    2    |  6  |  0  |    "1"     |   "0"+"1" -> "01"      | 
|    3    |  3  |  1  |    "01"    |   "1"+"01" -> "101"    | 
|    4    |  1  |  1  |    "101"   |   "1"+"101" -> "1101"  | 
'''  