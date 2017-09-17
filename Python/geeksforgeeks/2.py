# Origin http://practice.geeksforgeeks.org/problems/rectangle-number/0
# python 3
# 使用数学归纳法进行归纳
# 假设 N>M
# 1系列: M*(1+2+...N)
# 2系列：(M-1)*(1+2+...N)
# M系列： 1 *(1+2+...N)
T = int(input())
while T:
	N,M = map(int, input().split())
	total_rectangles = int(N*(N+1)*M*(M+1)/4)
	print (total_rectangles)
	T -= 1
