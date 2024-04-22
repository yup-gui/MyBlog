package main

import "fmt"

func main() {
	myStr := []string{"MYBLOG", "NAME"}
	for i, v := range myStr { //这里理解成把v赋值成myStr的个个值
		fmt.Printf("当此循环：%v", i)
		fmt.Printf("输出对象：%v\n", v)
	}
}
