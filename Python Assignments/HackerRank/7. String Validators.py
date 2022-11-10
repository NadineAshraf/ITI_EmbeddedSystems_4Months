if __name__ == '__main__':
    s = input()
alnum = False
alpha = False
dig = False
lower = False
upper = False
for ch in s:
    if ch.isalnum() is True:
        alnum = True
    if ch.isalpha() is True:
        alpha = True
    if ch.isdigit() is True:
        dig = True
    if ch.islower() is True:
        lower = True
    if ch.isupper() is True:
        upper = True  
print(alnum)
print(alpha)
print(dig)
print(lower)
print(upper) 
