""""
Create Tue Sep 23 2025 15:00
@author: ntdai

#04 XUẤT DỮ LIỆU BẰNG print
Cú pháp:
    print(object, separator, end, file, flush)
        object: đối tượng, dữ liệu được xuất
        sep: ngăn cách
        end: kết thúc
        file: tên tập tin
        flush: đẩy dữ liệu
"""
# Các loại print
print()

print(2)
print("Hello Tien Dai")

print(2); print("Hello Tien Dai")

print("Hello", "Tien", "Dai", "123")
print("Hello", "Tien", "Dai", "123", sep=',')

print("Hello", end=": ")
print("Tien Dai")

print("Tên={0}, Họ={1}" .format("Đại", "Nguyễn"))