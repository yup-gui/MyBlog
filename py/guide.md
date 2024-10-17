这里是py课程笔记
----

python
可以存储使用很大的数字
有交互开发环境（下载时自带的ide）
字符编码 utf-8  用三个字节表示符号
汉字以一个字符来处理，空格也算一个字符
modeule docs 后台web服务器
ide环境


基本语法：
1.  变量命名 由下划线，数字，字母组成；   
              首字符为字母或者下划线；
              大小写敏感。
              查询保留字：  import keyword  然后使用print(keyword.kwlist)  即可查询
              判断保留字    keyword.iskeyword(查询对象)
1. 注释  单行#
         多行 """注释内容"""
2. 代码结构  py由缩进控制代码结构而不是大括号，记得加冒号表示代码块区域

### 一、概述
编译型（静态语言）： 先将源代码转换成机器码，再根据输入然后执行目标代码  java
与
解释型（脚本语言）： 转换成源代码同时执行目标代码  python

IPO编程方法  Input Process Output
### 二、一些常用函数
1. print(value,...,sep="",end="/n",file=None)  sep规定中间间隔，end规定末尾结束，file决定输出目标
在终端中打印出输出内容
输出内容为数字、表达式，字符串（需要加引号），多个输出内容同行输出，英文逗号隔开
print(a,b,c,"中文")
将数据输出到文件中
使用内置函数open
2. 类型转换
   1. chr(数字/表达式) 将数值转换成ASCII里面对应符号
   python内部使用utf-8编码
   中文编码范围U4e00~u9fa5
   2. ord(符号) 将符号转成对应数字
   3. int() 转换成整数
   4. float()
   5. complex()
   6. complex(x,y)
3. 输入函数input()读取进的内容以**字符**格式存储
4. len()
5. id()查询地址
6. type()查询变量类型


   
### 三、字符编码
ASCII
Unicode   万国码/统一码，占两个字节16位
UTF-8     用1~4字节表示字符
GBK       专门用来解决中文编码，中英文都是双字节
python3采用UTF-8编码方式

### 四、数据类型
数字：int float complex（复数）
字符串 string
列表 list
元组 tuple
集合 sets
字典 dictionary

不可修改数据类型：
数字，字符串，元组
可修改：
列表(list)，字典(dic)，集合(set)

1. 数字
   int  存储整数，没有长度限制   a = 100
   float 整数部分+小数部分  可以使用科学计数法  10e2  表示 10*10`2  a = 100.11
   bool True和False  0或者空集合这种表示假
   complex   可以使用complex（x,y）来创建一个复数，x为实部    也可以使用 x + yj来创建一个复数

2. 字符串
   py不支持单字符类型  全都要用引号括起来
   可以直接使用索引访问字符串里的字符 , 索引可以0开始（从前开始索引），也可以从-1开始（-1，-2，...从后开始索引）
```python
   a = "abcdef"
   b = "ghijkl"
   >>>a[2] == "c"
