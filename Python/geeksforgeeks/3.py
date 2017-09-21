# http://practice.geeksforgeeks.org/problems/missing-number-in-array/0
# python 3
T = int(input())
def recursion(data):
    Lo = 0
    Hi = len(data)-1
    while True:
        mid = int((Lo+Hi)/2)
        if data[Hi] == Hi+1:
            return Hi+2
        elif data[mid] == mid+1 and data[mid+1] == mid+2:
            Lo = mid
        elif data[mid] == mid+2 and data[mid-1] == mid+1:
            Hi = mid
        elif data[mid] == mid+1 and data[mid+1] == mid+3:
            return mid+2

while T:
    N = int(input())
    str_c = input().split()
    C = [int(a_str) for a_str in str_c]
    a = recursion(C)
    print (a)
    T -= 1