#-*-coding:utf-8-*-
# remark
# http://practice.geeksforgeeks.org/problems/phone-directory/0

#code
def main():
    for i in range(int(input())):
        N = int(input())
        vals = input().split()
        query = input()
        for i in range(len(query)):
            res = set()
            q = query[:i+1]
            for v in vals:
                if v.startswith(q):
                    res.add(v)
            if res:
                print(" ".join(sorted(list(res))))
            else:
                print("0")


if __name__ == "__main__":
    main()

