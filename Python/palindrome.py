# -*- coding: cp936 -*-

# 问题：找出字符串最大回文数


def simple_solu():
    max_count = 0
    total_count = 0
    input_strings = raw_input("Enter the string to detect  ")
    lenth= len(input_strings)
    for i in range(len(input_strings)):
        count_one = 0
        count_two = 0
        tmp = i+1
        a_one = tmp-1
        b_one = b_two = tmp+1
        flag_one = 1
        flag_two = 1
        while flag_one and (a_one >= 0) and (b_one < lenth):
            if input_strings[a_one] == input_strings[b_one]:
                a_one = a_one - 1
                b_one = b_one + 1
                count_one = count_one + 1
            else:
                flag_one = 0
#        print("the count is " + str(count_one))
        total_count = count_one * 2 + 1
        if max_count < total_count:
            max_count = total_count
#        print ("the first is "+str(max_count))
        while flag_two and (tmp >= 0) and (b_two < lenth):
            if input_strings[tmp] == input_strings[b_two]:
                tmp = tmp - 1
                b_two = b_two + 1
                count_two = count_two + 1
            else:
                flag_two = 0
        total_count = count_two * 2
        if max_count < total_count:
            max_count = total_count
#        print ("the second is " + str(max_count))
    print ("the max_count is "+str(max_count))
    
if __name__ == '__main__':
    while 1:
        simple_solu()
