# -*- coding: cp936 -*-
# 这可能不是你想要放进实际程序中的代码，但是它演示了__code__对象的一些功能。
# 其实，去年我就发现，探索_code_对象是十分有趣的！
def foo():
    return "I'm foo!"
def bar():
    return "I'm bar"

foo.__code__ = bar.__code__

# foo()
