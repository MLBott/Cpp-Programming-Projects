# Python Program to find the L.C.M. of two input number

# define a function

myList = [4,5,12,-2, 8, 9]

def sumTotalEquals(arrayUser, Total):
    newList = []
    for item in arrayUser:
        for number in arrayUser:
            if (item + number == Total):
                if item != number:
                    newList.append(item)
                    newList.append(number)
    set(newList)
    print(set(newList))




sumTotalEquals(myList, 10)