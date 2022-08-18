def computepay(h, r):
    if h <= 40:
        gross_pay = h * r
    else:
        gross_pay = 40 * r + (h-40) * r * 1.5
    
    return gross_pay

hrs = input('Enter Hours:')
h = float(hrs)

rate = input('Enter Rate:')
r = float(rate)

p = computepay(h,r)
print('Pay', p)