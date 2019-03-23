def vertical(n):
    '''
    print the digits of n from most significant to least, one per line.
    '''

    if n < 10:
        print(n)
    else:
        vertical(n // 10)
        print('What the hell is happening HERE')
        print(n % 10)
    list = [3, 4, 5, 6, 7, 8]

    print(list)


def printOdd100():

    listx = list(range(1,100))

    for i in listx:
        
        if (i % 2 != 0):
            print(i)





printOdd100()