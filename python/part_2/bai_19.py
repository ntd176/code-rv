'''
Create Fri Oct 10 2025 21:10
@author: ntdai

#19 VÒNG LẶP LỒNG NHAU
'''
# Bài tập in bảng cửu chương
for j in range(2, 10):
    print("Bảng cửu chương", j)
    for i in range(1, 11):
        print("{0} * {1} = {2}".format(j, i, j*i))