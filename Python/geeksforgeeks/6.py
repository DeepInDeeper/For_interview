# http://practice.geeksforgeeks.org/problems/sum-of-numbers-or-number/0/?ref=self
# For each test case, if the number of digits in sum (X+Y) are equal to the number of digits in X,
# then print sum, else print X
T = int(input())
while T:
    a,b = map(int,input().split())
    t_sum = a+b
    n = a
    n2 = t_sum
    while n:
        n = n//10
        n2 = n2//10
    out = a if n or n2 else t_sum
    print (out)
    T -= 1
