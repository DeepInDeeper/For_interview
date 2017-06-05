# http://machinelearningmastery.com/difference-time-series-dataset-python/

from pandas import read_csv
from pandas import datetime
from matplotlib import pyplot
from pandas import Series


def parser(x):
    return datetime.strptime('190'+x,'%Y-%m')

series = read_csv('sales-of-shampoo.csv',header=0,parse_dates=[0],\
                  index_col=0,squeeze=True,date_parser=parser)
'''
series.plot()
pyplot.show()
'''
'''
# create a difference series
def difference(dataset,interval=1):
    diff = list()
    for i in range(interval,len(dataset)):
        value = dataset[i] - dataset[i - interval]
        diff.append(value)
    return Series(diff)

series = read_csv('sales-of-shampoo.csv',header=0,parse_dates=[0],\
                  index_col=0,squeeze=True,date_parser=parser)

X = series.values
diff = difference(X)
'''
diff = series.diff(1)
pyplot.plot(diff)
pyplot.show()
