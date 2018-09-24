def gcd(x, y):
    while y:
        x, y = y, x % y
    print(x)


gcd(303, 3)
