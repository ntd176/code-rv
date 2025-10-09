'''
Create Wed Oct 08 2025 10:10
@author: ntdai

#17 KIỂU DỮ LIỆU List
    List là dạng dữ liệu cho phép lưu trữ nhiều kiểu dữ liệu khác nhau
    Các mục được phân tách bằng dấu phẩy được đặt trong dấu ngoặc []
'''

# Tạo list rỗng
emptyList1 = []
# Tạo ra một đối tượng list
emptyList2 = list()
print(emptyList1)
print(emptyList2)
#--------------------------
# Tạo ra list có dữ liệu
colors = ["green", "yellow", "red"]
print(colors)
#--------------------------
# List có thứ tự, vị trí các phần tử được đánh dấu từ 0, từ trái sang phải
studentList = ["Ai", "Bi", "Ci", "Di"]
print(studentList[2])
print(studentList[0])
print(studentList[0:2])
print(studentList[1:4])
#--------------------------
# Thêm phần tử vào list
studentList.append("Fi")
print(studentList)
# Chèn phần tử vào list
studentList.insert(2, "Hi")
print(studentList)
studentList[len(studentList):] = ["Li"] # note
print(studentList)
#--------------------------
# Số lượng phần tử có trong list => len
print(len(studentList))
#--------------------------
# Đếm sô lượng phần tử thoả điều kiện
print("Đếm Ai: ", studentList.count("Ai"))
print("Đếm Bi: ", studentList.count("Bi"))
#--------------------------
# Xoá phần tử ra khỏi list
studentList.remove("Ci")
print(studentList)
studentList.remove("Li")
print(studentList)
# Xoá phần tử ra khỏi list bằng vị trí
studentList.pop(0)
print(studentList)
#--------------------------
# Kiểm tra phần tử có trong list
if "Bi" in studentList:
    studentList.remove("Bi")
    print(studentList)
#--------------------------
# Đảo ngược list
studentList.reverse()
print(studentList)
#--------------------------
# Sắp xếp list
studentList.sort()
print(studentList)
numbers = [7, 5, 3, 6, 9, 2, 8, 1, 4]
numbers.sort()
print(numbers)
# Sắp xếp ngược
studentList.sort(reverse=True)
print(studentList)
numbers.sort(reverse=True)
print(numbers)
#--------------------------
# Xoá sạch dữ liệu trong list
studentList.clear()
print(studentList)