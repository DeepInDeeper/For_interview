# -*- coding: cp936 -*-
# ����ܲ�������Ҫ�Ž�ʵ�ʳ����еĴ��룬��������ʾ��__code__�����һЩ���ܡ�
# ��ʵ��ȥ���Ҿͷ��֣�̽��_code_������ʮ����Ȥ�ģ�
def foo():
    return "I'm foo!"
def bar():
    return "I'm bar"

foo.__code__ = bar.__code__

# foo()
