# 求1到20的阶乘和
sum = 0
jiecheng = 1
for i in range(1, 21):
    jiecheng *= i
    sum += jiecheng

print(sum)
