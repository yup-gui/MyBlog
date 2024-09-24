# print(value,...,sep="",end="/n",file=None)  sep规定中间间隔，end规定末尾结束，file决定输出目标
a = 100
b = 99
c = 1
print(a, b, c, "中文", "string", sep="/", end="///!", file=None)
a = "string"
print(a * 4, "\n")  # *表示重复
print(a[-1:1])
