'''
Create Sat Sep 27 2025 9:22
@author: ntdai

#10 TOÁN TỬ SO SÁNH VÀ LOGIC
'''
x = int(input("x: "))
y = int(input("y: "))
# True or False
print("{0} < {1} là {2}".format(x, y, x<y))
print("{0} > {1} là {2}".format(x, y, x>y))
print("{0} == {1} là {2}".format(x, y, x==y))
print("{0} != {1} là {2}".format(x, y, x!=y))
print("{0} <= {1} là {2}".format(x, y, x<=y))
print("{0} >= {1} là {2}".format(x, y, x>=y))
#--------------------------------------------
# Toán tử Logic
z = int(input("z: "))
print("({0}<{1}) and ({2}<{3}) = {4}".format(x, y, y, z, (x<y) and (y<z)))
print("({0}<{1}) or ({2}<{3}) = {4}".format(x, y, y, z, (x<y) or (y<z)))
print("not ({0}<{1}) = {2}".format(x, z, not (x<z)))
