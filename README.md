# For_interview
This is personal git to do some programming for passing job interview.(Python,C)
#### Reflection:
> Thinking,self-programming

---
<font color=#F08080 size=6 face="楷体">
 python3编程

##### 1.用input一行输入多行数字怎么处理
    str_a = input("Enter number:").split(" ")
    a = [float(a_str) for a_str in str_a]
###### 但是这么操作会有问题，主要是多个空格将不能识别。解决方法很简单：去除空格分离，直接使用split
        str_a = input("Enter number:").split()
        a = [float(a_str) for a_str in str_a]
###### 同时给多个赋值：
    N,M = map(int, input().split())
---
###### Summary website: 
> [GeekforGeek](http://www.geeksforgeeks.org/)

###### Practice website:
> [geekforgeek](http://practice.geeksforgeeks.org/)
