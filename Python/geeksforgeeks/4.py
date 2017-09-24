# http://practice.geeksforgeeks.org/problems/numbers-with-0-as-a-digit/0
# python 3

T = int(input())
while T:
    n = int(input())
    n3 = (n//1000) % 10
    n2 = (n//100) % 10
    n1 = (n//10) % 10
    n0 = (n/1) % 10
    if n == 10000:
        result = n//10+9*9+90*9+9*9*9
    elif n3:
        if n2 ==0:
            tmp0 =n//10+9*9
            tmp1=(n3-1)*99+n1*10+n0-n1-(n3-1)*9
            tmp2 = 9*9*(n3-1)
            result = tmp0+tmp1+tmp2

        else:
            tmp0 = n//10 + 9*9
            tmp1 = n3*99-9*n3
            tmp2 = 9*9*(n3-1)
            tmp3 = n2*9 if n1!=0 else (n2-1)*9+n0
            result = tmp0+tmp1+tmp2+tmp3
    else:
        tmp0 = n//10
        tmp3 = n2*9 if n1!=0 else (n2-1)*9+n0
        result = tmp0+tmp3
    print (result)
    T -= 1
