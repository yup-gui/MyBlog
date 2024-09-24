fp=open("note.txt", "w")  # 打开文件 w-->write r-->read a-->add
print("原神，启动！", file=fp)
fp.close()

