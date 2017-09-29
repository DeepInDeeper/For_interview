#-*-coding:utf-8-*- 
def maxinumVaporRate(numOfChemicals,vaporRate):
    max_va = vaporRate.index(max(vaporRate))
    min_va= vaporRate.index(min(vaporRate))
    print max_va,min_va
    pass

if __name__ == "__main__";
    maxinumVaporRate(8,[55,-20,80,-100,-80,100,-20,55])