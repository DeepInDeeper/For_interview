from datetime import datetime
import math
import time
import tensorflow as tf

def conv_op(input_op,name,kh,kw,n_out,dh,dw,p):
	n_in = input_op.get_shape()[-1].value