```
   1. 字符串截取
   a[begin;:end:step]step为取值间距，可以不设置，可以设置为负值，负值就代表从后往前
   a[0:2] == "abc"
   2. 允许字符串拼接
   a + b == "abcdefghijkl"
   a * 2 == "abcdefabcdef"
   3. 格式化字符串
      1.  %   "Myname is %s" % name
      2.  f-string  f"Myname is {name}"    两个例子中name均是要替换进语句的变量
   4. 常用内置方法
      1. string.capitalize()  首字母大写
      2. string.count(target,begin,end)  查找target在string里面的出现次数，begin和end控制查找范围
      3. string.find(target,begin,end)   找到target在string里面的索引    也可以使用 string.index(target，begin，end) 如果target不在string里面会报错
      4. len(string)                     返回字符串的长度
      5. string.lower()                  把string变成小写
      6. string.split(str)               按照str将string分割成小字符串，返回储存这些小字符串的列表  a.split("c") == ["ab","def"]
      7. string.upper()                  把string变成大写
1. 列表(list)
   a = ["abc","def",123,456]
   1. 列表里面允许存储不同类型的元素
   2. 和字符串一样，允许索引，截取，拼接等操作
      列表有个特殊表达  a[1:]  这种可以截取从索引为1到最后位置的元素
   3. 内置函数
      1. len(list)               
      2. list.append(obj)        在list末尾添加obj
      3. list.insert(index,obj)  在index位置添加obj   
      4. list.pop(index)         弹出index位置的元素   就删除操作而言，也可以使用del list.(index),无返回值
      5. list.reverse()          反转list
      6. list.count(obj)         返回obj在list里出现的次数
      7. list.clear()            清空list
      8. list.copy()             返回list的值   b = a.copy() 此处赋值不是采用给予地址，所以 a is b >>>false
      9. a.sort()                按照一定规则对a进行排序   ，可以人为规定规则？？？
         如果不想改变原有列表顺序  b = sorted(a)
2. 元组(tuple)
   a = (123,456,789)   a=(123,)创建单个元素的元组要加逗号，否则括号会被当做运算
   1. 就是不可变的列表
3. 字典(dictionary)
   没有顺序，因此不可以使用索引，
   a = {"key1":value1,"key2":value2,...}键值对的组合，key是键名字，value是键值,使用字符必须加双引号  就是结构体(c)/对象(js)
   1. 键的特性：键不能出现两次，具有唯一性，值则不然。所以键可以为数字，字符，元组。其中最常做键的是整数和字符
   2. 一些常用的内置函数和方法：
      1. len(dict)            查询dict长度
      2. str(dict)            按照键值对的形式打印dict
      3. type(variable)       查询变量类型
      4. dict.clear()         清空字典，清空所有键值对
      5. dict2=dict1.copy()   复制dict1到dict2  浅复制，对与键值对（父对象）的修改不会影响另外一个，但对值里面（子对象）的修改会影响另外一个，因为里面的值是采用引用赋值（直接给地址）
      dict1={"name":["yup"],"age":19}
      dict2=dict1.copy()
      dict2["name"]="ypg"          不会修改dict1的name键值对
      dict2["name"].apend("ypg")   会修改dict1的name的值
      6. dict2=dict1.fromkeys(seq[,value])  创建一个新的字典，新的字典的键与seq一样,值默认为None,设置了的话就为value
      7. dict.get(key，fault)    找到键为key的值,没找到就返回fault值，fault可以不设置
      8. dict.keys()           返回dict的键
      9. dict.values()         返回dict的值
4. 集合(set)
   集合特点，不可重复，确定性，无序性
   set={value1,value2,...}
   1. 集合运算
```python
>>> a = set('abracadabra')
>>> b = set('alacazam')
>>> a                                  
{'a', 'r', 'b', 'c', 'd'}
>>> a - b                              # 集合a中包含而集合b中不包含的元素
{'r', 'd', 'b'}
>>> a | b                              # 集合a或b中包含的所有元素
{'a', 'c', 'r', 'd', 'b', 'm', 'z', 'l'}
>>> a & b                              # 集合a和b中都包含了的元素
{'a', 'c'}
>>> a ^ b                              # 不同时包含于a和b的元素
{'r', 'd', 'b', 'm', 'z', 'l'}
```
   1. 集合基本操作
   set.add(obj)                        将obj添加到set里面
   set.update(variable)                更新variable到set里面，variable可以是列表，元组，字典，与原字典重复的更新，相比原字典是新的就添加
   set.remove(obj)                     移除obj，没有obj的话就报错
   set.discard(obj)                    移除obj，如果没有，不报错
   set.pop()                           随机删除set里面一个元素
   len(set)                            返回set元素个数
   set.clear()                         清空set

### 五、运算符
仅介绍与c不同的
1. ** 乘方运算 4 ** 2 == 16
// 整除，往小的方向取整数  9 // 2 == 4
1. 海象运算符 ：= 在代码块中赋值的同时返回赋值结果，能够简化代码块
```python
   n = 5
   if (n := 10)>5:
      print(n)
```
最后输出结果是10
如果改成 n=10则会报错
1. 逻辑运算符
   1. and 并且
   2. or 或者
   3. not 非
2. 身份运算符号
   1. is 判断两个标识符是不是引用自一个对象
   2. is not
   赋值通过直接给予地址实现，因此使用is判断两个id是否相同时返回结果为true
```python
   a = 10
   b = 10
   a is b
   >>>true
```
1. 成员运算符
   1. in  如果在指定的序列中找到值返回 True，否则返回 False。
   2. not in
```python
   a = 10
   list = [1, 2, 3, 4, 5 ]
   a in list
   >>>false
```
1. 需要加深印象的位运算符
   1. & 与
   2. | 或
   3. ^ 异或  如果相异，返回true
   4. << 左移
   5. >> 右移

### 六、条件控制
1. if  expression:
      coding
2. match variable:
      case  condition1:
            code
      case  condition2:
            code
      case  _:             /就是c中的default
            code
//case可以设置多个匹配值
      case  condition31|condition32|...
//还没想好if里面写啥的时候可以写个pass，单纯占个位置，不影响代码继续执行
### 七、循环
1. while  judgement:
          code
   while  judgement:
          code
   else:
          code
2. for in  遍历：
   for variable in sequence:
         code
   else:
         code          
//在for循环结束后会执行一次else里面的语句，如果for里面break退出了，就不会执行else里面的代码
3. for in range(begin,end,step) 循环：
使用range函数进行索引  左闭右开  
range(number)  创建从零到number-1 的序列
range(1,10,3)  1 4 7

for i range(len(list))：     //遍历list
   print(list[i])


列表推导式：
```python
a=[11,21,44,50]
square=[]
for x in a:
   if x >30 :
      square.append(x**2)
print(square)
```
```python
a=[11,21,44,50]
square=[x**2 for x in a  if x>30]   后面if添加筛选条件

```

### 八、函数
