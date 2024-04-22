package main

import (
	"bytes"
	"fmt"
	"strings"
)

func main() {
	//1. 字符串拼接操作
	a := "hello"
	b := "世界！!"
	//使用+拼接字符
	first := a + "," + b
	fmt.Println(first)
	//使用fmt.Sprintf()
	second := fmt.Sprintf("%v,%v", a, b)
	fmt.Println(second)
	//使用strings.Join()
	third := strings.Join([]string{a, b}, ",")
	fmt.Println(third)
	//strings.Builder
	var fourth strings.Builder
	fourth.WriteString(a)
	fourth.WriteString(",")
	fourth.WriteString(b)
	fmt.Println(fourth.String())
	//bytes.Buffer
	var fifth bytes.Buffer
	fifth.WriteString(a)
	fifth.WriteString(",")
	fifth.WriteString(b)
	fmt.Println(fifth.String())

	//2. 获取字符串长度
	//可以不再引入包，go内置了函数len()，采用utf——8，即英文一个字节，中文三字节
	fmt.Printf("a字符串长度为：%v\n", len(a))
	fmt.Printf("b字符串长度为：%v", len(b))
}
