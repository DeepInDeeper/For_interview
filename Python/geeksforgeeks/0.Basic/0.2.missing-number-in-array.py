# http://practice.geeksforgeeks.org/problems/missing-number-in-array/0
# python 3
T = int(input())
while T:
    N = int(input())
    sum_c = 0
    str_c = input().split()
    C = [int(a_str) for a_str in str_c]
    #a = recursion(C)
    a = sum(range(len(str_c)+2)) - sum(C)
    print (a)
    T -= 1