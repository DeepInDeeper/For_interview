# For_interview
This is personal git to do some programming for passing job interview.(Python,C)
#### Reflection:
> Thinking,self-programming


---
<font color=#F08080 size=6 face="楷体">
 python3编程

<font color=#FFD700 size=5 face="仿宋">

* python3 求余 使用 //
* np.r_ , np.c_用法：concatenation function;
   np.r_按row来组合array，
   np.c_按colunm来组合array
* x.ravel() 多维降低到一维
###
    a = np.array([1,2,3])
    b = np.array([5,2,5])
    //测试 np.r_
    np.r_[a,b]
    array([1, 2, 3, 5, 2, 5])
    //测试 np.c_
    np.c_[a,b]
    array([[1, 5],
           [2, 2],
           [3, 5]])
    np.c_[a,[0,0,0],b]
    array([[1, 0, 5],
           [2, 0, 2],
           [3, 0, 5]])
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
