# origin : http://practice.geeksforgeeks.org/problems/find-median-in-a-stream/0
def get_median(data):
    data.sort()
    half = len(data) // 2
    return (data[half] + data[~half]) / 2


T = int(input())
a = []
while T:
    x = int(input())
    a.append(x)
    out = int(get_median(a))
    print (out)
    T -= 1



