# 一、基本语法

1. 标题
# 一级标题
## 二级标题
### 三级标题
#### 四级标题
##### 五级标题
###### 六级标题

2. 文字格式
**粗体**
*斜体*

3. 图片
![alt text](ddress)
![](梗小姐.jpg)
链接
[text](address)
[mybilibili](https://space.bilibili.com/154139383?spm_id_from=333.1007.0.0)
引用链接
[bilibili]
[baidu]

引用块
> text

行内代码`int func(int a,int length){}`
代码块（围栏代码块）
```python
    def func
```
分割线
***
---
___

4. 排序
1）有序
数字+英文句号+空格+文字
>1. 
>2. 
2）无序
“-”+三个空格+文字
-   1
-   2
3）嵌套
Tab+"-"+空格
1.  第一层 
    - 第二层
    - 第二层


# 二、GFM拓展语法
1. 删除线
~~被删除内容~~
2. 表情符号
:表情代码:
:smile:
:laughing:
:+1:
🙅‍♂️
更多表情代码见[Webfx]
1. 表格

|              | 现在         | 过去         | 将来         | 过去将来         |
| ------------ | ------------ | ------------ | ------------ | ---------------- |
| **一般**     | 一般现在     | 一般过去     | 一般将来     | 一般过去将来     |
| **完成**     | 现在完成     | 过去完成     | 将来完成     | 过去将来完成     |
| **进行**     | 现在进行     | 过去进行     | 将来进行     | 过去将来进行     |
| **完成进行** | 现在完成进行 | 过去完成进行 | 将来完成进行 | 过去将来完成进行 |

必须在前添加空行

4. 完成清单
- [ ] ?
- [x] ?
为出现方框，需要添加空格

1. 锚点
[标记点](#二级标题)

总结：整个语义块、功能块前后要用空格隔开，markdown是标记语言，标记符号是一个整体，后面内容又是一个整体。

# 三、初步排版设计
整体原则，分配好空间，调整紧凑度

# 四、VS code中使用markdown
1. 目录
[TOC]

2. 引入文件
@import "梗小姐.jpg"

3. 幻灯片 
@import "light.md"

4. markdown all in one
ctrl+B  **加粗**
ctrl+I  *斜体*
Ctrl+Shift+F 格式化markdown里面的表格

| one     | two     |
| ------- | ------- |
| content | content |


[bilibili]: https://www.bilibili.com/
[baidu]: https://www.baidu.com/
[Webfx]:https://www.webfx.com/tools/emoji-cheat-sheet/