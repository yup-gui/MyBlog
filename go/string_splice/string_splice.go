package stringsplice

import (
	"bytes"
	"fmt"
	"strings"
)

func main() {
	a := "abcd"
	b := "efgh"
	//使用+拼接字符
	first := a + "," + b
	fmt.Println(first)
	//使用fmt.Sprintf()
	second := fmt.Sprintf("%v,%v", a, b)
	fmt.Println(second)
	//使用strings.Join()
	strings.Join()

}
