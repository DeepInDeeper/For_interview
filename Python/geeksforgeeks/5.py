#code
# http://practice.geeksforgeeks.org/problems/remove-common-characters-and-concatenate/0
T = int(input())
while T:
    a = input()
    b = input()
    for b1 in b:
        if b1 in a:
            b=b.replace(str(b1),"")
            a=a.replace(str(b1),"")
    r=(a+b) if len(a+b)!=0  else -1
    print (r)
    T -= 1