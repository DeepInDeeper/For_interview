# For_interview
This is personal git to do some programming for passing job interview.(Python,C)
#### Reflection:
> Thinking,self-programming


---
<font color=#F08080 size=6 face="楷体">
 python3编程

<font color=#FFD700 size=5 face="仿宋">

* python3 求余 使用 //

##### 1.用input一行输入多行数字怎么处理
    str_a = input("Enter number:").split(" ")
    a = [float(a_str) for a_str in str_a]
###### 但是这么操作会有问题，主要是多个空格将不能识别。解决方法很简单：去除空格分离，直接使用split
        str_a = input("Enter number:").split()
        a = [float(a_str) for a_str in str_a]
###### 同时给多个赋值：
    N,M = map(int, input().split())
---
##### 1.如何求解数组丢失的数字以及重复的数字
    a = sum(range(len(str_c)+2)) - sum(C)
######   通过求和的方式进行。倘若是C这个效率不高，但是Python自带sum效率是可以的
---
###### Summary website: 
> [GeekforGeek](http://www.geeksforgeeks.org/)

###### Practice website:
> [geekforgeek](http://practice.geeksforgeeks.org/)
