# Origin http://practice.geeksforgeeks.org/problems/sum-of-upper-and-lower-triangles/0
# python 3
T = int(input())
while T:
    n = int(input())
    str_a = input().split()
    a = [int(a_str) for a_str in str_a]
    i = 0
    j = 0
    k = 0
    lower = 0
    upper = 0
    while j != n:
        k += 1
        i += 1
        if i == (n+1)*j+1:
            upper += a[i-1]
            lower += a[i-1]
        elif i > (n+1)*j+1:
            upper += a[i-1]
        else:
            lower += a[i-1]
        if k == n:
            k = 0
            j += 1
    print(upper,lower)
    T -= 1




