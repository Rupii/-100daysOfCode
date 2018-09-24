def maxDiv(a, b):
    while a % b == 0:
        a /= b
    return a


def isUgly(n):
    n = maxDiv(n, 2)
    n = maxDiv(n, 3)
    n = maxDiv(n, 5)
    return 1 if n == 1 else 0


def NthUgly(n):
    i = 1
    count = 1
    while n > count:
        i += 1
        if isUgly(i):
            print(i, end=" ")
            count += 1
    return i


print(NthUgly(15))
