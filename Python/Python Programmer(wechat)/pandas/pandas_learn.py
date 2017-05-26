# orgin :https://pandas-datareader.readthedocs.io/en/latest/remote_data.html#yahoo-finance

import datetime
from pandas_datareader.data import Options


aapl = Options('aapl', 'yahoo')
expiry = datetime.date(2016, 1, 1)

data = aapl.get_call_data(expiry=expiry)

print data.iloc[0:5:, 0:5]
