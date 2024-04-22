### 1. Go 包的概念
> 把相同的功能放到一个文件夹，称之为包
> 包可以被其他的包引用
> main包用来生成可执行文件，每个程序只有一个main包,main包是程序入口
> 包可以提高代码的可复用性
>
常见go内置包里面的函数
"fmt"  常见输入输出函数包
   1. Printf  即c里面的printf
   2. Sprintf 可以将打印结果直接返回给变量 eg. k := fmt.Sprintf("%.1f",r)
"strings"  字符串操作包
   1. 
"bytes"  
   1. 
### 2. 终端里面常用go指令
   go mod init packagename  配置包
   go run packagename       运行程序（main包是入口）

### 3. go命名规范
   字母+下划线+数字，首字不为数字。严格区分大小写
   空白标识符（仅由下划线组成  "_"） 用来  
   1. 导入包但不调用包里面的任意变量或者函数（仅仅是初始化包）；
   2. 函数有多个返回值时，不返回的值用空白标识符接住
   3. 类型断言？？？

   导出标识符：某个包中的某个函数或者变量想要允许被其他包调用，就得把这个函数命名的首字变成大写。eg. fmt.Printf()

### 4. 定义常量/变量 
    1. 变量定义与赋值  定义的变量以及引入的包必须被使用，否则会编译失败
       1. var name type = value
      var name type = value   
      var (
        name type
        name type
      )//同时定义多个变量
       2. name := value  根据value值自动定义变量
    2. 常量定义 
        1. const name (type) =value
        2. const(
            name =value
            name type =value
            )
        3. const name1,name2 = value1,value2

### 5. 运算符(仅介绍与c不同的)
赋值运算符  <<= 按位左移再赋值
           >>=     右
           &=  按位与运算再赋值
           ^=  按位异或运算再赋值
           |=  按位或运算再赋值
位运算符（将数值转换成二进制之后再进行位运算）  
         &  与    10 & 11 结果为 10
         |  或    10 | 11 结果为 11
         ^  异或  10 ^ 11 结果为 01
         << 左移  10 << 2 结果为 1000
         >> 右移  1000 >> 2 结果为 0010（移动过程中，正数最高位补0，负数最高位补1）

### 6. 数据类型
   int 有符号整数（长度跟计算机操作系统有关，32位为4字节，64位为8字节）
   uint 无符号整数
   float64 （精度更佳）
   float32  
   不同类型的浮点型不能直接计算，整型和浮点型之间也不能直接计算   强制转换格式 type（varietyname）
   complex128 与complex64  复数，其定义与赋值为  var name complex128/64 = complex(x,y)  其中x为实部，y为虚部。x、y都是64/32位浮点数，不同类型的复数不能运算
   uint/byte 字符型，代表ascii码的一个字符  
   rune 代表一个utf-8字符

### 7. 常见占位符
   %T  输出变量的数据类型
   %v  以变量的数据类型的格式输出
   %f  以浮点类型输出
   %b  以二进制形式输出  %o  八进制  %d  十进制  %x  十六进制
   %s  字符串形式输出   %c  字符形式输出


### 8. 常见转义符
   \t 制表符  \n 换行符  \r回车符(回到当前行的行首,前面的内容会被覆盖)


### 9. 切片——动态数组，可以根据数据量自动调节长度
定义并赋值
   1. var name = []type{value1,value2,...}  name := []type{value1,value2,...}
   2. var name []type =make([]type,len)   name := make([]type,len)   make函数必须设置切片的长度
优点：切片会自动改变长度，go不会给他分配内存地址

### 10. 流程控制语法
if 判断条件 {
   执行语句
}else if 判断条件{
   执行语句
}else {
   执行语句
}

switch 判断对象变量{
   case 值1：
         执行语句1
   case 值2：
         执行语句2
   default：（去掉上面所有case后剩余情况）
         执行语句
}

for               go中只有for这个循环！！！
for 变量初始值；判断条件；变量控制（如i++）{
   执行语句
}   //三个设置可以随意组合，也可以一个都不要，但是一定要保证循环最后能够跳出

for-range 遍历对象：
举个例子
myStr :=[]string{"MYBLOG","NAME"}
for i,v := range myStr  {   //这里理解成把v赋值成myStr的个个值
   fmt.Printf("当此循环：%v\n"，i)
   fmt.Printf("输出对象：%v\n"，v)
}
对应输出结果为； 当此循环：0
               输出对象：MYBLOG
               当此循环：
               输出对象：NAME

break 与 continue
后者和c一样，不多介绍
break可以直接跳出多层循环，只需额外加上标签（标签需要在指定跳出的循环语句前标记）即可
举个例子
for{
   back:
   for {
      for{
         ....
         break back
      }
   }
}
使用break后会终止标签的代码语句
