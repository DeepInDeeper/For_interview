# -*- coding: cp936 -*-
# 两种方法在python中实现多元逻辑回归
# origin：http://dataaspirant.com/2017/05/15/implement-multinomial-logistic-regression-python/
# 注释：
# sklearn.cross_validation 被移除，取而代之，model_selection

import pandas as pd
import numpy as np
from sklearn import linear_model
from sklearn import metrics
from sklearn.model_selection import train_test_split

import plotly.graph_objs as go
import plotly.plotly as py
from plotly.graph_objs import *
