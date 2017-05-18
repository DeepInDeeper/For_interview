# Origin from :http://machinelearningmastery.com/handle-missing-data-python/

from pandas import read_csv
import numpy

from sklearn.discriminant_analysis import LinearDiscriminantAnalysis
from sklearn.model_selection import KFold
from sklearn.model_selection import cross_val_score

dataset = read_csv('pima-indians-diabetes.csv',header = None)
#print (dataset.describe())
#print dataset.head(20)
#print (dataset[[1,2,3,4,5]]==0).sum()
dataset[[1,2,3,4,5]] = dataset[[1,2,3,4,5]].replace(0,numpy.NaN)

dataset.dropna(inplace = True)

values = dataset.values
x = values[:,0:8]
y = values[:,8]

model = LinearDiscriminantAnalysis()
kfold = KFold(n_splits=3, random_state=7)
result = cross_val_score(model, X, y, cv=kfold, scoring='accuracy')
print(result.mean())




