from time import sleep,time
from functools import wraps

def measure(func):
    @wraps(func)
    def wrapper(*args,**kwargs):
        t = time()
        func(*args,**kwargs)
        print(func.__name__,'took:',time()-t)
    return wrapper

@measure
def f(sleep_time=0.1):
    """I'm a cat. I love to sleep!"""
    sleep(sleep_time)

f(sleep_time=.3)
print(f.__name__,':',f.__doc__)