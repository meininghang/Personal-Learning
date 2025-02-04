from time import time
mx = 2 * 10 ** 7

t = time()
absloop = []

for n in range(mx):
    absloop.append(abs(n))
print(f'for loop :{time() - t :.4f} s')

t = time()
abslist = [abs(n) for n in range(mx)]
print(f'list comprehension {time()-t :.4f} s')

t = time()
absmap = list(map(abs,range(mx)))
print(f'map:{time()-t :.4f} s')