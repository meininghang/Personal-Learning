text = "X-DSPAM-Confidence:    0.8475"
found = text.find(':')
print(float(text[found+1:]))
