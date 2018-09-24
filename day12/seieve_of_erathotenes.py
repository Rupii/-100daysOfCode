def SeieveOfErathothenes(n):
    m = n
    n = [True for i in range(n+1)]
    p = 2
    while p*p < m:
        for i in range(p*2, m+1, p):
            if n[i] == True:
                n[i] = False
        p += 1

    for i in range(2, m+1):
        if n[i] == True:
            print(i, end=" ")


if __name__ == "__main__":
    # n = input("enter the number")
    SeieveOfErathothenes(5)
