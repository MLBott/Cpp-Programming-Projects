def int_to_bin(number):
    if number == 0:
        return str(0)
    result = ""
    while (number != 0):
        remainder = number % 2
        number = number // 2
        result += str(remainder)
    return result[::-1] # to invert the string


print(int_to_bin(2037))



