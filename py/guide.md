这里是py课程笔记
----

python
可以存储使用很大的数字
有交互开发环境（下载时自带的ide）
字符编码 utf-8  用三个字节表示符号
汉字以一个字符来处理，空格也算一个字符
modeule docs 后台web服务器
ide环境
赋值通过直接给予地址实现，因此使用is判断两个id是否相同时返回结果为true

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


### 三、标识符
1. 允许数字，汉字，下划线，字母    少用汉字
2. 第一个字符必须是字母表中字母或下划线 _ 
   标识符的其他的部分由字母、数字和下划线组成
   标识符对大小写敏感
3. 查询保留字：  import keyword  然后使用print(keyword.kwlist)  即可查询
判断保留字keyword.iskeyword(查询对象)

##### 四、注释代码书写规则
单行注释：单个引号
多行注释：三个引号
   
### 五、字符编码
ASCII
Unicode   万国码/统一码，占两个字节16位
UTF-8     用1~4字节表示字符
GBK       专门用来解决中文编码，中英文都是双字节
python3采用UTF-8编码方式

### 六、数据类型
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
   complex  