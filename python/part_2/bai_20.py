'''
Create Fri Oct 10 2025 21:20
@author: ntdai

#20 KIỂU DỮ LIỆU String
'''
a = 10
print(type(a))
b = 10.5
print(type(b))
c = True
print(type(c))
d = "Xin chào"
print(type(d))
#-------------
# Cộng chuỗi
s1 = "Hello"
s2 = "Tiến Đại"
s3 = s1 + " " + s2
print(s3)
#-------------
# Tạo chuỗi nhiều dòng
chuoi_nhieu_dong = '''
Dòng 1
Dòng 2
Dòng 3
'''
print(chuoi_nhieu_dong)
#-------------
# Lặp lại chuỗi
chep_phat = "Em hứa làm bài tập đầy đủ\n"
chep_phat_10 = chep_phat*10
print(chep_phat_10)
#-------------
# Kiểm tra chuỗi có thuộc khác
chuoi_1 = "Hello Tiến Đại"
chuoi_2 = "Đại"
chuoi_3 = "CV"

if chuoi_2 in chuoi_1:
    print("chuỗi 2 là con chuỗi 1")
else:
    print("chuỗi 2 không là con chuỗi 1")

if chuoi_3 in chuoi_1:
    print("chuỗi 3 là con chuỗi 1")
else:
    print("chuỗi 3 không là con chuỗi 1")
#-------------
# Viết hoa chữ đầu của chuỗi
s = "hôm nay trời đẹp quá!"
s = str.capitalize(s)
print(s)
# Viết hoa toàn bộ chuỗi
s = s.upper()
print(s)
# Viết thường toàn bộ chuỗi
s = s.lower()
print(s)
#-------------
# Tìm và đếm số lượng chuỗi con
s = "Lập trình python là ngôn ngữ xu hướng, vì vậy bạn nên học python"
print(s.find("python")) # trả về -1 nếu không tìm thấy, ngược lại trả về vị trí nằm trong chuỗi 
print(s.count("python"))
# Thay thế
s = s.replace("python", "PYTHON")
print(s)
#-------------
# Cắt chuỗi thành một list
list = s.split(" ")
print(list)
#-------------
# Lấy chuỗi con
print(s[0:10])