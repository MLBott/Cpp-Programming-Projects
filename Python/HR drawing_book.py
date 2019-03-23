
#
# Complete the pageCount function below.
#
def pageCount(n, p):
    frontBackDecider = (n / 2) + .5
    if p < frontBackDecider and p != 1:
        return (p // 2)
    elif p >= frontBackDecider and p != n:
        if n % 2 == 1:
            return (((n - p)) // 2)
        elif n % 2 == 0:
            return (((n - p) + 1) // 2)
    else:
        if p == n and (p % 2 == 0):
            return 0
        elif p == n and (p % 2 == 1):
            return 0
        elif p == (n - 1) and (n % 2 == 0):
            if n == 2:
                return 0
            else:
                return 1
# for p == 1
        else:
            return 0


print(pageCount(101, 52))

