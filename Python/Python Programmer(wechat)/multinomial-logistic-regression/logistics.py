# -*- coding: cp936 -*-
# ���ַ�����python��ʵ�ֶ�Ԫ�߼��ع�
# origin��http://dataaspirant.com/2017/05/15/implement-multinomial-logistic-regression-python/
# ע�ͣ�
# sklearn.cross_validation ���Ƴ���ȡ����֮��model_selection

import pandas as pd
import numpy as np
from sklearn import linear_model
from sklearn import metrics
from sklearn.model_selection import train_test_split

import plotly.graph_objs as go
import plotly.plotly as py
from plotly.graph_objs import *
