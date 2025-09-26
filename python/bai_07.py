'''
Create Fri Sep 26 2025 15:00
@author: ntdai

#07 KIỂU DỮ LIỆU
    Python là một ngôn ngữ thông dịch (không yêu cầu biên dịch), không bắt buộc phải khai báo kiểu dữ liệu của biến
    Trình thông dịch tự đoán kiểu dữ liệu
    Cách kiểm tra dữ liệu của biến:
        type(tên_biến)
'''
x = 1
print(type(x))

x = 1.0
print(type(x))

x = 1 + 2j
print(type(x))

x = True
print(type(x))

x = "abc"
print(type(x))

x = None
print(type(x))

e = 2.5
pi = 3.14
text = "Hello Tien Dai"
print("Kiểu dữ liệu của biến e:", type(e),
      ", Kiểu dữ liệu của biến pi:", type(pi),
      ", Kiểu dữ liệu của biến text:", type(text))