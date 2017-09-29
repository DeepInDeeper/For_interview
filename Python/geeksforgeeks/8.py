#-*-coding:utf-8-*-
# unsolved
# remove 是删除首个符合条件的元素。并不是删除特定的索引
# http://practice.geeksforgeeks.org/problems/phone-directory/0

T = int(input())
while T:
    N = int(input())
    str_dic = input().split()
    query = input()
    list_out = str_dic
    for i in range(len(query)):
        for list_ele in list_out:
            if str(list_ele[i]) != str(query[i]):
                list_out.remove(list_ele)
        print (query[i],list_out)
    T -= 1
