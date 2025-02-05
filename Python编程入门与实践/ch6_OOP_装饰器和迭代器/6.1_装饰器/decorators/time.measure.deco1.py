from time import time,sleep

def f(sleep_time=0.1):
    sleep(sleep_time)

def measure(func):
    def wrapper(*args,**kwargs):
        t = time()
        func(*args,**kwargs)
        print(func.__name__,'took:',time()-t)
    return wrapper
f = measure(f)
f(sleep_time=0.3)
print(f.__name__)